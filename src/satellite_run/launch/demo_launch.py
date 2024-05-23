import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

def generate_launch_description():

    use_sim_time = LaunchConfiguration('use_sim_time', default='false')

    urdf_file_name = 'satellite.urdf'
    urdf = os.path.join(
        get_package_share_directory('satellite_run'),
        urdf_file_name)
    with open(urdf, 'r') as infp:
        robot_desc = infp.read()

    satellites = {}
    
    with open(urdf, 'r') as infp:
        file_data = infp.read()
        
        for i in range(1, 13):
            satellites[i] = file_data.replace('NAME', str(i))
    
    return LaunchDescription([
        DeclareLaunchArgument(
            'use_sim_time',
            default_value='false',
            description='Use simulation (Gazebo) clock if true'),
        
        Node(
            package='satellite_run',
            executable='satellite_utils',
            name='satellite_utils',
            output='screen'),

        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            name='satellite_1_state_publisher',
            output='screen',
            parameters=[{'use_sim_time': use_sim_time, 'robot_description': satellites[1]}],
            arguments=[urdf]),
        # Node(
        #     package='robot_state_publisher',
        #     executable='robot_state_publisher',
        #     name='satellite_2_state_publisher',
        #     output='screen',
        #     parameters=[{'use_sim_time': use_sim_time, 'robot_description': satellites[2]}],
        #     arguments=[urdf]),
        # Node(
        #     package='robot_state_publisher',
        #     executable='robot_state_publisher',
        #     name='satellite_3_state_publisher',
        #     output='screen',
        #     parameters=[{'use_sim_time': use_sim_time, 'robot_description': satellites[3]}],
        #     arguments=[urdf]),
        # Node(
        #     package='robot_state_publisher',
        #     executable='robot_state_publisher',
        #     name='satellite_4_state_publisher',
        #     output='screen',
        #     parameters=[{'use_sim_time': use_sim_time, 'robot_description': satellites[4]}],
        #     arguments=[urdf]),
        # Node(
        #     package='robot_state_publisher',
        #     executable='robot_state_publisher',
        #     name='satellite_5_state_publisher',
        #     output='screen',
        #     parameters=[{'use_sim_time': use_sim_time, 'robot_description': satellites[5]}],
        #     arguments=[urdf]),
        # Node(
        #     package='robot_state_publisher',
        #     executable='robot_state_publisher',
        #     name='satellite_6_state_publisher',
        #     output='screen',
        #     parameters=[{'use_sim_time': use_sim_time, 'robot_description': satellites[6]}],
        #     arguments=[urdf]),
        # Node(
        #     package='robot_state_publisher',
        #     executable='robot_state_publisher',
        #     name='satellite_7_state_publisher',
        #     output='screen',
        #     parameters=[{'use_sim_time': use_sim_time, 'robot_description': satellites[7]}],
        #     arguments=[urdf]),
        # Node(
        #     package='robot_state_publisher',
        #     executable='robot_state_publisher',
        #     name='satellite_8_state_publisher',
        #     output='screen',
        #     parameters=[{'use_sim_time': use_sim_time, 'robot_description': satellites[8]}],
        #     arguments=[urdf]),
        # Node(
        #     package='robot_state_publisher',
        #     executable='robot_state_publisher',
        #     name='satellite_9_state_publisher',
        #     output='screen',
        #     parameters=[{'use_sim_time': use_sim_time, 'robot_description': satellites[9]}],
        #     arguments=[urdf]),
        # Node(
        #     package='robot_state_publisher',
        #     executable='robot_state_publisher',
        #     name='satellite_10_state_publisher',
        #     output='screen',
        #     parameters=[{'use_sim_time': use_sim_time, 'robot_description': satellites[10]}],
        #     arguments=[urdf]),
        # Node(
        #     package='robot_state_publisher',
        #     executable='robot_state_publisher',
        #     name='satellite_11_state_publisher',
        #     output='screen',
        #     parameters=[{'use_sim_time': use_sim_time, 'robot_description': satellites[11]}],
        #     arguments=[urdf]),
        # Node(
        #     package='robot_state_publisher',
        #     executable='robot_state_publisher',
        #     name='satellite_12_state_publisher',
        #     output='screen',
        #     parameters=[{'use_sim_time': use_sim_time, 'robot_description': satellites[12]}],
        #     arguments=[urdf]),
    ])
