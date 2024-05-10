// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from satellite_interfaces:srv/SatelliteVec.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "satellite_interfaces/srv/detail/satellite_vec__rosidl_typesupport_introspection_c.h"
#include "satellite_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "satellite_interfaces/srv/detail/satellite_vec__functions.h"
#include "satellite_interfaces/srv/detail/satellite_vec__struct.h"


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

void satellite_interfaces__srv__SatelliteVec_Request__rosidl_typesupport_introspection_c__SatelliteVec_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  satellite_interfaces__srv__SatelliteVec_Request__init(message_memory);
}

void satellite_interfaces__srv__SatelliteVec_Request__rosidl_typesupport_introspection_c__SatelliteVec_Request_fini_function(void * message_memory)
{
  satellite_interfaces__srv__SatelliteVec_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember satellite_interfaces__srv__SatelliteVec_Request__rosidl_typesupport_introspection_c__SatelliteVec_Request_message_member_array[2] = {
  {
    "vector",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(satellite_interfaces__srv__SatelliteVec_Request, vector),  // bytes offset in struct
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
    offsetof(satellite_interfaces__srv__SatelliteVec_Request, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers satellite_interfaces__srv__SatelliteVec_Request__rosidl_typesupport_introspection_c__SatelliteVec_Request_message_members = {
  "satellite_interfaces__srv",  // message namespace
  "SatelliteVec_Request",  // message name
  2,  // number of fields
  sizeof(satellite_interfaces__srv__SatelliteVec_Request),
  satellite_interfaces__srv__SatelliteVec_Request__rosidl_typesupport_introspection_c__SatelliteVec_Request_message_member_array,  // message members
  satellite_interfaces__srv__SatelliteVec_Request__rosidl_typesupport_introspection_c__SatelliteVec_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  satellite_interfaces__srv__SatelliteVec_Request__rosidl_typesupport_introspection_c__SatelliteVec_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t satellite_interfaces__srv__SatelliteVec_Request__rosidl_typesupport_introspection_c__SatelliteVec_Request_message_type_support_handle = {
  0,
  &satellite_interfaces__srv__SatelliteVec_Request__rosidl_typesupport_introspection_c__SatelliteVec_Request_message_members,
  get_message_typesupport_handle_function,
  &satellite_interfaces__srv__SatelliteVec_Request__get_type_hash,
  &satellite_interfaces__srv__SatelliteVec_Request__get_type_description,
  &satellite_interfaces__srv__SatelliteVec_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_satellite_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, satellite_interfaces, srv, SatelliteVec_Request)() {
  satellite_interfaces__srv__SatelliteVec_Request__rosidl_typesupport_introspection_c__SatelliteVec_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!satellite_interfaces__srv__SatelliteVec_Request__rosidl_typesupport_introspection_c__SatelliteVec_Request_message_type_support_handle.typesupport_identifier) {
    satellite_interfaces__srv__SatelliteVec_Request__rosidl_typesupport_introspection_c__SatelliteVec_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &satellite_interfaces__srv__SatelliteVec_Request__rosidl_typesupport_introspection_c__SatelliteVec_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "satellite_interfaces/srv/detail/satellite_vec__rosidl_typesupport_introspection_c.h"
// already included above
// #include "satellite_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "satellite_interfaces/srv/detail/satellite_vec__functions.h"
// already included above
// #include "satellite_interfaces/srv/detail/satellite_vec__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void satellite_interfaces__srv__SatelliteVec_Response__rosidl_typesupport_introspection_c__SatelliteVec_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  satellite_interfaces__srv__SatelliteVec_Response__init(message_memory);
}

void satellite_interfaces__srv__SatelliteVec_Response__rosidl_typesupport_introspection_c__SatelliteVec_Response_fini_function(void * message_memory)
{
  satellite_interfaces__srv__SatelliteVec_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember satellite_interfaces__srv__SatelliteVec_Response__rosidl_typesupport_introspection_c__SatelliteVec_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(satellite_interfaces__srv__SatelliteVec_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers satellite_interfaces__srv__SatelliteVec_Response__rosidl_typesupport_introspection_c__SatelliteVec_Response_message_members = {
  "satellite_interfaces__srv",  // message namespace
  "SatelliteVec_Response",  // message name
  1,  // number of fields
  sizeof(satellite_interfaces__srv__SatelliteVec_Response),
  satellite_interfaces__srv__SatelliteVec_Response__rosidl_typesupport_introspection_c__SatelliteVec_Response_message_member_array,  // message members
  satellite_interfaces__srv__SatelliteVec_Response__rosidl_typesupport_introspection_c__SatelliteVec_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  satellite_interfaces__srv__SatelliteVec_Response__rosidl_typesupport_introspection_c__SatelliteVec_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t satellite_interfaces__srv__SatelliteVec_Response__rosidl_typesupport_introspection_c__SatelliteVec_Response_message_type_support_handle = {
  0,
  &satellite_interfaces__srv__SatelliteVec_Response__rosidl_typesupport_introspection_c__SatelliteVec_Response_message_members,
  get_message_typesupport_handle_function,
  &satellite_interfaces__srv__SatelliteVec_Response__get_type_hash,
  &satellite_interfaces__srv__SatelliteVec_Response__get_type_description,
  &satellite_interfaces__srv__SatelliteVec_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_satellite_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, satellite_interfaces, srv, SatelliteVec_Response)() {
  if (!satellite_interfaces__srv__SatelliteVec_Response__rosidl_typesupport_introspection_c__SatelliteVec_Response_message_type_support_handle.typesupport_identifier) {
    satellite_interfaces__srv__SatelliteVec_Response__rosidl_typesupport_introspection_c__SatelliteVec_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &satellite_interfaces__srv__SatelliteVec_Response__rosidl_typesupport_introspection_c__SatelliteVec_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "satellite_interfaces/srv/detail/satellite_vec__rosidl_typesupport_introspection_c.h"
// already included above
// #include "satellite_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "satellite_interfaces/srv/detail/satellite_vec__functions.h"
// already included above
// #include "satellite_interfaces/srv/detail/satellite_vec__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "satellite_interfaces/srv/satellite_vec.h"
// Member `request`
// Member `response`
// already included above
// #include "satellite_interfaces/srv/detail/satellite_vec__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void satellite_interfaces__srv__SatelliteVec_Event__rosidl_typesupport_introspection_c__SatelliteVec_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  satellite_interfaces__srv__SatelliteVec_Event__init(message_memory);
}

void satellite_interfaces__srv__SatelliteVec_Event__rosidl_typesupport_introspection_c__SatelliteVec_Event_fini_function(void * message_memory)
{
  satellite_interfaces__srv__SatelliteVec_Event__fini(message_memory);
}

size_t satellite_interfaces__srv__SatelliteVec_Event__rosidl_typesupport_introspection_c__size_function__SatelliteVec_Event__request(
  const void * untyped_member)
{
  const satellite_interfaces__srv__SatelliteVec_Request__Sequence * member =
    (const satellite_interfaces__srv__SatelliteVec_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * satellite_interfaces__srv__SatelliteVec_Event__rosidl_typesupport_introspection_c__get_const_function__SatelliteVec_Event__request(
  const void * untyped_member, size_t index)
{
  const satellite_interfaces__srv__SatelliteVec_Request__Sequence * member =
    (const satellite_interfaces__srv__SatelliteVec_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * satellite_interfaces__srv__SatelliteVec_Event__rosidl_typesupport_introspection_c__get_function__SatelliteVec_Event__request(
  void * untyped_member, size_t index)
{
  satellite_interfaces__srv__SatelliteVec_Request__Sequence * member =
    (satellite_interfaces__srv__SatelliteVec_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void satellite_interfaces__srv__SatelliteVec_Event__rosidl_typesupport_introspection_c__fetch_function__SatelliteVec_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const satellite_interfaces__srv__SatelliteVec_Request * item =
    ((const satellite_interfaces__srv__SatelliteVec_Request *)
    satellite_interfaces__srv__SatelliteVec_Event__rosidl_typesupport_introspection_c__get_const_function__SatelliteVec_Event__request(untyped_member, index));
  satellite_interfaces__srv__SatelliteVec_Request * value =
    (satellite_interfaces__srv__SatelliteVec_Request *)(untyped_value);
  *value = *item;
}

void satellite_interfaces__srv__SatelliteVec_Event__rosidl_typesupport_introspection_c__assign_function__SatelliteVec_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  satellite_interfaces__srv__SatelliteVec_Request * item =
    ((satellite_interfaces__srv__SatelliteVec_Request *)
    satellite_interfaces__srv__SatelliteVec_Event__rosidl_typesupport_introspection_c__get_function__SatelliteVec_Event__request(untyped_member, index));
  const satellite_interfaces__srv__SatelliteVec_Request * value =
    (const satellite_interfaces__srv__SatelliteVec_Request *)(untyped_value);
  *item = *value;
}

bool satellite_interfaces__srv__SatelliteVec_Event__rosidl_typesupport_introspection_c__resize_function__SatelliteVec_Event__request(
  void * untyped_member, size_t size)
{
  satellite_interfaces__srv__SatelliteVec_Request__Sequence * member =
    (satellite_interfaces__srv__SatelliteVec_Request__Sequence *)(untyped_member);
  satellite_interfaces__srv__SatelliteVec_Request__Sequence__fini(member);
  return satellite_interfaces__srv__SatelliteVec_Request__Sequence__init(member, size);
}

size_t satellite_interfaces__srv__SatelliteVec_Event__rosidl_typesupport_introspection_c__size_function__SatelliteVec_Event__response(
  const void * untyped_member)
{
  const satellite_interfaces__srv__SatelliteVec_Response__Sequence * member =
    (const satellite_interfaces__srv__SatelliteVec_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * satellite_interfaces__srv__SatelliteVec_Event__rosidl_typesupport_introspection_c__get_const_function__SatelliteVec_Event__response(
  const void * untyped_member, size_t index)
{
  const satellite_interfaces__srv__SatelliteVec_Response__Sequence * member =
    (const satellite_interfaces__srv__SatelliteVec_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * satellite_interfaces__srv__SatelliteVec_Event__rosidl_typesupport_introspection_c__get_function__SatelliteVec_Event__response(
  void * untyped_member, size_t index)
{
  satellite_interfaces__srv__SatelliteVec_Response__Sequence * member =
    (satellite_interfaces__srv__SatelliteVec_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void satellite_interfaces__srv__SatelliteVec_Event__rosidl_typesupport_introspection_c__fetch_function__SatelliteVec_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const satellite_interfaces__srv__SatelliteVec_Response * item =
    ((const satellite_interfaces__srv__SatelliteVec_Response *)
    satellite_interfaces__srv__SatelliteVec_Event__rosidl_typesupport_introspection_c__get_const_function__SatelliteVec_Event__response(untyped_member, index));
  satellite_interfaces__srv__SatelliteVec_Response * value =
    (satellite_interfaces__srv__SatelliteVec_Response *)(untyped_value);
  *value = *item;
}

void satellite_interfaces__srv__SatelliteVec_Event__rosidl_typesupport_introspection_c__assign_function__SatelliteVec_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  satellite_interfaces__srv__SatelliteVec_Response * item =
    ((satellite_interfaces__srv__SatelliteVec_Response *)
    satellite_interfaces__srv__SatelliteVec_Event__rosidl_typesupport_introspection_c__get_function__SatelliteVec_Event__response(untyped_member, index));
  const satellite_interfaces__srv__SatelliteVec_Response * value =
    (const satellite_interfaces__srv__SatelliteVec_Response *)(untyped_value);
  *item = *value;
}

bool satellite_interfaces__srv__SatelliteVec_Event__rosidl_typesupport_introspection_c__resize_function__SatelliteVec_Event__response(
  void * untyped_member, size_t size)
{
  satellite_interfaces__srv__SatelliteVec_Response__Sequence * member =
    (satellite_interfaces__srv__SatelliteVec_Response__Sequence *)(untyped_member);
  satellite_interfaces__srv__SatelliteVec_Response__Sequence__fini(member);
  return satellite_interfaces__srv__SatelliteVec_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember satellite_interfaces__srv__SatelliteVec_Event__rosidl_typesupport_introspection_c__SatelliteVec_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(satellite_interfaces__srv__SatelliteVec_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(satellite_interfaces__srv__SatelliteVec_Event, request),  // bytes offset in struct
    NULL,  // default value
    satellite_interfaces__srv__SatelliteVec_Event__rosidl_typesupport_introspection_c__size_function__SatelliteVec_Event__request,  // size() function pointer
    satellite_interfaces__srv__SatelliteVec_Event__rosidl_typesupport_introspection_c__get_const_function__SatelliteVec_Event__request,  // get_const(index) function pointer
    satellite_interfaces__srv__SatelliteVec_Event__rosidl_typesupport_introspection_c__get_function__SatelliteVec_Event__request,  // get(index) function pointer
    satellite_interfaces__srv__SatelliteVec_Event__rosidl_typesupport_introspection_c__fetch_function__SatelliteVec_Event__request,  // fetch(index, &value) function pointer
    satellite_interfaces__srv__SatelliteVec_Event__rosidl_typesupport_introspection_c__assign_function__SatelliteVec_Event__request,  // assign(index, value) function pointer
    satellite_interfaces__srv__SatelliteVec_Event__rosidl_typesupport_introspection_c__resize_function__SatelliteVec_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(satellite_interfaces__srv__SatelliteVec_Event, response),  // bytes offset in struct
    NULL,  // default value
    satellite_interfaces__srv__SatelliteVec_Event__rosidl_typesupport_introspection_c__size_function__SatelliteVec_Event__response,  // size() function pointer
    satellite_interfaces__srv__SatelliteVec_Event__rosidl_typesupport_introspection_c__get_const_function__SatelliteVec_Event__response,  // get_const(index) function pointer
    satellite_interfaces__srv__SatelliteVec_Event__rosidl_typesupport_introspection_c__get_function__SatelliteVec_Event__response,  // get(index) function pointer
    satellite_interfaces__srv__SatelliteVec_Event__rosidl_typesupport_introspection_c__fetch_function__SatelliteVec_Event__response,  // fetch(index, &value) function pointer
    satellite_interfaces__srv__SatelliteVec_Event__rosidl_typesupport_introspection_c__assign_function__SatelliteVec_Event__response,  // assign(index, value) function pointer
    satellite_interfaces__srv__SatelliteVec_Event__rosidl_typesupport_introspection_c__resize_function__SatelliteVec_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers satellite_interfaces__srv__SatelliteVec_Event__rosidl_typesupport_introspection_c__SatelliteVec_Event_message_members = {
  "satellite_interfaces__srv",  // message namespace
  "SatelliteVec_Event",  // message name
  3,  // number of fields
  sizeof(satellite_interfaces__srv__SatelliteVec_Event),
  satellite_interfaces__srv__SatelliteVec_Event__rosidl_typesupport_introspection_c__SatelliteVec_Event_message_member_array,  // message members
  satellite_interfaces__srv__SatelliteVec_Event__rosidl_typesupport_introspection_c__SatelliteVec_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  satellite_interfaces__srv__SatelliteVec_Event__rosidl_typesupport_introspection_c__SatelliteVec_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t satellite_interfaces__srv__SatelliteVec_Event__rosidl_typesupport_introspection_c__SatelliteVec_Event_message_type_support_handle = {
  0,
  &satellite_interfaces__srv__SatelliteVec_Event__rosidl_typesupport_introspection_c__SatelliteVec_Event_message_members,
  get_message_typesupport_handle_function,
  &satellite_interfaces__srv__SatelliteVec_Event__get_type_hash,
  &satellite_interfaces__srv__SatelliteVec_Event__get_type_description,
  &satellite_interfaces__srv__SatelliteVec_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_satellite_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, satellite_interfaces, srv, SatelliteVec_Event)() {
  satellite_interfaces__srv__SatelliteVec_Event__rosidl_typesupport_introspection_c__SatelliteVec_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  satellite_interfaces__srv__SatelliteVec_Event__rosidl_typesupport_introspection_c__SatelliteVec_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, satellite_interfaces, srv, SatelliteVec_Request)();
  satellite_interfaces__srv__SatelliteVec_Event__rosidl_typesupport_introspection_c__SatelliteVec_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, satellite_interfaces, srv, SatelliteVec_Response)();
  if (!satellite_interfaces__srv__SatelliteVec_Event__rosidl_typesupport_introspection_c__SatelliteVec_Event_message_type_support_handle.typesupport_identifier) {
    satellite_interfaces__srv__SatelliteVec_Event__rosidl_typesupport_introspection_c__SatelliteVec_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &satellite_interfaces__srv__SatelliteVec_Event__rosidl_typesupport_introspection_c__SatelliteVec_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "satellite_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "satellite_interfaces/srv/detail/satellite_vec__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers satellite_interfaces__srv__detail__satellite_vec__rosidl_typesupport_introspection_c__SatelliteVec_service_members = {
  "satellite_interfaces__srv",  // service namespace
  "SatelliteVec",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // satellite_interfaces__srv__detail__satellite_vec__rosidl_typesupport_introspection_c__SatelliteVec_Request_message_type_support_handle,
  NULL,  // response message
  // satellite_interfaces__srv__detail__satellite_vec__rosidl_typesupport_introspection_c__SatelliteVec_Response_message_type_support_handle
  NULL  // event_message
  // satellite_interfaces__srv__detail__satellite_vec__rosidl_typesupport_introspection_c__SatelliteVec_Response_message_type_support_handle
};


static rosidl_service_type_support_t satellite_interfaces__srv__detail__satellite_vec__rosidl_typesupport_introspection_c__SatelliteVec_service_type_support_handle = {
  0,
  &satellite_interfaces__srv__detail__satellite_vec__rosidl_typesupport_introspection_c__SatelliteVec_service_members,
  get_service_typesupport_handle_function,
  &satellite_interfaces__srv__SatelliteVec_Request__rosidl_typesupport_introspection_c__SatelliteVec_Request_message_type_support_handle,
  &satellite_interfaces__srv__SatelliteVec_Response__rosidl_typesupport_introspection_c__SatelliteVec_Response_message_type_support_handle,
  &satellite_interfaces__srv__SatelliteVec_Event__rosidl_typesupport_introspection_c__SatelliteVec_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    satellite_interfaces,
    srv,
    SatelliteVec
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    satellite_interfaces,
    srv,
    SatelliteVec
  ),
  &satellite_interfaces__srv__SatelliteVec__get_type_hash,
  &satellite_interfaces__srv__SatelliteVec__get_type_description,
  &satellite_interfaces__srv__SatelliteVec__get_type_description_sources,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, satellite_interfaces, srv, SatelliteVec_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, satellite_interfaces, srv, SatelliteVec_Response)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, satellite_interfaces, srv, SatelliteVec_Event)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_satellite_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, satellite_interfaces, srv, SatelliteVec)() {
  if (!satellite_interfaces__srv__detail__satellite_vec__rosidl_typesupport_introspection_c__SatelliteVec_service_type_support_handle.typesupport_identifier) {
    satellite_interfaces__srv__detail__satellite_vec__rosidl_typesupport_introspection_c__SatelliteVec_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)satellite_interfaces__srv__detail__satellite_vec__rosidl_typesupport_introspection_c__SatelliteVec_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, satellite_interfaces, srv, SatelliteVec_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, satellite_interfaces, srv, SatelliteVec_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, satellite_interfaces, srv, SatelliteVec_Event)()->data;
  }

  return &satellite_interfaces__srv__detail__satellite_vec__rosidl_typesupport_introspection_c__SatelliteVec_service_type_support_handle;
}
