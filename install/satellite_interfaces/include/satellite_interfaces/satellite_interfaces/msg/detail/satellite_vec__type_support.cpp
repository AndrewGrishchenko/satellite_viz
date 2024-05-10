// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from satellite_interfaces:msg/SatelliteVec.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "satellite_interfaces/msg/detail/satellite_vec__functions.h"
#include "satellite_interfaces/msg/detail/satellite_vec__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace satellite_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SatelliteVec_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) satellite_interfaces::msg::SatelliteVec(_init);
}

void SatelliteVec_fini_function(void * message_memory)
{
  auto typed_message = static_cast<satellite_interfaces::msg::SatelliteVec *>(message_memory);
  typed_message->~SatelliteVec();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SatelliteVec_message_member_array[2] = {
  {
    "vector",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(satellite_interfaces::msg::SatelliteVec, vector),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(satellite_interfaces::msg::SatelliteVec, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SatelliteVec_message_members = {
  "satellite_interfaces::msg",  // message namespace
  "SatelliteVec",  // message name
  2,  // number of fields
  sizeof(satellite_interfaces::msg::SatelliteVec),
  SatelliteVec_message_member_array,  // message members
  SatelliteVec_init_function,  // function to initialize message memory (memory has to be allocated)
  SatelliteVec_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SatelliteVec_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SatelliteVec_message_members,
  get_message_typesupport_handle_function,
  &satellite_interfaces__msg__SatelliteVec__get_type_hash,
  &satellite_interfaces__msg__SatelliteVec__get_type_description,
  &satellite_interfaces__msg__SatelliteVec__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace satellite_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<satellite_interfaces::msg::SatelliteVec>()
{
  return &::satellite_interfaces::msg::rosidl_typesupport_introspection_cpp::SatelliteVec_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, satellite_interfaces, msg, SatelliteVec)() {
  return &::satellite_interfaces::msg::rosidl_typesupport_introspection_cpp::SatelliteVec_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
