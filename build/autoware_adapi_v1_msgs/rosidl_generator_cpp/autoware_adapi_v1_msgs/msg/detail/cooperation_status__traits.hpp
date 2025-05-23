// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_adapi_v1_msgs:msg/CooperationStatus.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__COOPERATION_STATUS__TRAITS_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__COOPERATION_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_adapi_v1_msgs/msg/detail/cooperation_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'uuid'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'autonomous'
// Member 'cooperator'
#include "autoware_adapi_v1_msgs/msg/detail/cooperation_decision__traits.hpp"

namespace autoware_adapi_v1_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CooperationStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: uuid
  {
    out << "uuid: ";
    to_flow_style_yaml(msg.uuid, out);
    out << ", ";
  }

  // member: autonomous
  {
    out << "autonomous: ";
    to_flow_style_yaml(msg.autonomous, out);
    out << ", ";
  }

  // member: cooperator
  {
    out << "cooperator: ";
    to_flow_style_yaml(msg.cooperator, out);
    out << ", ";
  }

  // member: cancellable
  {
    out << "cancellable: ";
    rosidl_generator_traits::value_to_yaml(msg.cancellable, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CooperationStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: uuid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uuid:\n";
    to_block_style_yaml(msg.uuid, out, indentation + 2);
  }

  // member: autonomous
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "autonomous:\n";
    to_block_style_yaml(msg.autonomous, out, indentation + 2);
  }

  // member: cooperator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cooperator:\n";
    to_block_style_yaml(msg.cooperator, out, indentation + 2);
  }

  // member: cancellable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cancellable: ";
    rosidl_generator_traits::value_to_yaml(msg.cancellable, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CooperationStatus & msg, bool use_flow_style = false)
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
  const autoware_adapi_v1_msgs::msg::CooperationStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_adapi_v1_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_adapi_v1_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_adapi_v1_msgs::msg::CooperationStatus & msg)
{
  return autoware_adapi_v1_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_adapi_v1_msgs::msg::CooperationStatus>()
{
  return "autoware_adapi_v1_msgs::msg::CooperationStatus";
}

template<>
inline const char * name<autoware_adapi_v1_msgs::msg::CooperationStatus>()
{
  return "autoware_adapi_v1_msgs/msg/CooperationStatus";
}

template<>
struct has_fixed_size<autoware_adapi_v1_msgs::msg::CooperationStatus>
  : std::integral_constant<bool, has_fixed_size<autoware_adapi_v1_msgs::msg::CooperationDecision>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<autoware_adapi_v1_msgs::msg::CooperationStatus>
  : std::integral_constant<bool, has_bounded_size<autoware_adapi_v1_msgs::msg::CooperationDecision>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<autoware_adapi_v1_msgs::msg::CooperationStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__COOPERATION_STATUS__TRAITS_HPP_
