// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_adapi_v1_msgs:srv/SetCooperationCommands.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_adapi_v1_msgs/srv/detail/set_cooperation_commands__rosidl_typesupport_introspection_c.h"
#include "autoware_adapi_v1_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_adapi_v1_msgs/srv/detail/set_cooperation_commands__functions.h"
#include "autoware_adapi_v1_msgs/srv/detail/set_cooperation_commands__struct.h"


// Include directives for member types
// Member `commands`
#include "autoware_adapi_v1_msgs/msg/cooperation_command.h"
// Member `commands`
#include "autoware_adapi_v1_msgs/msg/detail/cooperation_command__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autoware_adapi_v1_msgs__srv__SetCooperationCommands_Request__rosidl_typesupport_introspection_c__SetCooperationCommands_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_adapi_v1_msgs__srv__SetCooperationCommands_Request__init(message_memory);
}

void autoware_adapi_v1_msgs__srv__SetCooperationCommands_Request__rosidl_typesupport_introspection_c__SetCooperationCommands_Request_fini_function(void * message_memory)
{
  autoware_adapi_v1_msgs__srv__SetCooperationCommands_Request__fini(message_memory);
}

size_t autoware_adapi_v1_msgs__srv__SetCooperationCommands_Request__rosidl_typesupport_introspection_c__size_function__SetCooperationCommands_Request__commands(
  const void * untyped_member)
{
  const autoware_adapi_v1_msgs__msg__CooperationCommand__Sequence * member =
    (const autoware_adapi_v1_msgs__msg__CooperationCommand__Sequence *)(untyped_member);
  return member->size;
}

const void * autoware_adapi_v1_msgs__srv__SetCooperationCommands_Request__rosidl_typesupport_introspection_c__get_const_function__SetCooperationCommands_Request__commands(
  const void * untyped_member, size_t index)
{
  const autoware_adapi_v1_msgs__msg__CooperationCommand__Sequence * member =
    (const autoware_adapi_v1_msgs__msg__CooperationCommand__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autoware_adapi_v1_msgs__srv__SetCooperationCommands_Request__rosidl_typesupport_introspection_c__get_function__SetCooperationCommands_Request__commands(
  void * untyped_member, size_t index)
{
  autoware_adapi_v1_msgs__msg__CooperationCommand__Sequence * member =
    (autoware_adapi_v1_msgs__msg__CooperationCommand__Sequence *)(untyped_member);
  return &member->data[index];
}

void autoware_adapi_v1_msgs__srv__SetCooperationCommands_Request__rosidl_typesupport_introspection_c__fetch_function__SetCooperationCommands_Request__commands(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const autoware_adapi_v1_msgs__msg__CooperationCommand * item =
    ((const autoware_adapi_v1_msgs__msg__CooperationCommand *)
    autoware_adapi_v1_msgs__srv__SetCooperationCommands_Request__rosidl_typesupport_introspection_c__get_const_function__SetCooperationCommands_Request__commands(untyped_member, index));
  autoware_adapi_v1_msgs__msg__CooperationCommand * value =
    (autoware_adapi_v1_msgs__msg__CooperationCommand *)(untyped_value);
  *value = *item;
}

void autoware_adapi_v1_msgs__srv__SetCooperationCommands_Request__rosidl_typesupport_introspection_c__assign_function__SetCooperationCommands_Request__commands(
  void * untyped_member, size_t index, const void * untyped_value)
{
  autoware_adapi_v1_msgs__msg__CooperationCommand * item =
    ((autoware_adapi_v1_msgs__msg__CooperationCommand *)
    autoware_adapi_v1_msgs__srv__SetCooperationCommands_Request__rosidl_typesupport_introspection_c__get_function__SetCooperationCommands_Request__commands(untyped_member, index));
  const autoware_adapi_v1_msgs__msg__CooperationCommand * value =
    (const autoware_adapi_v1_msgs__msg__CooperationCommand *)(untyped_value);
  *item = *value;
}

bool autoware_adapi_v1_msgs__srv__SetCooperationCommands_Request__rosidl_typesupport_introspection_c__resize_function__SetCooperationCommands_Request__commands(
  void * untyped_member, size_t size)
{
  autoware_adapi_v1_msgs__msg__CooperationCommand__Sequence * member =
    (autoware_adapi_v1_msgs__msg__CooperationCommand__Sequence *)(untyped_member);
  autoware_adapi_v1_msgs__msg__CooperationCommand__Sequence__fini(member);
  return autoware_adapi_v1_msgs__msg__CooperationCommand__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember autoware_adapi_v1_msgs__srv__SetCooperationCommands_Request__rosidl_typesupport_introspection_c__SetCooperationCommands_Request_message_member_array[1] = {
  {
    "commands",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__srv__SetCooperationCommands_Request, commands),  // bytes offset in struct
    NULL,  // default value
    autoware_adapi_v1_msgs__srv__SetCooperationCommands_Request__rosidl_typesupport_introspection_c__size_function__SetCooperationCommands_Request__commands,  // size() function pointer
    autoware_adapi_v1_msgs__srv__SetCooperationCommands_Request__rosidl_typesupport_introspection_c__get_const_function__SetCooperationCommands_Request__commands,  // get_const(index) function pointer
    autoware_adapi_v1_msgs__srv__SetCooperationCommands_Request__rosidl_typesupport_introspection_c__get_function__SetCooperationCommands_Request__commands,  // get(index) function pointer
    autoware_adapi_v1_msgs__srv__SetCooperationCommands_Request__rosidl_typesupport_introspection_c__fetch_function__SetCooperationCommands_Request__commands,  // fetch(index, &value) function pointer
    autoware_adapi_v1_msgs__srv__SetCooperationCommands_Request__rosidl_typesupport_introspection_c__assign_function__SetCooperationCommands_Request__commands,  // assign(index, value) function pointer
    autoware_adapi_v1_msgs__srv__SetCooperationCommands_Request__rosidl_typesupport_introspection_c__resize_function__SetCooperationCommands_Request__commands  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_adapi_v1_msgs__srv__SetCooperationCommands_Request__rosidl_typesupport_introspection_c__SetCooperationCommands_Request_message_members = {
  "autoware_adapi_v1_msgs__srv",  // message namespace
  "SetCooperationCommands_Request",  // message name
  1,  // number of fields
  sizeof(autoware_adapi_v1_msgs__srv__SetCooperationCommands_Request),
  autoware_adapi_v1_msgs__srv__SetCooperationCommands_Request__rosidl_typesupport_introspection_c__SetCooperationCommands_Request_message_member_array,  // message members
  autoware_adapi_v1_msgs__srv__SetCooperationCommands_Request__rosidl_typesupport_introspection_c__SetCooperationCommands_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_adapi_v1_msgs__srv__SetCooperationCommands_Request__rosidl_typesupport_introspection_c__SetCooperationCommands_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_adapi_v1_msgs__srv__SetCooperationCommands_Request__rosidl_typesupport_introspection_c__SetCooperationCommands_Request_message_type_support_handle = {
  0,
  &autoware_adapi_v1_msgs__srv__SetCooperationCommands_Request__rosidl_typesupport_introspection_c__SetCooperationCommands_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_adapi_v1_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_v1_msgs, srv, SetCooperationCommands_Request)() {
  autoware_adapi_v1_msgs__srv__SetCooperationCommands_Request__rosidl_typesupport_introspection_c__SetCooperationCommands_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_v1_msgs, msg, CooperationCommand)();
  if (!autoware_adapi_v1_msgs__srv__SetCooperationCommands_Request__rosidl_typesupport_introspection_c__SetCooperationCommands_Request_message_type_support_handle.typesupport_identifier) {
    autoware_adapi_v1_msgs__srv__SetCooperationCommands_Request__rosidl_typesupport_introspection_c__SetCooperationCommands_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_adapi_v1_msgs__srv__SetCooperationCommands_Request__rosidl_typesupport_introspection_c__SetCooperationCommands_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "autoware_adapi_v1_msgs/srv/detail/set_cooperation_commands__rosidl_typesupport_introspection_c.h"
// already included above
// #include "autoware_adapi_v1_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "autoware_adapi_v1_msgs/srv/detail/set_cooperation_commands__functions.h"
// already included above
// #include "autoware_adapi_v1_msgs/srv/detail/set_cooperation_commands__struct.h"


// Include directives for member types
// Member `status`
#include "autoware_adapi_v1_msgs/msg/response_status.h"
// Member `status`
#include "autoware_adapi_v1_msgs/msg/detail/response_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autoware_adapi_v1_msgs__srv__SetCooperationCommands_Response__rosidl_typesupport_introspection_c__SetCooperationCommands_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_adapi_v1_msgs__srv__SetCooperationCommands_Response__init(message_memory);
}

void autoware_adapi_v1_msgs__srv__SetCooperationCommands_Response__rosidl_typesupport_introspection_c__SetCooperationCommands_Response_fini_function(void * message_memory)
{
  autoware_adapi_v1_msgs__srv__SetCooperationCommands_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember autoware_adapi_v1_msgs__srv__SetCooperationCommands_Response__rosidl_typesupport_introspection_c__SetCooperationCommands_Response_message_member_array[1] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__srv__SetCooperationCommands_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_adapi_v1_msgs__srv__SetCooperationCommands_Response__rosidl_typesupport_introspection_c__SetCooperationCommands_Response_message_members = {
  "autoware_adapi_v1_msgs__srv",  // message namespace
  "SetCooperationCommands_Response",  // message name
  1,  // number of fields
  sizeof(autoware_adapi_v1_msgs__srv__SetCooperationCommands_Response),
  autoware_adapi_v1_msgs__srv__SetCooperationCommands_Response__rosidl_typesupport_introspection_c__SetCooperationCommands_Response_message_member_array,  // message members
  autoware_adapi_v1_msgs__srv__SetCooperationCommands_Response__rosidl_typesupport_introspection_c__SetCooperationCommands_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_adapi_v1_msgs__srv__SetCooperationCommands_Response__rosidl_typesupport_introspection_c__SetCooperationCommands_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_adapi_v1_msgs__srv__SetCooperationCommands_Response__rosidl_typesupport_introspection_c__SetCooperationCommands_Response_message_type_support_handle = {
  0,
  &autoware_adapi_v1_msgs__srv__SetCooperationCommands_Response__rosidl_typesupport_introspection_c__SetCooperationCommands_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_adapi_v1_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_v1_msgs, srv, SetCooperationCommands_Response)() {
  autoware_adapi_v1_msgs__srv__SetCooperationCommands_Response__rosidl_typesupport_introspection_c__SetCooperationCommands_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_v1_msgs, msg, ResponseStatus)();
  if (!autoware_adapi_v1_msgs__srv__SetCooperationCommands_Response__rosidl_typesupport_introspection_c__SetCooperationCommands_Response_message_type_support_handle.typesupport_identifier) {
    autoware_adapi_v1_msgs__srv__SetCooperationCommands_Response__rosidl_typesupport_introspection_c__SetCooperationCommands_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_adapi_v1_msgs__srv__SetCooperationCommands_Response__rosidl_typesupport_introspection_c__SetCooperationCommands_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "autoware_adapi_v1_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "autoware_adapi_v1_msgs/srv/detail/set_cooperation_commands__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers autoware_adapi_v1_msgs__srv__detail__set_cooperation_commands__rosidl_typesupport_introspection_c__SetCooperationCommands_service_members = {
  "autoware_adapi_v1_msgs__srv",  // service namespace
  "SetCooperationCommands",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // autoware_adapi_v1_msgs__srv__detail__set_cooperation_commands__rosidl_typesupport_introspection_c__SetCooperationCommands_Request_message_type_support_handle,
  NULL  // response message
  // autoware_adapi_v1_msgs__srv__detail__set_cooperation_commands__rosidl_typesupport_introspection_c__SetCooperationCommands_Response_message_type_support_handle
};

static rosidl_service_type_support_t autoware_adapi_v1_msgs__srv__detail__set_cooperation_commands__rosidl_typesupport_introspection_c__SetCooperationCommands_service_type_support_handle = {
  0,
  &autoware_adapi_v1_msgs__srv__detail__set_cooperation_commands__rosidl_typesupport_introspection_c__SetCooperationCommands_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_v1_msgs, srv, SetCooperationCommands_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_v1_msgs, srv, SetCooperationCommands_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_adapi_v1_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_v1_msgs, srv, SetCooperationCommands)() {
  if (!autoware_adapi_v1_msgs__srv__detail__set_cooperation_commands__rosidl_typesupport_introspection_c__SetCooperationCommands_service_type_support_handle.typesupport_identifier) {
    autoware_adapi_v1_msgs__srv__detail__set_cooperation_commands__rosidl_typesupport_introspection_c__SetCooperationCommands_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)autoware_adapi_v1_msgs__srv__detail__set_cooperation_commands__rosidl_typesupport_introspection_c__SetCooperationCommands_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_v1_msgs, srv, SetCooperationCommands_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_v1_msgs, srv, SetCooperationCommands_Response)()->data;
  }

  return &autoware_adapi_v1_msgs__srv__detail__set_cooperation_commands__rosidl_typesupport_introspection_c__SetCooperationCommands_service_type_support_handle;
}
