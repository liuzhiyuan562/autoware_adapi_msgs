// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_adapi_v1_msgs:msg/DynamicObjectPath.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__DYNAMIC_OBJECT_PATH__TRAITS_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__DYNAMIC_OBJECT_PATH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_adapi_v1_msgs/msg/detail/dynamic_object_path__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'path'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'time_step'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace autoware_adapi_v1_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DynamicObjectPath & msg,
  std::ostream & out)
{
  out << "{";
  // member: path
  {
    if (msg.path.size() == 0) {
      out << "path: []";
    } else {
      out << "path: [";
      size_t pending_items = msg.path.size();
      for (auto item : msg.path) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: time_step
  {
    out << "time_step: ";
    to_flow_style_yaml(msg.time_step, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DynamicObjectPath & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.path.size() == 0) {
      out << "path: []\n";
    } else {
      out << "path:\n";
      for (auto item : msg.path) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: time_step
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_step:\n";
    to_block_style_yaml(msg.time_step, out, indentation + 2);
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DynamicObjectPath & msg, bool use_flow_style = false)
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
  const autoware_adapi_v1_msgs::msg::DynamicObjectPath & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_adapi_v1_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_adapi_v1_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_adapi_v1_msgs::msg::DynamicObjectPath & msg)
{
  return autoware_adapi_v1_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_adapi_v1_msgs::msg::DynamicObjectPath>()
{
  return "autoware_adapi_v1_msgs::msg::DynamicObjectPath";
}

template<>
inline const char * name<autoware_adapi_v1_msgs::msg::DynamicObjectPath>()
{
  return "autoware_adapi_v1_msgs/msg/DynamicObjectPath";
}

template<>
struct has_fixed_size<autoware_adapi_v1_msgs::msg::DynamicObjectPath>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_adapi_v1_msgs::msg::DynamicObjectPath>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_adapi_v1_msgs::msg::DynamicObjectPath>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__DYNAMIC_OBJECT_PATH__TRAITS_HPP_
