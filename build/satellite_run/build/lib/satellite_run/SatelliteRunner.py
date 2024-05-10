import rclpy
from rclpy.node import Node

from std_msgs.msg import String

class SatelliteRunner(Node):
    def __init__(self):
        super().__init__('satellite_runner')
        qos = rclpy.qos.QoSProfile(depth=1, durability=rclpy.qos.QoSDurabilityPolicy.TRANSIENT_LOCAL)
        self.publisher = self.create_publisher(String, 'robot_description', qos)
        self.timer = self.create_timer(0.001, self.timer_callback)
        self.x = 0
        
    def timer_callback(self):
        msg = String()
        with open("/home/andrew/leto/satellite_new.urdf", "r") as f:
            file_data = f.read()
            file_data = file_data.replace('xyz="0 0 12"', 'xyz="' + str(self.x) + ' 0 12"')
            msg.data = file_data
            #self.x += 0.001
        
        self.publisher.publish(msg)
        
def main():
    rclpy.init()
    satellite_runner = SatelliteRunner()
    rclpy.spin(satellite_runner)
    
    satellite_runner.destroy_node()
    rclpy.shutdown()
    
if __name__ == "__main__":
    main()
