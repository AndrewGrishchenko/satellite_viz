// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from satellite_interfaces:srv/SpawnSatellite.idl
// generated code does not contain a copyright notice

#ifndef SATELLITE_INTERFACES__SRV__DETAIL__SPAWN_SATELLITE__BUILDER_HPP_
#define SATELLITE_INTERFACES__SRV__DETAIL__SPAWN_SATELLITE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "satellite_interfaces/srv/detail/spawn_satellite__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace satellite_interfaces
{

namespace srv
{

namespace builder
{

class Init_SpawnSatellite_Request_name
{
public:
  Init_SpawnSatellite_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::satellite_interfaces::srv::SpawnSatellite_Request name(::satellite_interfaces::srv::SpawnSatellite_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::satellite_interfaces::srv::SpawnSatellite_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::satellite_interfaces::srv::SpawnSatellite_Request>()
{
  return satellite_interfaces::srv::builder::Init_SpawnSatellite_Request_name();
}

}  // namespace satellite_interfaces


namespace satellite_interfaces
{

namespace srv
{

namespace builder
{

class Init_SpawnSatellite_Response_success
{
public:
  Init_SpawnSatellite_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::satellite_interfaces::srv::SpawnSatellite_Response success(::satellite_interfaces::srv::SpawnSatellite_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::satellite_interfaces::srv::SpawnSatellite_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::satellite_interfaces::srv::SpawnSatellite_Response>()
{
  return satellite_interfaces::srv::builder::Init_SpawnSatellite_Response_success();
}

}  // namespace satellite_interfaces


namespace satellite_interfaces
{

namespace srv
{

namespace builder
{

class Init_SpawnSatellite_Event_response
{
public:
  explicit Init_SpawnSatellite_Event_response(::satellite_interfaces::srv::SpawnSatellite_Event & msg)
  : msg_(msg)
  {}
  ::satellite_interfaces::srv::SpawnSatellite_Event response(::satellite_interfaces::srv::SpawnSatellite_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::satellite_interfaces::srv::SpawnSatellite_Event msg_;
};

class Init_SpawnSatellite_Event_request
{
public:
  explicit Init_SpawnSatellite_Event_request(::satellite_interfaces::srv::SpawnSatellite_Event & msg)
  : msg_(msg)
  {}
  Init_SpawnSatellite_Event_response request(::satellite_interfaces::srv::SpawnSatellite_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SpawnSatellite_Event_response(msg_);
  }

private:
  ::satellite_interfaces::srv::SpawnSatellite_Event msg_;
};

class Init_SpawnSatellite_Event_info
{
public:
  Init_SpawnSatellite_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpawnSatellite_Event_request info(::satellite_interfaces::srv::SpawnSatellite_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SpawnSatellite_Event_request(msg_);
  }

private:
  ::satellite_interfaces::srv::SpawnSatellite_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::satellite_interfaces::srv::SpawnSatellite_Event>()
{
  return satellite_interfaces::srv::builder::Init_SpawnSatellite_Event_info();
}

}  // namespace satellite_interfaces

#endif  // SATELLITE_INTERFACES__SRV__DETAIL__SPAWN_SATELLITE__BUILDER_HPP_
