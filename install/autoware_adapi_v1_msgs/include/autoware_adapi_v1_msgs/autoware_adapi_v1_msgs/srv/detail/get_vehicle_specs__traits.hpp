// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_adapi_v1_msgs:srv/GetVehicleSpecs.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__SRV__DETAIL__GET_VEHICLE_SPECS__TRAITS_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__SRV__DETAIL__GET_VEHICLE_SPECS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_adapi_v1_msgs/srv/detail/get_vehicle_specs__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace autoware_adapi_v1_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetVehicleSpecs_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetVehicleSpecs_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetVehicleSpecs_Request & msg, bool use_flow_style = false)
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

}  // namespace autoware_adapi_v1_msgs

namespace rosidl_generator_traits
{

[[deprecated("use autoware_adapi_v1_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autoware_adapi_v1_msgs::srv::GetVehicleSpecs_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_adapi_v1_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_adapi_v1_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const autoware_adapi_v1_msgs::srv::GetVehicleSpecs_Request & msg)
{
  return autoware_adapi_v1_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_adapi_v1_msgs::srv::GetVehicleSpecs_Request>()
{
  return "autoware_adapi_v1_msgs::srv::GetVehicleSpecs_Request";
}

template<>
inline const char * name<autoware_adapi_v1_msgs::srv::GetVehicleSpecs_Request>()
{
  return "autoware_adapi_v1_msgs/srv/GetVehicleSpecs_Request";
}

template<>
struct has_fixed_size<autoware_adapi_v1_msgs::srv::GetVehicleSpecs_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<autoware_adapi_v1_msgs::srv::GetVehicleSpecs_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<autoware_adapi_v1_msgs::srv::GetVehicleSpecs_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'status'
#include "autoware_adapi_v1_msgs/msg/detail/response_status__traits.hpp"
// Member 'specs'
#include "autoware_adapi_v1_msgs/msg/detail/vehicle_specs__traits.hpp"

namespace autoware_adapi_v1_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetVehicleSpecs_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
    out << ", ";
  }

  // member: specs
  {
    out << "specs: ";
    to_flow_style_yaml(msg.specs, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetVehicleSpecs_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_block_style_yaml(msg.status, out, indentation + 2);
  }

  // member: specs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "specs:\n";
    to_block_style_yaml(msg.specs, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetVehicleSpecs_Response & msg, bool use_flow_style = false)
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

}  // namespace autoware_adapi_v1_msgs

namespace rosidl_generator_traits
{

[[deprecated("use autoware_adapi_v1_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autoware_adapi_v1_msgs::srv::GetVehicleSpecs_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_adapi_v1_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_adapi_v1_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const autoware_adapi_v1_msgs::srv::GetVehicleSpecs_Response & msg)
{
  return autoware_adapi_v1_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_adapi_v1_msgs::srv::GetVehicleSpecs_Response>()
{
  return "autoware_adapi_v1_msgs::srv::GetVehicleSpecs_Response";
}

template<>
inline const char * name<autoware_adapi_v1_msgs::srv::GetVehicleSpecs_Response>()
{
  return "autoware_adapi_v1_msgs/srv/GetVehicleSpecs_Response";
}

template<>
struct has_fixed_size<autoware_adapi_v1_msgs::srv::GetVehicleSpecs_Response>
  : std::integral_constant<bool, has_fixed_size<autoware_adapi_v1_msgs::msg::ResponseStatus>::value && has_fixed_size<autoware_adapi_v1_msgs::msg::VehicleSpecs>::value> {};

template<>
struct has_bounded_size<autoware_adapi_v1_msgs::srv::GetVehicleSpecs_Response>
  : std::integral_constant<bool, has_bounded_size<autoware_adapi_v1_msgs::msg::ResponseStatus>::value && has_bounded_size<autoware_adapi_v1_msgs::msg::VehicleSpecs>::value> {};

template<>
struct is_message<autoware_adapi_v1_msgs::srv::GetVehicleSpecs_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_adapi_v1_msgs::srv::GetVehicleSpecs>()
{
  return "autoware_adapi_v1_msgs::srv::GetVehicleSpecs";
}

template<>
inline const char * name<autoware_adapi_v1_msgs::srv::GetVehicleSpecs>()
{
  return "autoware_adapi_v1_msgs/srv/GetVehicleSpecs";
}

template<>
struct has_fixed_size<autoware_adapi_v1_msgs::srv::GetVehicleSpecs>
  : std::integral_constant<
    bool,
    has_fixed_size<autoware_adapi_v1_msgs::srv::GetVehicleSpecs_Request>::value &&
    has_fixed_size<autoware_adapi_v1_msgs::srv::GetVehicleSpecs_Response>::value
  >
{
};

template<>
struct has_bounded_size<autoware_adapi_v1_msgs::srv::GetVehicleSpecs>
  : std::integral_constant<
    bool,
    has_bounded_size<autoware_adapi_v1_msgs::srv::GetVehicleSpecs_Request>::value &&
    has_bounded_size<autoware_adapi_v1_msgs::srv::GetVehicleSpecs_Response>::value
  >
{
};

template<>
struct is_service<autoware_adapi_v1_msgs::srv::GetVehicleSpecs>
  : std::true_type
{
};

template<>
struct is_service_request<autoware_adapi_v1_msgs::srv::GetVehicleSpecs_Request>
  : std::true_type
{
};

template<>
struct is_service_response<autoware_adapi_v1_msgs::srv::GetVehicleSpecs_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_ADAPI_V1_MSGS__SRV__DETAIL__GET_VEHICLE_SPECS__TRAITS_HPP_
