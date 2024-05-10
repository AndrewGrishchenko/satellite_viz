// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from satellite_interfaces:msg/SatelliteVec.idl
// generated code does not contain a copyright notice

#ifndef SATELLITE_INTERFACES__MSG__DETAIL__SATELLITE_VEC__STRUCT_HPP_
#define SATELLITE_INTERFACES__MSG__DETAIL__SATELLITE_VEC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'vector'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__satellite_interfaces__msg__SatelliteVec __attribute__((deprecated))
#else
# define DEPRECATED__satellite_interfaces__msg__SatelliteVec __declspec(deprecated)
#endif

namespace satellite_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SatelliteVec_
{
  using Type = SatelliteVec_<ContainerAllocator>;

  explicit SatelliteVec_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : vector(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  explicit SatelliteVec_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : vector(_alloc, _init),
    name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  // field types and members
  using _vector_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _vector_type vector;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;

  // setters for named parameter idiom
  Type & set__vector(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->vector = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    satellite_interfaces::msg::SatelliteVec_<ContainerAllocator> *;
  using ConstRawPtr =
    const satellite_interfaces::msg::SatelliteVec_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<satellite_interfaces::msg::SatelliteVec_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<satellite_interfaces::msg::SatelliteVec_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      satellite_interfaces::msg::SatelliteVec_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<satellite_interfaces::msg::SatelliteVec_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      satellite_interfaces::msg::SatelliteVec_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<satellite_interfaces::msg::SatelliteVec_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<satellite_interfaces::msg::SatelliteVec_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<satellite_interfaces::msg::SatelliteVec_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__satellite_interfaces__msg__SatelliteVec
    std::shared_ptr<satellite_interfaces::msg::SatelliteVec_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__satellite_interfaces__msg__SatelliteVec
    std::shared_ptr<satellite_interfaces::msg::SatelliteVec_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SatelliteVec_ & other) const
  {
    if (this->vector != other.vector) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    return true;
  }
  bool operator!=(const SatelliteVec_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SatelliteVec_

// alias to use template instance with default allocator
using SatelliteVec =
  satellite_interfaces::msg::SatelliteVec_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace satellite_interfaces

#endif  // SATELLITE_INTERFACES__MSG__DETAIL__SATELLITE_VEC__STRUCT_HPP_
