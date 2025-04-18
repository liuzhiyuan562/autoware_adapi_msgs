// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from autoware_adapi_v1_msgs:srv/GetCooperationPolicies.idl
// generated code does not contain a copyright notice
#include "autoware_adapi_v1_msgs/srv/detail/get_cooperation_policies__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "autoware_adapi_v1_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autoware_adapi_v1_msgs/srv/detail/get_cooperation_policies__struct.h"
#include "autoware_adapi_v1_msgs/srv/detail/get_cooperation_policies__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _GetCooperationPolicies_Request__ros_msg_type = autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request;

static bool _GetCooperationPolicies_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetCooperationPolicies_Request__ros_msg_type * ros_message = static_cast<const _GetCooperationPolicies_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _GetCooperationPolicies_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetCooperationPolicies_Request__ros_msg_type * ros_message = static_cast<_GetCooperationPolicies_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_adapi_v1_msgs
size_t get_serialized_size_autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetCooperationPolicies_Request__ros_msg_type * ros_message = static_cast<const _GetCooperationPolicies_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetCooperationPolicies_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_adapi_v1_msgs
size_t max_serialized_size_autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request(
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

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request;
    is_plain =
      (
      offsetof(DataType, structure_needs_at_least_one_member) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetCooperationPolicies_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetCooperationPolicies_Request = {
  "autoware_adapi_v1_msgs::srv",
  "GetCooperationPolicies_Request",
  _GetCooperationPolicies_Request__cdr_serialize,
  _GetCooperationPolicies_Request__cdr_deserialize,
  _GetCooperationPolicies_Request__get_serialized_size,
  _GetCooperationPolicies_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetCooperationPolicies_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetCooperationPolicies_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_adapi_v1_msgs, srv, GetCooperationPolicies_Request)() {
  return &_GetCooperationPolicies_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "autoware_adapi_v1_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "autoware_adapi_v1_msgs/srv/detail/get_cooperation_policies__struct.h"
// already included above
// #include "autoware_adapi_v1_msgs/srv/detail/get_cooperation_policies__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "autoware_adapi_v1_msgs/msg/detail/cooperation_policy__functions.h"  // policies
#include "autoware_adapi_v1_msgs/msg/detail/response_status__functions.h"  // status

// forward declare type support functions
size_t get_serialized_size_autoware_adapi_v1_msgs__msg__CooperationPolicy(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_autoware_adapi_v1_msgs__msg__CooperationPolicy(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_adapi_v1_msgs, msg, CooperationPolicy)();
size_t get_serialized_size_autoware_adapi_v1_msgs__msg__ResponseStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_autoware_adapi_v1_msgs__msg__ResponseStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_adapi_v1_msgs, msg, ResponseStatus)();


using _GetCooperationPolicies_Response__ros_msg_type = autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response;

static bool _GetCooperationPolicies_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetCooperationPolicies_Response__ros_msg_type * ros_message = static_cast<const _GetCooperationPolicies_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_adapi_v1_msgs, msg, ResponseStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->status, cdr))
    {
      return false;
    }
  }

  // Field name: policies
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_adapi_v1_msgs, msg, CooperationPolicy
      )()->data);
    size_t size = ros_message->policies.size;
    auto array_ptr = ros_message->policies.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _GetCooperationPolicies_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetCooperationPolicies_Response__ros_msg_type * ros_message = static_cast<_GetCooperationPolicies_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_adapi_v1_msgs, msg, ResponseStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->status))
    {
      return false;
    }
  }

  // Field name: policies
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_adapi_v1_msgs, msg, CooperationPolicy
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->policies.data) {
      autoware_adapi_v1_msgs__msg__CooperationPolicy__Sequence__fini(&ros_message->policies);
    }
    if (!autoware_adapi_v1_msgs__msg__CooperationPolicy__Sequence__init(&ros_message->policies, size)) {
      fprintf(stderr, "failed to create array for field 'policies'");
      return false;
    }
    auto array_ptr = ros_message->policies.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_adapi_v1_msgs
size_t get_serialized_size_autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetCooperationPolicies_Response__ros_msg_type * ros_message = static_cast<const _GetCooperationPolicies_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name status

  current_alignment += get_serialized_size_autoware_adapi_v1_msgs__msg__ResponseStatus(
    &(ros_message->status), current_alignment);
  // field.name policies
  {
    size_t array_size = ros_message->policies.size;
    auto array_ptr = ros_message->policies.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_autoware_adapi_v1_msgs__msg__CooperationPolicy(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetCooperationPolicies_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_adapi_v1_msgs
size_t max_serialized_size_autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response(
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

  // member: status
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_autoware_adapi_v1_msgs__msg__ResponseStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: policies
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_autoware_adapi_v1_msgs__msg__CooperationPolicy(
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
    using DataType = autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response;
    is_plain =
      (
      offsetof(DataType, policies) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetCooperationPolicies_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_autoware_adapi_v1_msgs__srv__GetCooperationPolicies_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetCooperationPolicies_Response = {
  "autoware_adapi_v1_msgs::srv",
  "GetCooperationPolicies_Response",
  _GetCooperationPolicies_Response__cdr_serialize,
  _GetCooperationPolicies_Response__cdr_deserialize,
  _GetCooperationPolicies_Response__get_serialized_size,
  _GetCooperationPolicies_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetCooperationPolicies_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetCooperationPolicies_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_adapi_v1_msgs, srv, GetCooperationPolicies_Response)() {
  return &_GetCooperationPolicies_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "autoware_adapi_v1_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autoware_adapi_v1_msgs/srv/get_cooperation_policies.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetCooperationPolicies__callbacks = {
  "autoware_adapi_v1_msgs::srv",
  "GetCooperationPolicies",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_adapi_v1_msgs, srv, GetCooperationPolicies_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_adapi_v1_msgs, srv, GetCooperationPolicies_Response)(),
};

static rosidl_service_type_support_t GetCooperationPolicies__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetCooperationPolicies__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_adapi_v1_msgs, srv, GetCooperationPolicies)() {
  return &GetCooperationPolicies__handle;
}

#if defined(__cplusplus)
}
#endif
