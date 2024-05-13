#!/usr/bin/bash
source install/setup.bash
ros2 service call /satellite_spawn satellite_interfaces/srv/SatelliteSpawn "{name: '1', path_name: '1', start_angle: 0}"
ros2 service call /satellite_spawn satellite_interfaces/srv/SatelliteSpawn "{name: '2', path_name: '1', start_angle: 90}"
ros2 service call /satellite_spawn satellite_interfaces/srv/SatelliteSpawn "{name: '3', path_name: '1', start_angle: 180}"
ros2 service call /satellite_spawn satellite_interfaces/srv/SatelliteSpawn "{name: '4', path_name: '1', start_angle: 270}"

ros2 service call /satellite_spawn satellite_interfaces/srv/SatelliteSpawn "{name: '5', path_name: '2', start_angle: 0}"
ros2 service call /satellite_spawn satellite_interfaces/srv/SatelliteSpawn "{name: '6', path_name: '2', start_angle: 90}"
ros2 service call /satellite_spawn satellite_interfaces/srv/SatelliteSpawn "{name: '7', path_name: '2', start_angle: 180}"
ros2 service call /satellite_spawn satellite_interfaces/srv/SatelliteSpawn "{name: '8', path_name: '2', start_angle: 270}"

ros2 service call /satellite_spawn satellite_interfaces/srv/SatelliteSpawn "{name: '9', path_name: '3', start_angle: 0}"
ros2 service call /satellite_spawn satellite_interfaces/srv/SatelliteSpawn "{name: '10', path_name: '3', start_angle: 90}"
ros2 service call /satellite_spawn satellite_interfaces/srv/SatelliteSpawn "{name: '11', path_name: '3', start_angle: 180}"
ros2 service call /satellite_spawn satellite_interfaces/srv/SatelliteSpawn "{name: '12', path_name: '3', start_angle: 270}"
