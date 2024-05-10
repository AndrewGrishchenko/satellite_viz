from std_msgs.msg import String

import rclpy
from rclpy.node import Node

from launch import LaunchService, LaunchDescription
from satellite_interfaces.srv import SatelliteName
from satellite_interfaces.msg import SatelliteVec

class SatelliteServices(Node):
    def __init__(self):
        super().__init__('set_pos_service')
        self.spawn_srv = self.create_service(SatelliteName, 'satellite_spawn', self.spawn_callback)
        self.remove_srv = self.create_service(SatelliteName, 'satellite_remove', self.remove_callback)
        
        self.pos_pub = self.create_publisher(SatelliteVec, 'satellite_set_pos', 10)

        self.qos = rclpy.qos.QoSProfile(depth=1, durability=rclpy.qos.QoSDurabilityPolicy.TRANSIENT_LOCAL)

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

        sat_pos = SatelliteVec()
        sat_pos.name = request.name
        sat_pos.vector.x = 0.0
        sat_pos.vector.y = 0.0
        sat_pos.vector.z = 0.0

        self.pos_pub.publish(sat_pos)

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

def main(args=None):
    rclpy.init(args=args)
    satellite_services = SatelliteServices()
    rclpy.spin(satellite_services)
    rclpy.shutdown()

if __name__ == '__main__':
    main()