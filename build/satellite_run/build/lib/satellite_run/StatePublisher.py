import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile
from geometry_msgs.msg import Quaternion
from sensor_msgs.msg import JointState
from tf2_ros import TransformBroadcaster, TransformStamped
from math import sin, cos, pi

class StatePublisher(Node):
    def __init__(self):
        rclpy.init()
        super().__init__('state_publisher')
        
        qos_profile = QoSProfile(depth=10)
        self.broadcaster = TransformBroadcaster(self, qos=qos_profile)
        self.nodeName = self.get_name()
        self.get_logger().info("{0} started".format(self.nodeName))
        
        loop_rate = self.create_rate(30)
        
        odom_trans = TransformStamped()
        odom_trans.header.frame_id = 'base_link'
        odom_trans.child_frame_id = 'body'
        
        self.x = 0.0
        
        try:
            while rclpy.ok():
                rclpy.spin_once(self)
                
                now = self.get_clock().now()
                
                odom_trans.header.stamp = now.to_msg()
                odom_trans.transform.translation.x = self.x
                print(self.x)
                self.x += 0.01
                odom_trans.transform.translation.y = 0.0
                odom_trans.transform.translation.z = 0.0
                odom_trans.transform.rotation = euler_to_quaternion(0.0, 0.0, 0.0)
                
                self.broadcaster.sendTransform(odom_trans)
                
                loop_rate.sleep()
        except KeyboardInterrupt:
            pass

def euler_to_quaternion(roll, pitch, yaw):
    qx = sin(roll/2) * cos(pitch/2) * cos(yaw/2) - cos(roll/2) * sin(pitch/2) * sin(yaw/2)
    qy = cos(roll/2) * sin(pitch/2) * cos(yaw/2) + sin(roll/2) * cos(pitch/2) * sin(yaw/2)
    qz = cos(roll/2) * cos(pitch/2) * sin(yaw/2) - sin(roll/2) * sin(pitch/2) * cos(yaw/2)
    qw = cos(roll/2) * cos(pitch/2) * cos(yaw/2) + sin(roll/2) * sin(pitch/2) * sin(yaw/2)
    return Quaternion(x=qx, y=qy, z=qz, w=qw)

def main():
    node = StatePublisher()

if __name__ == '__main__':
    main()
