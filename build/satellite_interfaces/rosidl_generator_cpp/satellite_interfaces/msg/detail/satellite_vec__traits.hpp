// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from satellite_interfaces:msg/SatelliteVec.idl
// generated code does not contain a copyright notice

#ifndef SATELLITE_INTERFACES__MSG__DETAIL__SATELLITE_VEC__TRAITS_HPP_
#define SATELLITE_INTERFACES__MSG__DETAIL__SATELLITE_VEC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "satellite_interfaces/msg/detail/satellite_vec__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'vector'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace satellite_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const SatelliteVec & msg,
  std::ostream & out)
{
  out << "{";
  // member: vector
  {
    out << "vector: ";
    to_flow_style_yaml(msg.vector, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SatelliteVec & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: vector
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vector:\n";
    to_block_style_yaml(msg.vector, out, indentation + 2);
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SatelliteVec & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace satellite_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use satellite_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const satellite_interfaces::msg::SatelliteVec & msg,
  std::ostream & out, size_t indentation = 0)
{
  satellite_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use satellite_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const satellite_interfaces::msg::SatelliteVec & msg)
{
  return satellite_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<satellite_interfaces::msg::SatelliteVec>()
{
  return "satellite_interfaces::msg::SatelliteVec";
}

template<>
inline const char * name<satellite_interfaces::msg::SatelliteVec>()
{
  return "satellite_interfaces/msg/SatelliteVec";
}

template<>
struct has_fixed_size<satellite_interfaces::msg::SatelliteVec>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<satellite_interfaces::msg::SatelliteVec>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<satellite_interfaces::msg::SatelliteVec>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SATELLITE_INTERFACES__MSG__DETAIL__SATELLITE_VEC__TRAITS_HPP_
