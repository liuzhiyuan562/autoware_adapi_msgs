// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_adapi_v1_msgs:msg/SteeringFactor.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__STEERING_FACTOR__STRUCT_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__STEERING_FACTOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'cooperation'
#include "autoware_adapi_v1_msgs/msg/detail/cooperation_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_adapi_v1_msgs__msg__SteeringFactor __attribute__((deprecated))
#else
# define DEPRECATED__autoware_adapi_v1_msgs__msg__SteeringFactor __declspec(deprecated)
#endif

namespace autoware_adapi_v1_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SteeringFactor_
{
  using Type = SteeringFactor_<ContainerAllocator>;

  explicit SteeringFactor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pose.fill(geometry_msgs::msg::Pose_<ContainerAllocator>{_init});
      std::fill<typename std::array<float, 2>::iterator, float>(this->distance.begin(), this->distance.end(), 0.0f);
      this->direction = 0;
      this->status = 0;
      this->behavior = "";
      this->sequence = "";
      this->detail = "";
    }
  }

  explicit SteeringFactor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc),
    distance(_alloc),
    behavior(_alloc),
    sequence(_alloc),
    detail(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pose.fill(geometry_msgs::msg::Pose_<ContainerAllocator>{_alloc, _init});
      std::fill<typename std::array<float, 2>::iterator, float>(this->distance.begin(), this->distance.end(), 0.0f);
      this->direction = 0;
      this->status = 0;
      this->behavior = "";
      this->sequence = "";
      this->detail = "";
    }
  }

  // field types and members
  using _pose_type =
    std::array<geometry_msgs::msg::Pose_<ContainerAllocator>, 2>;
  _pose_type pose;
  using _distance_type =
    std::array<float, 2>;
  _distance_type distance;
  using _direction_type =
    uint16_t;
  _direction_type direction;
  using _status_type =
    uint16_t;
  _status_type status;
  using _behavior_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _behavior_type behavior;
  using _sequence_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sequence_type sequence;
  using _detail_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _detail_type detail;
  using _cooperation_type =
    rosidl_runtime_cpp::BoundedVector<autoware_adapi_v1_msgs::msg::CooperationStatus_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_adapi_v1_msgs::msg::CooperationStatus_<ContainerAllocator>>>;
  _cooperation_type cooperation;

  // setters for named parameter idiom
  Type & set__pose(
    const std::array<geometry_msgs::msg::Pose_<ContainerAllocator>, 2> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__distance(
    const std::array<float, 2> & _arg)
  {
    this->distance = _arg;
    return *this;
  }
  Type & set__direction(
    const uint16_t & _arg)
  {
    this->direction = _arg;
    return *this;
  }
  Type & set__status(
    const uint16_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__behavior(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->behavior = _arg;
    return *this;
  }
  Type & set__sequence(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sequence = _arg;
    return *this;
  }
  Type & set__detail(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->detail = _arg;
    return *this;
  }
  Type & set__cooperation(
    const rosidl_runtime_cpp::BoundedVector<autoware_adapi_v1_msgs::msg::CooperationStatus_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_adapi_v1_msgs::msg::CooperationStatus_<ContainerAllocator>>> & _arg)
  {
    this->cooperation = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t UNKNOWN =
    0u;
  static constexpr uint16_t LEFT =
    1u;
  static constexpr uint16_t RIGHT =
    2u;
  static constexpr uint16_t STRAIGHT =
    3u;
  static constexpr uint16_t APPROACHING =
    1u;
  static constexpr uint16_t TURNING =
    3u;

  // pointer types
  using RawPtr =
    autoware_adapi_v1_msgs::msg::SteeringFactor_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_adapi_v1_msgs::msg::SteeringFactor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_adapi_v1_msgs::msg::SteeringFactor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_adapi_v1_msgs::msg::SteeringFactor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_adapi_v1_msgs::msg::SteeringFactor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_adapi_v1_msgs::msg::SteeringFactor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_adapi_v1_msgs::msg::SteeringFactor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_adapi_v1_msgs::msg::SteeringFactor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_adapi_v1_msgs::msg::SteeringFactor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_adapi_v1_msgs::msg::SteeringFactor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_adapi_v1_msgs__msg__SteeringFactor
    std::shared_ptr<autoware_adapi_v1_msgs::msg::SteeringFactor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_adapi_v1_msgs__msg__SteeringFactor
    std::shared_ptr<autoware_adapi_v1_msgs::msg::SteeringFactor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SteeringFactor_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    if (this->direction != other.direction) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->behavior != other.behavior) {
      return false;
    }
    if (this->sequence != other.sequence) {
      return false;
    }
    if (this->detail != other.detail) {
      return false;
    }
    if (this->cooperation != other.cooperation) {
      return false;
    }
    return true;
  }
  bool operator!=(const SteeringFactor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SteeringFactor_

// alias to use template instance with default allocator
using SteeringFactor =
  autoware_adapi_v1_msgs::msg::SteeringFactor_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t SteeringFactor_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t SteeringFactor_<ContainerAllocator>::LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t SteeringFactor_<ContainerAllocator>::RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t SteeringFactor_<ContainerAllocator>::STRAIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t SteeringFactor_<ContainerAllocator>::APPROACHING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t SteeringFactor_<ContainerAllocator>::TURNING;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace autoware_adapi_v1_msgs

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__STEERING_FACTOR__STRUCT_HPP_
