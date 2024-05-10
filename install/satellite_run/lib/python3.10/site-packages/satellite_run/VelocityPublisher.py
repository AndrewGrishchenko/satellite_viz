import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile
from geometry_msgs.msg import Quaternion
from sensor_msgs.msg import JointState
from tf2_ros import TransformBroadcaster, TransformStamped
from math import sin, cos, pi
from geometry_msgs.msg import Vector3Stamped, Vector3

class VelocityPublisher(Node):
    def __init__(self):
        super().__init__('velocity_publisher')
        
        self.subscription = self.create_subscription(Vector3Stamped, 'set_vel', self.listener_callback, 10)
        
        qos_profile = QoSProfile(depth=10)
        self.broadcaster = TransformBroadcaster(self, qos=qos_profile)
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

    def listener_callback(self, msg):
        #p1, p2 = msg.data.split(":")
        #if p1 not in self.satellites_vels:
        #    self.satellites_vels[p1] = p2
        
        if msg.header.frame_id not in self.satellites_vels:
            self.satellites_vels[msg.header.frame_id] = [Vector3(), msg.vector, Vector3()]
        else:
            self.satellites_vels[msg.header.frame_id][1] = msg.vector

        #self.satellites_vels[msg.header.frame_id] = msg.vector
        
        #self.loop_rate = self.create_rate(5, self.get_clock())
        #while rclpy.ok():
        #    print(msg.data)
        #    self.loop_rate.sleep()

        #qos_profile = QoSProfile(depth=10)
        
        #self.nodeName = self.get_name()
        #self.get_logger().info("{0} started".format(self.nodeName))
        
        #loop_rate = self.create_rate(30)
        
        #odom_trans = TransformStamped()
        #odom_trans.header.frame_id = 'base_link'
        #odom_trans.child_frame_id = 'body'
        
        #self.x = 0.0
        
        #try:
        #    while rclpy.ok():
        ##        rclpy.spin_once(self)
        #        
        #        now = self.get_clock().now()
        #        
        #        odom_trans.header.stamp = now.to_msg()
        #        odom_trans.transform.translation.x = self.x
        ####        print(self.x)
        #        self.x += 0.01
        #        odom_trans.transform.translation.y = 0.0
        #        odom_trans.transform.translation.z = 0.0
        #        odom_trans.transform.rotation = euler_to_quaternion(0.0, 0.0, 0.0)
                
        #        self.broadcaster.sendTransform(odom_trans)
                
        #        loop_rate.sleep()
        #except KeyboardInterrupt:
        #    pass

def euler_to_quaternion(roll, pitch, yaw):
    qx = sin(roll/2) * cos(pitch/2) * cos(yaw/2) - cos(roll/2) * sin(pitch/2) * sin(yaw/2)
    qy = cos(roll/2) * sin(pitch/2) * cos(yaw/2) + sin(roll/2) * cos(pitch/2) * sin(yaw/2)
    qz = cos(roll/2) * cos(pitch/2) * sin(yaw/2) - sin(roll/2) * sin(pitch/2) * cos(yaw/2)
    qw = cos(roll/2) * cos(pitch/2) * cos(yaw/2) + sin(roll/2) * sin(pitch/2) * sin(yaw/2)
    return Quaternion(x=qx, y=qy, z=qz, w=qw)

def main():
    rclpy.init()
    velocity_publisher = VelocityPublisher()
    rclpy.spin(velocity_publisher)
    
    velocity_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
