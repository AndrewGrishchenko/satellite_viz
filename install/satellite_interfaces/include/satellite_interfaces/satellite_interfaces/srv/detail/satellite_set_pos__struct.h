// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from satellite_interfaces:srv/SatelliteSetPos.idl
// generated code does not contain a copyright notice

#ifndef SATELLITE_INTERFACES__SRV__DETAIL__SATELLITE_SET_POS__STRUCT_H_
#define SATELLITE_INTERFACES__SRV__DETAIL__SATELLITE_SET_POS__STRUCT_H_

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

/// Struct defined in srv/SatelliteSetPos in the package satellite_interfaces.
typedef struct satellite_interfaces__srv__SatelliteSetPos_Request
{
  geometry_msgs__msg__Vector3 vector;
  rosidl_runtime_c__String name;
} satellite_interfaces__srv__SatelliteSetPos_Request;

// Struct for a sequence of satellite_interfaces__srv__SatelliteSetPos_Request.
typedef struct satellite_interfaces__srv__SatelliteSetPos_Request__Sequence
{
  satellite_interfaces__srv__SatelliteSetPos_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} satellite_interfaces__srv__SatelliteSetPos_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/SatelliteSetPos in the package satellite_interfaces.
typedef struct satellite_interfaces__srv__SatelliteSetPos_Response
{
  bool success;
} satellite_interfaces__srv__SatelliteSetPos_Response;

// Struct for a sequence of satellite_interfaces__srv__SatelliteSetPos_Response.
typedef struct satellite_interfaces__srv__SatelliteSetPos_Response__Sequence
{
  satellite_interfaces__srv__SatelliteSetPos_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} satellite_interfaces__srv__SatelliteSetPos_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  satellite_interfaces__srv__SatelliteSetPos_Event__request__MAX_SIZE = 1
};
// response
enum
{
  satellite_interfaces__srv__SatelliteSetPos_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SatelliteSetPos in the package satellite_interfaces.
typedef struct satellite_interfaces__srv__SatelliteSetPos_Event
{
  service_msgs__msg__ServiceEventInfo info;
  satellite_interfaces__srv__SatelliteSetPos_Request__Sequence request;
  satellite_interfaces__srv__SatelliteSetPos_Response__Sequence response;
} satellite_interfaces__srv__SatelliteSetPos_Event;

// Struct for a sequence of satellite_interfaces__srv__SatelliteSetPos_Event.
typedef struct satellite_interfaces__srv__SatelliteSetPos_Event__Sequence
{
  satellite_interfaces__srv__SatelliteSetPos_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} satellite_interfaces__srv__SatelliteSetPos_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SATELLITE_INTERFACES__SRV__DETAIL__SATELLITE_SET_POS__STRUCT_H_
