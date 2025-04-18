// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_adapi_v1_msgs:msg/ManualOperatorHeartbeat.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__MANUAL_OPERATOR_HEARTBEAT__TRAITS_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__MANUAL_OPERATOR_HEARTBEAT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_adapi_v1_msgs/msg/detail/manual_operator_heartbeat__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace autoware_adapi_v1_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ManualOperatorHeartbeat & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: ready
  {
    out << "ready: ";
    rosidl_generator_traits::value_to_yaml(msg.ready, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ManualOperatorHeartbeat & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: ready
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ready: ";
    rosidl_generator_traits::value_to_yaml(msg.ready, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ManualOperatorHeartbeat & msg, bool use_flow_style = false)
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

}  // namespace autoware_adapi_v1_msgs

namespace rosidl_generator_traits
{

[[deprecated("use autoware_adapi_v1_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autoware_adapi_v1_msgs::msg::ManualOperatorHeartbeat & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_adapi_v1_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_adapi_v1_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_adapi_v1_msgs::msg::ManualOperatorHeartbeat & msg)
{
  return autoware_adapi_v1_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_adapi_v1_msgs::msg::ManualOperatorHeartbeat>()
{
  return "autoware_adapi_v1_msgs::msg::ManualOperatorHeartbeat";
}

template<>
inline const char * name<autoware_adapi_v1_msgs::msg::ManualOperatorHeartbeat>()
{
  return "autoware_adapi_v1_msgs/msg/ManualOperatorHeartbeat";
}

template<>
struct has_fixed_size<autoware_adapi_v1_msgs::msg::ManualOperatorHeartbeat>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<autoware_adapi_v1_msgs::msg::ManualOperatorHeartbeat>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<autoware_adapi_v1_msgs::msg::ManualOperatorHeartbeat>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__MANUAL_OPERATOR_HEARTBEAT__TRAITS_HPP_
