// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from satellite_interfaces:msg/SatelliteVec.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "satellite_interfaces/msg/detail/satellite_vec__rosidl_typesupport_introspection_c.h"
#include "satellite_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "satellite_interfaces/msg/detail/satellite_vec__functions.h"
#include "satellite_interfaces/msg/detail/satellite_vec__struct.h"


// Include directives for member types
// Member `vector`
#include "geometry_msgs/msg/vector3.h"
// Member `vector`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void satellite_interfaces__msg__SatelliteVec__rosidl_typesupport_introspection_c__SatelliteVec_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  satellite_interfaces__msg__SatelliteVec__init(message_memory);
}

void satellite_interfaces__msg__SatelliteVec__rosidl_typesupport_introspection_c__SatelliteVec_fini_function(void * message_memory)
{
  satellite_interfaces__msg__SatelliteVec__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember satellite_interfaces__msg__SatelliteVec__rosidl_typesupport_introspection_c__SatelliteVec_message_member_array[2] = {
  {
    "vector",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(satellite_interfaces__msg__SatelliteVec, vector),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(satellite_interfaces__msg__SatelliteVec, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers satellite_interfaces__msg__SatelliteVec__rosidl_typesupport_introspection_c__SatelliteVec_message_members = {
  "satellite_interfaces__msg",  // message namespace
  "SatelliteVec",  // message name
  2,  // number of fields
  sizeof(satellite_interfaces__msg__SatelliteVec),
  satellite_interfaces__msg__SatelliteVec__rosidl_typesupport_introspection_c__SatelliteVec_message_member_array,  // message members
  satellite_interfaces__msg__SatelliteVec__rosidl_typesupport_introspection_c__SatelliteVec_init_function,  // function to initialize message memory (memory has to be allocated)
  satellite_interfaces__msg__SatelliteVec__rosidl_typesupport_introspection_c__SatelliteVec_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t satellite_interfaces__msg__SatelliteVec__rosidl_typesupport_introspection_c__SatelliteVec_message_type_support_handle = {
  0,
  &satellite_interfaces__msg__SatelliteVec__rosidl_typesupport_introspection_c__SatelliteVec_message_members,
  get_message_typesupport_handle_function,
  &satellite_interfaces__msg__SatelliteVec__get_type_hash,
  &satellite_interfaces__msg__SatelliteVec__get_type_description,
  &satellite_interfaces__msg__SatelliteVec__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_satellite_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, satellite_interfaces, msg, SatelliteVec)() {
  satellite_interfaces__msg__SatelliteVec__rosidl_typesupport_introspection_c__SatelliteVec_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!satellite_interfaces__msg__SatelliteVec__rosidl_typesupport_introspection_c__SatelliteVec_message_type_support_handle.typesupport_identifier) {
    satellite_interfaces__msg__SatelliteVec__rosidl_typesupport_introspection_c__SatelliteVec_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &satellite_interfaces__msg__SatelliteVec__rosidl_typesupport_introspection_c__SatelliteVec_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
