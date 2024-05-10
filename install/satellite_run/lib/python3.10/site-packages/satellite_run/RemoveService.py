from satellite_interfaces.srv import SatelliteData
from std_msgs.msg import String

import rclpy
from rclpy.node import Node

class RemoveService(Node):
    def __init__(self):
        super().__init__('spawn_service')
        self.srv = self.create_service(SatelliteData, 'remove_satellite', self.remove_callback)
        
        self.qos = rclpy.qos.QoSProfile(depth=1, durability=rclpy.qos.QoSDurabilityPolicy.TRANSIENT_LOCAL)
    
    def remove_callback(self, request, response):
        self.get_logger().info(f"removing {request.name}")

        self.publisher = self.create_publisher(String, 'satellite_' + request.name, self.qos)

        msg = String()
        with open("/home/andrew/leto/src/satellite_run/urdf/satellite_empty.urdf", "r") as f:
            file_data = f.read()
            file_data = file_data.replace('NAME', request.name)
            msg.data = file_data
        self.publisher.publish(msg)

        response.success = True
        return response

def main(args=None):
    rclpy.init(args=args)
    remove_service = RemoveService()
    rclpy.spin(remove_service)
    rclpy.shutdown()

if __name__ == '__main__':
    main()