// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from satellite_interfaces:msg/SatelliteVec.idl
// generated code does not contain a copyright notice

#ifndef SATELLITE_INTERFACES__MSG__DETAIL__SATELLITE_VEC__BUILDER_HPP_
#define SATELLITE_INTERFACES__MSG__DETAIL__SATELLITE_VEC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "satellite_interfaces/msg/detail/satellite_vec__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace satellite_interfaces
{

namespace msg
{

namespace builder
{

class Init_SatelliteVec_name
{
public:
  explicit Init_SatelliteVec_name(::satellite_interfaces::msg::SatelliteVec & msg)
  : msg_(msg)
  {}
  ::satellite_interfaces::msg::SatelliteVec name(::satellite_interfaces::msg::SatelliteVec::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::satellite_interfaces::msg::SatelliteVec msg_;
};

class Init_SatelliteVec_vector
{
public:
  Init_SatelliteVec_vector()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SatelliteVec_name vector(::satellite_interfaces::msg::SatelliteVec::_vector_type arg)
  {
    msg_.vector = std::move(arg);
    return Init_SatelliteVec_name(msg_);
  }

private:
  ::satellite_interfaces::msg::SatelliteVec msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::satellite_interfaces::msg::SatelliteVec>()
{
  return satellite_interfaces::msg::builder::Init_SatelliteVec_vector();
}

}  // namespace satellite_interfaces

#endif  // SATELLITE_INTERFACES__MSG__DETAIL__SATELLITE_VEC__BUILDER_HPP_
