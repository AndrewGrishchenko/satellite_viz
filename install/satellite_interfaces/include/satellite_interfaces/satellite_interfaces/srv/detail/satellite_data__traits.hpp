// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from satellite_interfaces:srv/SatelliteData.idl
// generated code does not contain a copyright notice

#ifndef SATELLITE_INTERFACES__SRV__DETAIL__SATELLITE_DATA__TRAITS_HPP_
#define SATELLITE_INTERFACES__SRV__DETAIL__SATELLITE_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "satellite_interfaces/srv/detail/satellite_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace satellite_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SatelliteData_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SatelliteData_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
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

inline std::string to_yaml(const SatelliteData_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace satellite_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use satellite_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const satellite_interfaces::srv::SatelliteData_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  satellite_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use satellite_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const satellite_interfaces::srv::SatelliteData_Request & msg)
{
  return satellite_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<satellite_interfaces::srv::SatelliteData_Request>()
{
  return "satellite_interfaces::srv::SatelliteData_Request";
}

template<>
inline const char * name<satellite_interfaces::srv::SatelliteData_Request>()
{
  return "satellite_interfaces/srv/SatelliteData_Request";
}

template<>
struct has_fixed_size<satellite_interfaces::srv::SatelliteData_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<satellite_interfaces::srv::SatelliteData_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<satellite_interfaces::srv::SatelliteData_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace satellite_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SatelliteData_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SatelliteData_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SatelliteData_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace satellite_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use satellite_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const satellite_interfaces::srv::SatelliteData_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  satellite_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use satellite_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const satellite_interfaces::srv::SatelliteData_Response & msg)
{
  return satellite_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<satellite_interfaces::srv::SatelliteData_Response>()
{
  return "satellite_interfaces::srv::SatelliteData_Response";
}

template<>
inline const char * name<satellite_interfaces::srv::SatelliteData_Response>()
{
  return "satellite_interfaces/srv/SatelliteData_Response";
}

template<>
struct has_fixed_size<satellite_interfaces::srv::SatelliteData_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<satellite_interfaces::srv::SatelliteData_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<satellite_interfaces::srv::SatelliteData_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace satellite_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SatelliteData_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SatelliteData_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SatelliteData_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace satellite_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use satellite_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const satellite_interfaces::srv::SatelliteData_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  satellite_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use satellite_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const satellite_interfaces::srv::SatelliteData_Event & msg)
{
  return satellite_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<satellite_interfaces::srv::SatelliteData_Event>()
{
  return "satellite_interfaces::srv::SatelliteData_Event";
}

template<>
inline const char * name<satellite_interfaces::srv::SatelliteData_Event>()
{
  return "satellite_interfaces/srv/SatelliteData_Event";
}

template<>
struct has_fixed_size<satellite_interfaces::srv::SatelliteData_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<satellite_interfaces::srv::SatelliteData_Event>
  : std::integral_constant<bool, has_bounded_size<satellite_interfaces::srv::SatelliteData_Request>::value && has_bounded_size<satellite_interfaces::srv::SatelliteData_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<satellite_interfaces::srv::SatelliteData_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<satellite_interfaces::srv::SatelliteData>()
{
  return "satellite_interfaces::srv::SatelliteData";
}

template<>
inline const char * name<satellite_interfaces::srv::SatelliteData>()
{
  return "satellite_interfaces/srv/SatelliteData";
}

template<>
struct has_fixed_size<satellite_interfaces::srv::SatelliteData>
  : std::integral_constant<
    bool,
    has_fixed_size<satellite_interfaces::srv::SatelliteData_Request>::value &&
    has_fixed_size<satellite_interfaces::srv::SatelliteData_Response>::value
  >
{
};

template<>
struct has_bounded_size<satellite_interfaces::srv::SatelliteData>
  : std::integral_constant<
    bool,
    has_bounded_size<satellite_interfaces::srv::SatelliteData_Request>::value &&
    has_bounded_size<satellite_interfaces::srv::SatelliteData_Response>::value
  >
{
};

template<>
struct is_service<satellite_interfaces::srv::SatelliteData>
  : std::true_type
{
};

template<>
struct is_service_request<satellite_interfaces::srv::SatelliteData_Request>
  : std::true_type
{
};

template<>
struct is_service_response<satellite_interfaces::srv::SatelliteData_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SATELLITE_INTERFACES__SRV__DETAIL__SATELLITE_DATA__TRAITS_HPP_
