// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from autoware_adapi_v1_msgs:srv/SelectManualControlMode.idl
// generated code does not contain a copyright notice
#include "autoware_adapi_v1_msgs/srv/detail/select_manual_control_mode__rosidl_typesupport_fastrtps_cpp.hpp"
#include "autoware_adapi_v1_msgs/srv/detail/select_manual_control_mode__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace autoware_adapi_v1_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const autoware_adapi_v1_msgs::msg::ManualControlMode &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  autoware_adapi_v1_msgs::msg::ManualControlMode &);
size_t get_serialized_size(
  const autoware_adapi_v1_msgs::msg::ManualControlMode &,
  size_t current_alignment);
size_t
max_serialized_size_ManualControlMode(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace autoware_adapi_v1_msgs


namespace autoware_adapi_v1_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_adapi_v1_msgs
cdr_serialize(
  const autoware_adapi_v1_msgs::srv::SelectManualControlMode_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: mode
  autoware_adapi_v1_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.mode,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_adapi_v1_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  autoware_adapi_v1_msgs::srv::SelectManualControlMode_Request & ros_message)
{
  // Member: mode
  autoware_adapi_v1_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.mode);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_adapi_v1_msgs
get_serialized_size(
  const autoware_adapi_v1_msgs::srv::SelectManualControlMode_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: mode

  current_alignment +=
    autoware_adapi_v1_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.mode, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_adapi_v1_msgs
max_serialized_size_SelectManualControlMode_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: mode
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        autoware_adapi_v1_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ManualControlMode(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = autoware_adapi_v1_msgs::srv::SelectManualControlMode_Request;
    is_plain =
      (
      offsetof(DataType, mode) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SelectManualControlMode_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const autoware_adapi_v1_msgs::srv::SelectManualControlMode_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SelectManualControlMode_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<autoware_adapi_v1_msgs::srv::SelectManualControlMode_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SelectManualControlMode_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const autoware_adapi_v1_msgs::srv::SelectManualControlMode_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SelectManualControlMode_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SelectManualControlMode_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SelectManualControlMode_Request__callbacks = {
  "autoware_adapi_v1_msgs::srv",
  "SelectManualControlMode_Request",
  _SelectManualControlMode_Request__cdr_serialize,
  _SelectManualControlMode_Request__cdr_deserialize,
  _SelectManualControlMode_Request__get_serialized_size,
  _SelectManualControlMode_Request__max_serialized_size
};

static rosidl_message_type_support_t _SelectManualControlMode_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SelectManualControlMode_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace autoware_adapi_v1_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_autoware_adapi_v1_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<autoware_adapi_v1_msgs::srv::SelectManualControlMode_Request>()
{
  return &autoware_adapi_v1_msgs::srv::typesupport_fastrtps_cpp::_SelectManualControlMode_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autoware_adapi_v1_msgs, srv, SelectManualControlMode_Request)() {
  return &autoware_adapi_v1_msgs::srv::typesupport_fastrtps_cpp::_SelectManualControlMode_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace autoware_adapi_v1_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const autoware_adapi_v1_msgs::msg::ResponseStatus &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  autoware_adapi_v1_msgs::msg::ResponseStatus &);
size_t get_serialized_size(
  const autoware_adapi_v1_msgs::msg::ResponseStatus &,
  size_t current_alignment);
size_t
max_serialized_size_ResponseStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace autoware_adapi_v1_msgs


namespace autoware_adapi_v1_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_adapi_v1_msgs
cdr_serialize(
  const autoware_adapi_v1_msgs::srv::SelectManualControlMode_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: status
  autoware_adapi_v1_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.status,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_adapi_v1_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  autoware_adapi_v1_msgs::srv::SelectManualControlMode_Response & ros_message)
{
  // Member: status
  autoware_adapi_v1_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.status);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_adapi_v1_msgs
get_serialized_size(
  const autoware_adapi_v1_msgs::srv::SelectManualControlMode_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: status

  current_alignment +=
    autoware_adapi_v1_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.status, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_adapi_v1_msgs
max_serialized_size_SelectManualControlMode_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: status
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        autoware_adapi_v1_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ResponseStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = autoware_adapi_v1_msgs::srv::SelectManualControlMode_Response;
    is_plain =
      (
      offsetof(DataType, status) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SelectManualControlMode_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const autoware_adapi_v1_msgs::srv::SelectManualControlMode_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SelectManualControlMode_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<autoware_adapi_v1_msgs::srv::SelectManualControlMode_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SelectManualControlMode_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const autoware_adapi_v1_msgs::srv::SelectManualControlMode_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SelectManualControlMode_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SelectManualControlMode_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SelectManualControlMode_Response__callbacks = {
  "autoware_adapi_v1_msgs::srv",
  "SelectManualControlMode_Response",
  _SelectManualControlMode_Response__cdr_serialize,
  _SelectManualControlMode_Response__cdr_deserialize,
  _SelectManualControlMode_Response__get_serialized_size,
  _SelectManualControlMode_Response__max_serialized_size
};

static rosidl_message_type_support_t _SelectManualControlMode_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SelectManualControlMode_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace autoware_adapi_v1_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_autoware_adapi_v1_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<autoware_adapi_v1_msgs::srv::SelectManualControlMode_Response>()
{
  return &autoware_adapi_v1_msgs::srv::typesupport_fastrtps_cpp::_SelectManualControlMode_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autoware_adapi_v1_msgs, srv, SelectManualControlMode_Response)() {
  return &autoware_adapi_v1_msgs::srv::typesupport_fastrtps_cpp::_SelectManualControlMode_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace autoware_adapi_v1_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _SelectManualControlMode__callbacks = {
  "autoware_adapi_v1_msgs::srv",
  "SelectManualControlMode",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autoware_adapi_v1_msgs, srv, SelectManualControlMode_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autoware_adapi_v1_msgs, srv, SelectManualControlMode_Response)(),
};

static rosidl_service_type_support_t _SelectManualControlMode__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SelectManualControlMode__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace autoware_adapi_v1_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_autoware_adapi_v1_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<autoware_adapi_v1_msgs::srv::SelectManualControlMode>()
{
  return &autoware_adapi_v1_msgs::srv::typesupport_fastrtps_cpp::_SelectManualControlMode__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autoware_adapi_v1_msgs, srv, SelectManualControlMode)() {
  return &autoware_adapi_v1_msgs::srv::typesupport_fastrtps_cpp::_SelectManualControlMode__handle;
}

#ifdef __cplusplus
}
#endif
