// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from satellite_interfaces:srv/SpawnSatellite.idl
// generated code does not contain a copyright notice

#ifndef SATELLITE_INTERFACES__SRV__DETAIL__SPAWN_SATELLITE__STRUCT_H_
#define SATELLITE_INTERFACES__SRV__DETAIL__SPAWN_SATELLITE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SpawnSatellite in the package satellite_interfaces.
typedef struct satellite_interfaces__srv__SpawnSatellite_Request
{
  rosidl_runtime_c__String name;
} satellite_interfaces__srv__SpawnSatellite_Request;

// Struct for a sequence of satellite_interfaces__srv__SpawnSatellite_Request.
typedef struct satellite_interfaces__srv__SpawnSatellite_Request__Sequence
{
  satellite_interfaces__srv__SpawnSatellite_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} satellite_interfaces__srv__SpawnSatellite_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/SpawnSatellite in the package satellite_interfaces.
typedef struct satellite_interfaces__srv__SpawnSatellite_Response
{
  bool success;
} satellite_interfaces__srv__SpawnSatellite_Response;

// Struct for a sequence of satellite_interfaces__srv__SpawnSatellite_Response.
typedef struct satellite_interfaces__srv__SpawnSatellite_Response__Sequence
{
  satellite_interfaces__srv__SpawnSatellite_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} satellite_interfaces__srv__SpawnSatellite_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  satellite_interfaces__srv__SpawnSatellite_Event__request__MAX_SIZE = 1
};
// response
enum
{
  satellite_interfaces__srv__SpawnSatellite_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SpawnSatellite in the package satellite_interfaces.
typedef struct satellite_interfaces__srv__SpawnSatellite_Event
{
  service_msgs__msg__ServiceEventInfo info;
  satellite_interfaces__srv__SpawnSatellite_Request__Sequence request;
  satellite_interfaces__srv__SpawnSatellite_Response__Sequence response;
} satellite_interfaces__srv__SpawnSatellite_Event;

// Struct for a sequence of satellite_interfaces__srv__SpawnSatellite_Event.
typedef struct satellite_interfaces__srv__SpawnSatellite_Event__Sequence
{
  satellite_interfaces__srv__SpawnSatellite_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} satellite_interfaces__srv__SpawnSatellite_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SATELLITE_INTERFACES__SRV__DETAIL__SPAWN_SATELLITE__STRUCT_H_
