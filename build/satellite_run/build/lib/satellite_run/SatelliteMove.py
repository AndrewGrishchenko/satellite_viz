import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile
from geometry_msgs.msg import Quaternion
from sensor_msgs.msg import JointState
from tf2_ros import TransformBroadcaster, TransformStamped
from math import sin, cos, pi
from geometry_msgs.msg import Vector3Stamped, Vector3
from satellite_interfaces.msg import SatelliteVec

class SatelliteMove(Node):
    def __init__(self):
        super().__init__('satellite_move')
        
        self.vel_sub = self.create_subscription(SatelliteVec, 'satellite_set_vel', self.vel_callback, 10)
        self.pos_sub = self.create_subscription(SatelliteVec, 'satellite_set_pos', self.pos_callback, 10)

        self.qos = QoSProfile(depth=10)
        self.broadcaster = TransformBroadcaster(self, qos=self.qos)
        self.satellites_vels = {}
        
        self.timer = self.create_timer(0.001, self.timer_callback)

    def compute_data(self, frame_id):
        #TODO: sync with time

        vec3_pos, vec3_vel, vec3_rot = self.satellites_vels[frame_id]
        
        vec3_pos.x += vec3_vel.x
        vec3_pos.y += vec3_vel.y
        vec3_pos.z += vec3_vel.z
        
        vec3_rot.x += 0.0
        vec3_rot.y += 0.0
        vec3_rot.z += 0.0
    
        odom_trans = TransformStamped()
        odom_trans.header.frame_id = 'base_link'
        odom_trans.child_frame_id = frame_id
        
        odom_trans.header.stamp = self.get_clock().now().to_msg()
        odom_trans.transform.translation.x = vec3_pos.x
        odom_trans.transform.translation.y = vec3_pos.y
        odom_trans.transform.translation.z = vec3_pos.z

        #print(f"{frame_id}: {odom_trans.transform.translation.x} {odom_trans.transform.translation.y} {odom_trans.transform.translation.z}")
        #TODO!!
        odom_trans.transform.rotation = euler_to_quaternion(0.0, 0.0, 0.0)
        
        
        odom_rot = TransformStamped()
        odom_rot.header.frame_id = frame_id
        odom_rot.child_frame_id = 'end_' + frame_id
        
        odom_rot.header.stamp = self.get_clock().now().to_msg()
        odom_rot.transform.translation.x = 0.0
        odom_rot.transform.translation.y = 0.0
        odom_rot.transform.translation.z = 12.0
        
        odom_rot.transform.rotation = euler_to_quaternion(vec3_rot.x, vec3_rot.y, vec3_rot.z)
        
        self.broadcaster.sendTransform(odom_trans)
        self.broadcaster.sendTransform(odom_rot)

    def timer_callback(self):
        for i in self.satellites_vels:
            self.compute_data(i)

    def vel_callback(self, msg):
        if msg.name not in self.satellites_vels:
            self.satellites_vels[msg.name] = [Vector3(), msg.vector, Vector3()]
        else:
            self.satellites_vels[msg.name][1] = msg.vector

    def pos_callback(self, msg):
        odom_trans = TransformStamped()
        odom_trans.header.frame_id = 'base_link'
        odom_trans.child_frame_id = msg.name

        odom_trans.header.stamp = self.get_clock().now().to_msg()
        odom_trans.transform.translation.x = msg.vector.x
        odom_trans.transform.translation.y = msg.vector.y
        odom_trans.transform.translation.z = msg.vector.z
        #odom_trans.transform.rotation = euler_to_quaternion(0.0, 0.0, 0.0)

        self.broadcaster.sendTransform(odom_trans)

def euler_to_quaternion(roll, pitch, yaw):
    qx = sin(roll/2) * cos(pitch/2) * cos(yaw/2) - cos(roll/2) * sin(pitch/2) * sin(yaw/2)
    qy = cos(roll/2) * sin(pitch/2) * cos(yaw/2) + sin(roll/2) * cos(pitch/2) * sin(yaw/2)
    qz = cos(roll/2) * cos(pitch/2) * sin(yaw/2) - sin(roll/2) * sin(pitch/2) * cos(yaw/2)
    qw = cos(roll/2) * cos(pitch/2) * cos(yaw/2) + sin(roll/2) * sin(pitch/2) * sin(yaw/2)
    return Quaternion(x=qx, y=qy, z=qz, w=qw)

def main():
    rclpy.init()
    satellite_move = SatelliteMove()
    rclpy.spin(satellite_move)
    
    satellite_move.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
