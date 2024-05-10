from satellite_interfaces.srv import SatelliteData
from std_msgs.msg import String

import rclpy
from rclpy.node import Node

from launch_ros.actions import Node as LaunchNode

from launch import LaunchService, LaunchDescription
from geometry_msgs.msg import Vector3Stamped

class SpawnService(Node):
    def __init__(self):
        super().__init__('spawn_service')
        self.srv = self.create_service(SatelliteData, 'spawn_satellite', self.spawn_callback)
        
        self.qos = rclpy.qos.QoSProfile(depth=1, durability=rclpy.qos.QoSDurabilityPolicy.TRANSIENT_LOCAL)
        self.pos_publisher = self.create_publisher(Vector3Stamped, 'set_vel', 10)

    def generate_launch_description(self, name, urdf):
        return LaunchDescription([
            LaunchNode(
                package='robot_state_publisher',
                executable='robot_state_publisher',
                name='satellite_' + name + '_state_publisher',
                output='screen',
                parameters=[{'use_sim_time': False, 'robot_description': urdf}],
                arguments=['satellite_' + name]),
        ])

    def spawn_callback(self, request, response):
        self.get_logger().info(f"spawning {request.name}")


        #sending urdf
        self.desc_publisher = self.create_publisher(String, 'satellite_' + request.name, self.qos)
        msg = String()
        with open("/home/andrew/leto/src/satellite_run/urdf/satellite_new.urdf", "r") as f:
            file_data = f.read()
            file_data = file_data.replace('NAME', request.name)

            #launching robot_state_publisher
            # launch_service = LaunchService()
            # launch_service.include_launch_description(self.generate_launch_description(request.name, file_data))
            # launch_service.run()

            msg.data = file_data
        self.desc_publisher.publish(msg)

        empty_vector = Vector3Stamped()
        empty_vector.header.frame_id = request.name
        empty_vector.vector.x = 0.0
        empty_vector.vector.y = 0.0
        empty_vector.vector.z = 0.0

        self.pos_publisher.publish(empty_vector)

        response.success = True
        return response

def main(args=None):
    rclpy.init(args=args)
    spawn_service = SpawnService()
    rclpy.spin(spawn_service)
    rclpy.shutdown()

if __name__ == '__main__':
    main()