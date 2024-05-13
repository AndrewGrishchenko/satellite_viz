import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile
from geometry_msgs.msg import Quaternion
from sensor_msgs.msg import JointState
from tf2_ros import TransformBroadcaster, TransformStamped
from math import sin, cos, pi, atan, acos, sqrt, pi, atan2, asin, tan
from geometry_msgs.msg import Vector3Stamped, Vector3, PoseArray
from satellite_interfaces.msg import SatelliteVec
from satellite_interfaces.srv import SatelliteName
from std_msgs.msg import String

from nav_msgs.msg import Path
from geometry_msgs.msg import PoseStamped, Pose

import numpy as np

class SatelliteUtils(Node):
    def __init__(self):
        super().__init__('satellite_utils')
        
        self.vel_sub = self.create_subscription(SatelliteVec, 'satellite_set_vel', self.vel_callback, 10)
        self.pos_sub = self.create_subscription(SatelliteVec, 'satellite_set_pos', self.pos_callback, 10)
        self.rot_sub = self.create_subscription(SatelliteVec, 'satellite_set_rot', self.rot_callback, 10)

        self.spawn_srv = self.create_service(SatelliteName, 'satellite_spawn', self.spawn_callback)
        self.remove_srv = self.create_service(SatelliteName, 'satellite_remove', self.remove_callback)

        # self.qos = QoSProfile(depth=10)
        self.qos = QoSProfile(depth=1, durability=rclpy.qos.QoSDurabilityPolicy.TRANSIENT_LOCAL)
        self.broadcaster = TransformBroadcaster(self, qos=QoSProfile(depth=10))
        self.satellites_vels = {}

        #pos rot data[]
        #data: [path_name, path_ind]
        self.satellites = {}

        self.timer = self.create_timer(0.01, self.timer_callback)

        self.paths = {}

        self.gen_paths()

    def gen_paths(self):
        self.make_path('1', [0.0, 0.0, 0.0])
        self.make_path('2', [0.0, 0.0, 1.57], 'z')
        self.make_path('3', [1.57, 0.0, 0.0], 'x')

        # self.make_path('4', [0.0, 0.0, -0.785], 'z')

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

        self.satellites[request.name] = [init_pos, init_rot, {'path_name': request.path_name, 'path_ind': 0}]

        response.success = True
        return response
    
    def remove_callback(self, request, response):
        self.get_logger().info(f"removing {request.name}")

        #sending urdf
        desc_publisher = self.create_publisher(String, 'satellite_' + request.name, self.qos)

        msg = String()
        with open("/home/andrew/leto/src/satellite_run/urdf/satellite_empty.urdf", "r") as f:
            file_data = f.read()
            file_data = file_data.replace('NAME', request.name)
            msg.data = file_data
        desc_publisher.publish(msg)

        response.success = True
        return response

    def perform_rot(self, frame_id):
        r = 12.0

        x_rot = self.satellites[frame_id][1].x
        y_rot = self.satellites[frame_id][1].y + 1.57
        z_rot = self.satellites[frame_id][1].z

        x_pos = self.satellites[frame_id][0].x
        z_pos = self.satellites[frame_id][0].z

        self.satellites[frame_id][0].x = r * cos(z_rot) * cos(y_rot)
        self.satellites[frame_id][0].y = r * sin(z_rot) * cos(y_rot)
        self.satellites[frame_id][0].z = -r * sin(y_rot)

        # self.satellites[frame_id][1].y += 0.001
        # self.satellites[frame_id][1].z = 0.15

    def make_rot(self, mode, cur_pos, phi):
        if mode == 'x':
            m = np.array([[1, 0, 0], [0, cos(phi), -sin(phi)], [0, sin(phi), cos(phi)]])
        elif mode == 'y':
            m = np.array([[cos(phi), 0, sin(phi)], [0, 1, 0], [-sin(phi), 0, cos(phi)]])
        elif mode == 'z':
            m = np.array([[cos(phi), -sin(phi), 0], [sin(phi), cos(phi), 0], [0, 0, 1]])

        pos = np.array([cur_pos.x, cur_pos.y, cur_pos.z])
        pos = np.dot(pos, m)

        res = Vector3()
        res.x = pos[0]
        res.y = pos[1]
        res.z = pos[2]
        return res


    def make_path(self, name, phis, mode='xyz'):
        cur_pos = Vector3()
        cur_pos.x = 0.0
        cur_pos.y = 0.0
        cur_pos.z = 0.0

        path = Path()
        path.header.stamp = self.get_clock().now().to_msg()
        path.header.frame_id = 'base_link'

        rot = 0.0
        r = 12
        k = 10

        x_max, y_max, z_max = 0, 0, 0
        for i in range(k * 361):
            cur_pos.x = r * cos(rot) / sqrt(2)
            cur_pos.y = r * cos(rot) / sqrt(2)
            cur_pos.z = r * sin(rot)

            cur_rot = Vector3()
            
            cur_rot.x = 0.0
            cur_rot.y = 1.57 - rot
            cur_rot.z = 0.0

            cur_pos = self.make_rot('z', cur_pos, 0.785)

            for md in mode:
                phi = phis[ord(md) - 120]
                cur_pos = self.make_rot(md, cur_pos, phi)

                if mode == 'x':
                    cur_rot.x = phi
                    cur_rot.y = (rot - 1.57) * cos(phi)
                    cur_rot.z = (rot - 1.57) * sin(phi)
                elif mode == 'z':
                    cur_rot.x = (rot - 1.57) * cos(phi)
                    cur_rot.y = (rot - 1.57) * sin(phi)
                    cur_rot.z = phi

            rot += (pi / 180.0) / k

            pose = PoseStamped()
            pose.header.stamp = self.get_clock().now().to_msg()
            pose.header.frame_id = 'base_link'
            pose.pose.position.x = cur_pos.x
            pose.pose.position.y = cur_pos.y
            pose.pose.position.z = cur_pos.z

            pose.pose.orientation.x = cur_rot.x
            pose.pose.orientation.y = cur_rot.y
            pose.pose.orientation.z = cur_rot.z

            path.poses.append(pose)

            
            
        
        self.paths[name] = path
        pub = self.create_publisher(Path, 'path_' + name, self.qos)
        pub.publish(path)

    def get_angle(self, vec1, vec2):
        return acos((vec1.x * vec2.x + vec1.y * vec2.y + vec1.z * vec2.z) / (sqrt(vec1.x ** 2 + vec1.y ** 2 + vec1.z ** 2) * sqrt(vec2.x ** 2 + vec2.y ** 2 + vec2.z ** 2)))

    def perform_gravity(self, frame_id):
        a = 0.01 / 1000
        # v = 4 / 1000
        r = 12.0
        v = sqrt(a * r)

        path_name = self.satellites[frame_id][2]['path_name']
        path_ind = self.satellites[frame_id][2]['path_ind']

        self.satellites[frame_id][0].x = self.paths[path_name].poses[path_ind].pose.position.x
        self.satellites[frame_id][0].y = self.paths[path_name].poses[path_ind].pose.position.y
        self.satellites[frame_id][0].z = self.paths[path_name].poses[path_ind].pose.position.z
        
        self.satellites[frame_id][1].x = self.paths[path_name].poses[path_ind].pose.orientation.x
        self.satellites[frame_id][1].y = self.paths[path_name].poses[path_ind].pose.orientation.y
        self.satellites[frame_id][1].z = self.paths[path_name].poses[path_ind].pose.orientation.z
        
        if path_ind + 1 == len(self.paths[path_name].poses):
            self.satellites[frame_id][2]['path_ind'] = 0
        else:
            self.satellites[frame_id][2]['path_ind'] += 1

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
        for i in self.satellites:
            self.handle_satellites(i)

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
