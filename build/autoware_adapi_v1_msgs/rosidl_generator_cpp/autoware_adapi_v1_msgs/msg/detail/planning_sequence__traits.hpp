// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_adapi_v1_msgs:msg/PlanningSequence.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__PLANNING_SEQUENCE__TRAITS_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__PLANNING_SEQUENCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_adapi_v1_msgs/msg/detail/planning_sequence__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace autoware_adapi_v1_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PlanningSequence & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlanningSequence & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanningSequence & msg, bool use_flow_style = false)
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
  const autoware_adapi_v1_msgs::msg::PlanningSequence & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_adapi_v1_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_adapi_v1_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_adapi_v1_msgs::msg::PlanningSequence & msg)
{
  return autoware_adapi_v1_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_adapi_v1_msgs::msg::PlanningSequence>()
{
  return "autoware_adapi_v1_msgs::msg::PlanningSequence";
}

template<>
inline const char * name<autoware_adapi_v1_msgs::msg::PlanningSequence>()
{
  return "autoware_adapi_v1_msgs/msg/PlanningSequence";
}

template<>
struct has_fixed_size<autoware_adapi_v1_msgs::msg::PlanningSequence>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<autoware_adapi_v1_msgs::msg::PlanningSequence>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<autoware_adapi_v1_msgs::msg::PlanningSequence>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__PLANNING_SEQUENCE__TRAITS_HPP_
