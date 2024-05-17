#!/usr/bin/bash
source install/setup.bash
ros2 service call /satellite_spawn satellite_interfaces/srv/SatelliteSpawn "{name: '1'}"
ros2 service call /satellite_spawn satellite_interfaces/srv/SatelliteSpawn "{name: '2'}"
ros2 service call /satellite_spawn satellite_interfaces/srv/SatelliteSpawn "{name: '3'}"
ros2 service call /satellite_spawn satellite_interfaces/srv/SatelliteSpawn "{name: '4'}"

ros2 service call /satellite_spawn satellite_interfaces/srv/SatelliteSpawn "{name: '5'}"
ros2 service call /satellite_spawn satellite_interfaces/srv/SatelliteSpawn "{name: '6'}"
ros2 service call /satellite_spawn satellite_interfaces/srv/SatelliteSpawn "{name: '7'}"
ros2 service call /satellite_spawn satellite_interfaces/srv/SatelliteSpawn "{name: '8'}"

ros2 service call /satellite_spawn satellite_interfaces/srv/SatelliteSpawn "{name: '9'}"
ros2 service call /satellite_spawn satellite_interfaces/srv/SatelliteSpawn "{name: '10'}"
ros2 service call /satellite_spawn satellite_interfaces/srv/SatelliteSpawn "{name: '11'}"
ros2 service call /satellite_spawn satellite_interfaces/srv/SatelliteSpawn "{name: '12'}"
