import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile
from geometry_msgs.msg import Quaternion
from sensor_msgs.msg import JointState
from tf2_ros import TransformBroadcaster, TransformStamped
from math import sin, cos, pi, atan, acos, sqrt, pi, atan2, asin, tan
from geometry_msgs.msg import Vector3Stamped, Vector3, PoseArray
from satellite_interfaces.msg import SatelliteVec
from satellite_interfaces.srv import SatelliteName, SatelliteSpawn, OnOffPath
from std_msgs.msg import String
from std_srvs.srv import Trigger

from nav_msgs.msg import Path
from geometry_msgs.msg import PoseStamped, Pose

import numpy as np

from orbit_predictor.sources import get_predictor_from_tle_lines
import datetime
import time

class SatelliteUtils(Node):
    def __init__(self):
        super().__init__('satellite_utils')
        
        self.vel_sub = self.create_subscription(SatelliteVec, 'satellite_set_vel', self.vel_callback, 10)
        self.pos_sub = self.create_subscription(SatelliteVec, 'satellite_set_pos', self.pos_callback, 10)
        self.rot_sub = self.create_subscription(SatelliteVec, 'satellite_set_rot', self.rot_callback, 10)

        self.spawn_srv = self.create_service(SatelliteSpawn, 'satellite_spawn', self.spawn_callback)
        self.remove_srv = self.create_service(SatelliteName, 'satellite_remove', self.remove_callback)
        self.path_on_off_srv = self.create_service(OnOffPath, 'path_on_off', self.path_on_off_callback)
        self.sim_on_off_srv = self.create_service(Trigger, 'sim_on_off', self.sim_on_off_callback)
        self.all_path_on_off_srv = self.create_service(Trigger, 'all_path_on_off', self.all_path_on_off_callback)

        # self.qos = QoSProfile(depth=10)
        self.qos = QoSProfile(depth=1, durability=rclpy.qos.QoSDurabilityPolicy.TRANSIENT_LOCAL)
        self.broadcaster = TransformBroadcaster(self, qos=QoSProfile(depth=10))
        self.satellites_vels = {}

        self.ENABLE = True
        self.PATH_ENABLE = True
        
        #pos rot path data{}
        #data: [enable_path]
        self.satellites = {}

        self.timer = self.create_timer(0.01, self.timer_callback)

        self.paths = {}

        self.epoch_time = round(time.time())

        # self.path_pub = self.create_publisher(Path, 'path_1', self.qos)
        self.path_pubs = {}
        for i in range(1, 13):
            self.path_pubs[str(i)] = self.create_publisher(Path, 'path_' + str(i), self.qos)
        
        self.kepler_i_sat = {'1': '03.7500', '2': '11.2500', '3': '18.7500', '4': '26.2500', '5': '33.7500',
        '6': '41.2500', '7': '48.7500', '8': '56.2500', '9': '63.7500', '10': '71.2500', '11': '78.7500', '12': '86.2500'}
        self.TLE_LINES = (
            "1 25544U 98067A   24136.79884226  .00020274  00000+0  34526-3 0  9999",
            "2 25544  51.6378 115.9329 0003286 171.4661 259.6570 15.51363823453527"
        )

        self.gen_paths()

    def sim_on_off_callback(self, request, response):
        self.ENABLE = not self.ENABLE
        response.success = True
        response.message = ""
        return response

    def all_path_on_off_callback(self, request, response):
        self.PATH_ENABLE = not self.PATH_ENABLE

        for i in self.satellites:
            self.satellites[i][2].poses.clear()
            self.satellites[i][3]['enable_path'] = self.PATH_ENABLE
        
        response.success = True
        response.message = ""
        return response

    def path_on_off_callback(self, request, response):
        if request.name in self.satellites:
            self.satellites[request.name][2].poses.clear()
            if self.satellites[request.name][3]['enable_path']:
                self.satellites[request.name][3]['enable_path'] = False
            else:
                
                self.satellites[request.name][3]['enable_path'] = True
            response.success = True
        else:
            response.success = False
        return response

    def gen_paths(self):
        self.rot_count = 10
        
        for i in self.path_pubs:
            path = Path()
            path.header.stamp = self.get_clock().now().to_msg()
            path.header.frame_id = 'base_link'
            self.path_pubs[i].publish(path)

    def spawn_callback(self, request, response):
        self.get_logger().info(f"spawning {request.name}")

        #sending urdf
        desc_publisher = self.create_publisher(String, 'satellite_' + request.name, self.qos)
        msg = String()
        with open("/home/andrew/leto/src/satellite_run/urdf/satellite_new.urdf", "r") as f:
            file_data = f.read()
            file_data = file_data.replace('NAME', request.name)

            msg.data = file_data
        desc_publisher.publish(msg)        

        init_pos = Vector3()

        init_pos.x = 0.0
        init_pos.y = 0.0
        init_pos.z = -12.0

        init_rot = Vector3()
        init_rot.x = 0.0
        init_rot.y = 0.0
        init_rot.z = 0.785

        path = Path()
        path.header.stamp = self.get_clock().now().to_msg()
        path.header.frame_id = 'base_link'

        # self.satellites[request.name] = [init_pos, init_rot, path, {'path_name': request.path_name, 'path_ind': request.start_angle * self.rot_count}]
        TLE = self.TLE_LINES
        TLE = (
            TLE[0],
            TLE[1].replace('51.6378', str(self.kepler_i_sat[request.name]))
        )

        # self.get_logger().info(f"sat {request.name} TLE: {TLE}")
        
        self.satellites[request.name] = [init_pos, init_rot, path, {'enable_path': True, 'predictor': get_predictor_from_tle_lines(TLE)}]

        response.success = True
        return response
    
    def remove_callback(self, request, response):
        self.get_logger().info(f"removing {request.name}")

        if request.name not in self.satellites:
            #sending urdf
            desc_publisher = self.create_publisher(String, 'satellite_' + request.name, self.qos)

            msg = String()
            with open("/home/andrew/leto/src/satellite_run/urdf/satellite_empty.urdf", "r") as f:
                file_data = f.read()
                file_data = file_data.replace('NAME', request.name)
                msg.data = file_data
            desc_publisher.publish(msg)

            response.success = True
        else:
            response.success = False
        return response

    def add_path_point(self, frame_id, pos):
        if self.satellites[frame_id][3]['enable_path']:
            pose = PoseStamped()
            pose.header.stamp = self.get_clock().now().to_msg()
            pose.header.frame_id = 'base_link'

            pose.pose.position.x = pos.x
            pose.pose.position.y = pos.y
            pose.pose.position.z = pos.z

            self.satellites[frame_id][2].poses.append(pose)

    def update_paths(self, frame_id):
        self.path_pubs[frame_id].publish(self.satellites[frame_id][2])
        # self.path_pub.publish(self.satellites[frame_id][2])

    def perform_gravity(self, frame_id):
        # TLE_LINES = (
        #     "1 25544U 98067A   24136.79884226  .00020274  00000+0  34526-3 0  9999",
        #     "2 25544  51.6378 115.9329 0003286 171.4661 259.6570 15.51363823453527"
        # )
        # TLE_LINES = (
        #     "1 25544U 98067A   24136.79884226  .00020274  00000+0  34526-3 0  9999",
        #     "2 25544  51.6378 115.9329 0003286 171.4661 259.6570 15.51363823453527"
        # )
        # predictor = get_predictor_from_tle_lines(TLE_LINES)
        
        predictor = self.satellites[frame_id][3]['predictor']

        k = 166
        pos = predictor.get_position(datetime.datetime.utcfromtimestamp(self.epoch_time))
        
        pos_x, pos_y, pos_z = pos.position_ecef
        pos_x /= k
        pos_y /= k
        pos_z /= k
        # self.get_logger().info(f"x {x} y {y} z {z}")

        self.satellites[frame_id][0].x = pos_x
        self.satellites[frame_id][0].y = pos_y
        self.satellites[frame_id][0].z = pos_z

        #TODO
        vel_x, vel_y, vel_z = pos.velocity_ecef
        vel_k = 3.14
        vel_x /= vel_k
        vel_y /= vel_k
        vel_z /= vel_k

        # self.satellites[frame_id][1].x = vel_x
        # self.satellites[frame_id][1].y = vel_y
        # self.satellites[frame_id][1].z = vel_x
        # self.get_logger().info(f"vel_x {vel_x} vel_y {vel_y} vel_z {vel_z}")

        self.epoch_time += 1

        # self.add_path_point('1', self.satellites[frame_id][0])
        self.add_path_point(frame_id, self.satellites[frame_id][0])

        # self.satellites[frame_id][0].x = 


        #move to center
        # if self.satellites[frame_id][0].x > 0:
        #     self.satellites[frame_id][0].x += a * sin(self.satellites[frame_id][1].y)
        # else:
        #     self.satellites[frame_id][0].x -= a * sin(self.satellites[frame_id][1].y)
        
        # if self.satellites[frame_id][0].z > 0:
        #     self.satellites[frame_id][0].z += a * cos(self.satellites[frame_id][1].y)
        # else:
        #     self.satellites[frame_id][0].z -= a * cos(self.satellites[frame_id][1].y)


        #move by tangent
        # self.satellites[frame_id][0].x += -v * cos(self.satellites[frame_id][1].y)
        # self.satellites[frame_id][0].y += -v * cos(self.satellites[frame_id][1].y)
        # self.satellites[frame_id][0].z += v * sin(self.satellites[frame_id][1].y)

        #increasing angular velocity
        # w = v / r
        # self.satellites[frame_id][1].y += w



    def handle_satellites(self, frame_id):
        odom_trans = TransformStamped()
        odom_trans.header.frame_id = 'base_link'
        odom_trans.child_frame_id = frame_id
        
        odom_trans.header.stamp = self.get_clock().now().to_msg()
        odom_trans.transform.translation.x = self.satellites[frame_id][0].x
        odom_trans.transform.translation.y = self.satellites[frame_id][0].y
        odom_trans.transform.translation.z = self.satellites[frame_id][0].z

        odom_rot = TransformStamped()
        odom_rot.header.frame_id = frame_id
        odom_rot.child_frame_id = 'end_' + frame_id
        
        odom_rot.header.stamp = self.get_clock().now().to_msg()
        odom_rot.transform.translation.x = 0.0
        odom_rot.transform.translation.y = 0.0
        odom_rot.transform.translation.z = 0.0

        self.perform_gravity(frame_id)

        odom_rot.transform.rotation = euler_to_quaternion(self.satellites[frame_id][1].x, self.satellites[frame_id][1].y, self.satellites[frame_id][1].z)

        self.broadcaster.sendTransform(odom_trans)
        self.broadcaster.sendTransform(odom_rot)

    def timer_callback(self):
        if self.ENABLE:
            for i in self.satellites:
                self.handle_satellites(i)
                self.update_paths(i)

    def vel_callback(self, msg):
        self.satellites[msg.name][2] = msg.vector

    def pos_callback(self, msg):
        self.satellites[msg.name][0] = msg.vector

    def rot_callback(self, msg):
        self.satellites[msg.name][1] = msg.vector

def euler_to_quaternion(roll, pitch, yaw):
    qx = sin(roll/2) * cos(pitch/2) * cos(yaw/2) - cos(roll/2) * sin(pitch/2) * sin(yaw/2)
    qy = cos(roll/2) * sin(pitch/2) * cos(yaw/2) + sin(roll/2) * cos(pitch/2) * sin(yaw/2)
    qz = cos(roll/2) * cos(pitch/2) * sin(yaw/2) - sin(roll/2) * sin(pitch/2) * cos(yaw/2)
    qw = cos(roll/2) * cos(pitch/2) * cos(yaw/2) + sin(roll/2) * sin(pitch/2) * sin(yaw/2)
    return Quaternion(x=qx, y=qy, z=qz, w=qw)

def quaternion_to_euler(x, y, z, w):
        t0 = +2.0 * (w * x + y * z)
        t1 = +1.0 - 2.0 * (x * x + y * y)
        roll_x = atan2(t0, t1)
     
        t2 = +2.0 * (w * y - z * x)
        t2 = +1.0 if t2 > +1.0 else t2
        t2 = -1.0 if t2 < -1.0 else t2
        pitch_y = asin(t2)
     
        t3 = +2.0 * (w * z + x * y)
        t4 = +1.0 - 2.0 * (y * y + z * z)
        yaw_z = atan2(t3, t4)
     
        return roll_x, pitch_y, yaw_z 

def main():
    rclpy.init()
    satellite_utils = SatelliteUtils()
    rclpy.spin(satellite_utils)
    
    satellite_utils.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
