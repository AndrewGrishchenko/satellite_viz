import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile
from geometry_msgs.msg import Quaternion
from sensor_msgs.msg import JointState
from tf2_ros import TransformBroadcaster, TransformStamped
from math import sin, cos, pi, atan, acos, sqrt
from geometry_msgs.msg import Vector3Stamped, Vector3
from satellite_interfaces.msg import SatelliteVec
from satellite_interfaces.srv import SatelliteName
from std_msgs.msg import String

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

        #pos rot vel
        self.satellites = {}

        self.timer = self.create_timer(0.001, self.timer_callback)

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
        init_pos.z = 12.0

        self.satellites[request.name] = [init_pos, Vector3(), Vector3()]

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

        # self.satellites[frame_id][1].x += 0.0005

        x_rot = self.satellites[frame_id][1].x
        y_rot = self.satellites[frame_id][1].y + 1.57
        z_rot = self.satellites[frame_id][1].z

        
        # x_pos = r * cos(x_rot) * cos(z_rot)
        # y_pos = r * cos(x_rot) * sin(z_rot)
        # z_pos = r * sin(x_rot)

        x_pos = self.satellites[frame_id][0].x
        z_pos = self.satellites[frame_id][0].z
        
        # w = 0.006 / r
        # self.satellites[frame_id][1].y += w

        # self.satellites[frame_id][0].x = r * sin(self.satellites[frame_id][1].y)
        # self.satellites[frame_id][0].z = r * cos(self.satellites[frame_id][1].y)

        self.satellites[frame_id][0].x = r * cos(z_rot) * cos(y_rot)
        self.satellites[frame_id][0].y = r * sin(z_rot) * cos(y_rot)
        self.satellites[frame_id][0].z = -r * sin(y_rot)

        self.satellites[frame_id][1].y += 0.001
        # self.satellites[frame_id][1].z = 0.15

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

        self.perform_rot(frame_id)

        odom_rot.transform.rotation = euler_to_quaternion(self.satellites[frame_id][1].x, self.satellites[frame_id][1].y, self.satellites[frame_id][1].z)

        self.broadcaster.sendTransform(odom_trans)
        self.broadcaster.sendTransform(odom_rot)

    def timer_callback(self):
        # for i in self.satellites_vels:
        #     self.compute_data(i)

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

def main():
    rclpy.init()
    satellite_utils = SatelliteUtils()
    rclpy.spin(satellite_utils)
    
    satellite_utils.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
