// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from satellite_interfaces:msg/SatelliteVec.idl
// generated code does not contain a copyright notice

#ifndef SATELLITE_INTERFACES__MSG__DETAIL__SATELLITE_VEC__STRUCT_H_
#define SATELLITE_INTERFACES__MSG__DETAIL__SATELLITE_VEC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'vector'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SatelliteVec in the package satellite_interfaces.
typedef struct satellite_interfaces__msg__SatelliteVec
{
  geometry_msgs__msg__Vector3 vector;
  rosidl_runtime_c__String name;
} satellite_interfaces__msg__SatelliteVec;

// Struct for a sequence of satellite_interfaces__msg__SatelliteVec.
typedef struct satellite_interfaces__msg__SatelliteVec__Sequence
{
  satellite_interfaces__msg__SatelliteVec * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} satellite_interfaces__msg__SatelliteVec__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SATELLITE_INTERFACES__MSG__DETAIL__SATELLITE_VEC__STRUCT_H_
