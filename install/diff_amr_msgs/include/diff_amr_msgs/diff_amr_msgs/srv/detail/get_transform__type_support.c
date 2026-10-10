// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from diff_amr_msgs:srv/GetTransform.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "diff_amr_msgs/srv/detail/get_transform__rosidl_typesupport_introspection_c.h"
#include "diff_amr_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "diff_amr_msgs/srv/detail/get_transform__functions.h"
#include "diff_amr_msgs/srv/detail/get_transform__struct.h"


// Include directives for member types
// Member `frame_id`
// Member `child_frame_id`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void diff_amr_msgs__srv__GetTransform_Request__rosidl_typesupport_introspection_c__GetTransform_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  diff_amr_msgs__srv__GetTransform_Request__init(message_memory);
}

void diff_amr_msgs__srv__GetTransform_Request__rosidl_typesupport_introspection_c__GetTransform_Request_fini_function(void * message_memory)
{
  diff_amr_msgs__srv__GetTransform_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember diff_amr_msgs__srv__GetTransform_Request__rosidl_typesupport_introspection_c__GetTransform_Request_message_member_array[2] = {
  {
    "frame_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(diff_amr_msgs__srv__GetTransform_Request, frame_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "child_frame_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(diff_amr_msgs__srv__GetTransform_Request, child_frame_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers diff_amr_msgs__srv__GetTransform_Request__rosidl_typesupport_introspection_c__GetTransform_Request_message_members = {
  "diff_amr_msgs__srv",  // message namespace
  "GetTransform_Request",  // message name
  2,  // number of fields
  sizeof(diff_amr_msgs__srv__GetTransform_Request),
  false,  // has_any_key_member_
  diff_amr_msgs__srv__GetTransform_Request__rosidl_typesupport_introspection_c__GetTransform_Request_message_member_array,  // message members
  diff_amr_msgs__srv__GetTransform_Request__rosidl_typesupport_introspection_c__GetTransform_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  diff_amr_msgs__srv__GetTransform_Request__rosidl_typesupport_introspection_c__GetTransform_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t diff_amr_msgs__srv__GetTransform_Request__rosidl_typesupport_introspection_c__GetTransform_Request_message_type_support_handle = {
  0,
  &diff_amr_msgs__srv__GetTransform_Request__rosidl_typesupport_introspection_c__GetTransform_Request_message_members,
  get_message_typesupport_handle_function,
  &diff_amr_msgs__srv__GetTransform_Request__get_type_hash,
  &diff_amr_msgs__srv__GetTransform_Request__get_type_description,
  &diff_amr_msgs__srv__GetTransform_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_diff_amr_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diff_amr_msgs, srv, GetTransform_Request)() {
  if (!diff_amr_msgs__srv__GetTransform_Request__rosidl_typesupport_introspection_c__GetTransform_Request_message_type_support_handle.typesupport_identifier) {
    diff_amr_msgs__srv__GetTransform_Request__rosidl_typesupport_introspection_c__GetTransform_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &diff_amr_msgs__srv__GetTransform_Request__rosidl_typesupport_introspection_c__GetTransform_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "diff_amr_msgs/srv/detail/get_transform__rosidl_typesupport_introspection_c.h"
// already included above
// #include "diff_amr_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "diff_amr_msgs/srv/detail/get_transform__functions.h"
// already included above
// #include "diff_amr_msgs/srv/detail/get_transform__struct.h"


// Include directives for member types
// Member `transform`
#include "geometry_msgs/msg/transform_stamped.h"
// Member `transform`
#include "geometry_msgs/msg/detail/transform_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void diff_amr_msgs__srv__GetTransform_Response__rosidl_typesupport_introspection_c__GetTransform_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  diff_amr_msgs__srv__GetTransform_Response__init(message_memory);
}

void diff_amr_msgs__srv__GetTransform_Response__rosidl_typesupport_introspection_c__GetTransform_Response_fini_function(void * message_memory)
{
  diff_amr_msgs__srv__GetTransform_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember diff_amr_msgs__srv__GetTransform_Response__rosidl_typesupport_introspection_c__GetTransform_Response_message_member_array[2] = {
  {
    "transform",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(diff_amr_msgs__srv__GetTransform_Response, transform),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(diff_amr_msgs__srv__GetTransform_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers diff_amr_msgs__srv__GetTransform_Response__rosidl_typesupport_introspection_c__GetTransform_Response_message_members = {
  "diff_amr_msgs__srv",  // message namespace
  "GetTransform_Response",  // message name
  2,  // number of fields
  sizeof(diff_amr_msgs__srv__GetTransform_Response),
  false,  // has_any_key_member_
  diff_amr_msgs__srv__GetTransform_Response__rosidl_typesupport_introspection_c__GetTransform_Response_message_member_array,  // message members
  diff_amr_msgs__srv__GetTransform_Response__rosidl_typesupport_introspection_c__GetTransform_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  diff_amr_msgs__srv__GetTransform_Response__rosidl_typesupport_introspection_c__GetTransform_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t diff_amr_msgs__srv__GetTransform_Response__rosidl_typesupport_introspection_c__GetTransform_Response_message_type_support_handle = {
  0,
  &diff_amr_msgs__srv__GetTransform_Response__rosidl_typesupport_introspection_c__GetTransform_Response_message_members,
  get_message_typesupport_handle_function,
  &diff_amr_msgs__srv__GetTransform_Response__get_type_hash,
  &diff_amr_msgs__srv__GetTransform_Response__get_type_description,
  &diff_amr_msgs__srv__GetTransform_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_diff_amr_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diff_amr_msgs, srv, GetTransform_Response)() {
  diff_amr_msgs__srv__GetTransform_Response__rosidl_typesupport_introspection_c__GetTransform_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, TransformStamped)();
  if (!diff_amr_msgs__srv__GetTransform_Response__rosidl_typesupport_introspection_c__GetTransform_Response_message_type_support_handle.typesupport_identifier) {
    diff_amr_msgs__srv__GetTransform_Response__rosidl_typesupport_introspection_c__GetTransform_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &diff_amr_msgs__srv__GetTransform_Response__rosidl_typesupport_introspection_c__GetTransform_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "diff_amr_msgs/srv/detail/get_transform__rosidl_typesupport_introspection_c.h"
// already included above
// #include "diff_amr_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "diff_amr_msgs/srv/detail/get_transform__functions.h"
// already included above
// #include "diff_amr_msgs/srv/detail/get_transform__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "diff_amr_msgs/srv/get_transform.h"
// Member `request`
// Member `response`
// already included above
// #include "diff_amr_msgs/srv/detail/get_transform__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void diff_amr_msgs__srv__GetTransform_Event__rosidl_typesupport_introspection_c__GetTransform_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  diff_amr_msgs__srv__GetTransform_Event__init(message_memory);
}

void diff_amr_msgs__srv__GetTransform_Event__rosidl_typesupport_introspection_c__GetTransform_Event_fini_function(void * message_memory)
{
  diff_amr_msgs__srv__GetTransform_Event__fini(message_memory);
}

size_t diff_amr_msgs__srv__GetTransform_Event__rosidl_typesupport_introspection_c__size_function__GetTransform_Event__request(
  const void * untyped_member)
{
  const diff_amr_msgs__srv__GetTransform_Request__Sequence * member =
    (const diff_amr_msgs__srv__GetTransform_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * diff_amr_msgs__srv__GetTransform_Event__rosidl_typesupport_introspection_c__get_const_function__GetTransform_Event__request(
  const void * untyped_member, size_t index)
{
  const diff_amr_msgs__srv__GetTransform_Request__Sequence * member =
    (const diff_amr_msgs__srv__GetTransform_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * diff_amr_msgs__srv__GetTransform_Event__rosidl_typesupport_introspection_c__get_function__GetTransform_Event__request(
  void * untyped_member, size_t index)
{
  diff_amr_msgs__srv__GetTransform_Request__Sequence * member =
    (diff_amr_msgs__srv__GetTransform_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void diff_amr_msgs__srv__GetTransform_Event__rosidl_typesupport_introspection_c__fetch_function__GetTransform_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const diff_amr_msgs__srv__GetTransform_Request * item =
    ((const diff_amr_msgs__srv__GetTransform_Request *)
    diff_amr_msgs__srv__GetTransform_Event__rosidl_typesupport_introspection_c__get_const_function__GetTransform_Event__request(untyped_member, index));
  diff_amr_msgs__srv__GetTransform_Request * value =
    (diff_amr_msgs__srv__GetTransform_Request *)(untyped_value);
  *value = *item;
}

void diff_amr_msgs__srv__GetTransform_Event__rosidl_typesupport_introspection_c__assign_function__GetTransform_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  diff_amr_msgs__srv__GetTransform_Request * item =
    ((diff_amr_msgs__srv__GetTransform_Request *)
    diff_amr_msgs__srv__GetTransform_Event__rosidl_typesupport_introspection_c__get_function__GetTransform_Event__request(untyped_member, index));
  const diff_amr_msgs__srv__GetTransform_Request * value =
    (const diff_amr_msgs__srv__GetTransform_Request *)(untyped_value);
  *item = *value;
}

bool diff_amr_msgs__srv__GetTransform_Event__rosidl_typesupport_introspection_c__resize_function__GetTransform_Event__request(
  void * untyped_member, size_t size)
{
  diff_amr_msgs__srv__GetTransform_Request__Sequence * member =
    (diff_amr_msgs__srv__GetTransform_Request__Sequence *)(untyped_member);
  diff_amr_msgs__srv__GetTransform_Request__Sequence__fini(member);
  return diff_amr_msgs__srv__GetTransform_Request__Sequence__init(member, size);
}

size_t diff_amr_msgs__srv__GetTransform_Event__rosidl_typesupport_introspection_c__size_function__GetTransform_Event__response(
  const void * untyped_member)
{
  const diff_amr_msgs__srv__GetTransform_Response__Sequence * member =
    (const diff_amr_msgs__srv__GetTransform_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * diff_amr_msgs__srv__GetTransform_Event__rosidl_typesupport_introspection_c__get_const_function__GetTransform_Event__response(
  const void * untyped_member, size_t index)
{
  const diff_amr_msgs__srv__GetTransform_Response__Sequence * member =
    (const diff_amr_msgs__srv__GetTransform_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * diff_amr_msgs__srv__GetTransform_Event__rosidl_typesupport_introspection_c__get_function__GetTransform_Event__response(
  void * untyped_member, size_t index)
{
  diff_amr_msgs__srv__GetTransform_Response__Sequence * member =
    (diff_amr_msgs__srv__GetTransform_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void diff_amr_msgs__srv__GetTransform_Event__rosidl_typesupport_introspection_c__fetch_function__GetTransform_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const diff_amr_msgs__srv__GetTransform_Response * item =
    ((const diff_amr_msgs__srv__GetTransform_Response *)
    diff_amr_msgs__srv__GetTransform_Event__rosidl_typesupport_introspection_c__get_const_function__GetTransform_Event__response(untyped_member, index));
  diff_amr_msgs__srv__GetTransform_Response * value =
    (diff_amr_msgs__srv__GetTransform_Response *)(untyped_value);
  *value = *item;
}

void diff_amr_msgs__srv__GetTransform_Event__rosidl_typesupport_introspection_c__assign_function__GetTransform_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  diff_amr_msgs__srv__GetTransform_Response * item =
    ((diff_amr_msgs__srv__GetTransform_Response *)
    diff_amr_msgs__srv__GetTransform_Event__rosidl_typesupport_introspection_c__get_function__GetTransform_Event__response(untyped_member, index));
  const diff_amr_msgs__srv__GetTransform_Response * value =
    (const diff_amr_msgs__srv__GetTransform_Response *)(untyped_value);
  *item = *value;
}

bool diff_amr_msgs__srv__GetTransform_Event__rosidl_typesupport_introspection_c__resize_function__GetTransform_Event__response(
  void * untyped_member, size_t size)
{
  diff_amr_msgs__srv__GetTransform_Response__Sequence * member =
    (diff_amr_msgs__srv__GetTransform_Response__Sequence *)(untyped_member);
  diff_amr_msgs__srv__GetTransform_Response__Sequence__fini(member);
  return diff_amr_msgs__srv__GetTransform_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember diff_amr_msgs__srv__GetTransform_Event__rosidl_typesupport_introspection_c__GetTransform_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(diff_amr_msgs__srv__GetTransform_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(diff_amr_msgs__srv__GetTransform_Event, request),  // bytes offset in struct
    NULL,  // default value
    diff_amr_msgs__srv__GetTransform_Event__rosidl_typesupport_introspection_c__size_function__GetTransform_Event__request,  // size() function pointer
    diff_amr_msgs__srv__GetTransform_Event__rosidl_typesupport_introspection_c__get_const_function__GetTransform_Event__request,  // get_const(index) function pointer
    diff_amr_msgs__srv__GetTransform_Event__rosidl_typesupport_introspection_c__get_function__GetTransform_Event__request,  // get(index) function pointer
    diff_amr_msgs__srv__GetTransform_Event__rosidl_typesupport_introspection_c__fetch_function__GetTransform_Event__request,  // fetch(index, &value) function pointer
    diff_amr_msgs__srv__GetTransform_Event__rosidl_typesupport_introspection_c__assign_function__GetTransform_Event__request,  // assign(index, value) function pointer
    diff_amr_msgs__srv__GetTransform_Event__rosidl_typesupport_introspection_c__resize_function__GetTransform_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(diff_amr_msgs__srv__GetTransform_Event, response),  // bytes offset in struct
    NULL,  // default value
    diff_amr_msgs__srv__GetTransform_Event__rosidl_typesupport_introspection_c__size_function__GetTransform_Event__response,  // size() function pointer
    diff_amr_msgs__srv__GetTransform_Event__rosidl_typesupport_introspection_c__get_const_function__GetTransform_Event__response,  // get_const(index) function pointer
    diff_amr_msgs__srv__GetTransform_Event__rosidl_typesupport_introspection_c__get_function__GetTransform_Event__response,  // get(index) function pointer
    diff_amr_msgs__srv__GetTransform_Event__rosidl_typesupport_introspection_c__fetch_function__GetTransform_Event__response,  // fetch(index, &value) function pointer
    diff_amr_msgs__srv__GetTransform_Event__rosidl_typesupport_introspection_c__assign_function__GetTransform_Event__response,  // assign(index, value) function pointer
    diff_amr_msgs__srv__GetTransform_Event__rosidl_typesupport_introspection_c__resize_function__GetTransform_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers diff_amr_msgs__srv__GetTransform_Event__rosidl_typesupport_introspection_c__GetTransform_Event_message_members = {
  "diff_amr_msgs__srv",  // message namespace
  "GetTransform_Event",  // message name
  3,  // number of fields
  sizeof(diff_amr_msgs__srv__GetTransform_Event),
  false,  // has_any_key_member_
  diff_amr_msgs__srv__GetTransform_Event__rosidl_typesupport_introspection_c__GetTransform_Event_message_member_array,  // message members
  diff_amr_msgs__srv__GetTransform_Event__rosidl_typesupport_introspection_c__GetTransform_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  diff_amr_msgs__srv__GetTransform_Event__rosidl_typesupport_introspection_c__GetTransform_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t diff_amr_msgs__srv__GetTransform_Event__rosidl_typesupport_introspection_c__GetTransform_Event_message_type_support_handle = {
  0,
  &diff_amr_msgs__srv__GetTransform_Event__rosidl_typesupport_introspection_c__GetTransform_Event_message_members,
  get_message_typesupport_handle_function,
  &diff_amr_msgs__srv__GetTransform_Event__get_type_hash,
  &diff_amr_msgs__srv__GetTransform_Event__get_type_description,
  &diff_amr_msgs__srv__GetTransform_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_diff_amr_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diff_amr_msgs, srv, GetTransform_Event)() {
  diff_amr_msgs__srv__GetTransform_Event__rosidl_typesupport_introspection_c__GetTransform_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  diff_amr_msgs__srv__GetTransform_Event__rosidl_typesupport_introspection_c__GetTransform_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diff_amr_msgs, srv, GetTransform_Request)();
  diff_amr_msgs__srv__GetTransform_Event__rosidl_typesupport_introspection_c__GetTransform_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diff_amr_msgs, srv, GetTransform_Response)();
  if (!diff_amr_msgs__srv__GetTransform_Event__rosidl_typesupport_introspection_c__GetTransform_Event_message_type_support_handle.typesupport_identifier) {
    diff_amr_msgs__srv__GetTransform_Event__rosidl_typesupport_introspection_c__GetTransform_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &diff_amr_msgs__srv__GetTransform_Event__rosidl_typesupport_introspection_c__GetTransform_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "diff_amr_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "diff_amr_msgs/srv/detail/get_transform__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers diff_amr_msgs__srv__detail__get_transform__rosidl_typesupport_introspection_c__GetTransform_service_members = {
  "diff_amr_msgs__srv",  // service namespace
  "GetTransform",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // diff_amr_msgs__srv__detail__get_transform__rosidl_typesupport_introspection_c__GetTransform_Request_message_type_support_handle,
  NULL,  // response message
  // diff_amr_msgs__srv__detail__get_transform__rosidl_typesupport_introspection_c__GetTransform_Response_message_type_support_handle
  NULL  // event_message
  // diff_amr_msgs__srv__detail__get_transform__rosidl_typesupport_introspection_c__GetTransform_Response_message_type_support_handle
};


static rosidl_service_type_support_t diff_amr_msgs__srv__detail__get_transform__rosidl_typesupport_introspection_c__GetTransform_service_type_support_handle = {
  0,
  &diff_amr_msgs__srv__detail__get_transform__rosidl_typesupport_introspection_c__GetTransform_service_members,
  get_service_typesupport_handle_function,
  &diff_amr_msgs__srv__GetTransform_Request__rosidl_typesupport_introspection_c__GetTransform_Request_message_type_support_handle,
  &diff_amr_msgs__srv__GetTransform_Response__rosidl_typesupport_introspection_c__GetTransform_Response_message_type_support_handle,
  &diff_amr_msgs__srv__GetTransform_Event__rosidl_typesupport_introspection_c__GetTransform_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    diff_amr_msgs,
    srv,
    GetTransform
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    diff_amr_msgs,
    srv,
    GetTransform
  ),
  &diff_amr_msgs__srv__GetTransform__get_type_hash,
  &diff_amr_msgs__srv__GetTransform__get_type_description,
  &diff_amr_msgs__srv__GetTransform__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diff_amr_msgs, srv, GetTransform_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diff_amr_msgs, srv, GetTransform_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diff_amr_msgs, srv, GetTransform_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_diff_amr_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diff_amr_msgs, srv, GetTransform)(void) {
  if (!diff_amr_msgs__srv__detail__get_transform__rosidl_typesupport_introspection_c__GetTransform_service_type_support_handle.typesupport_identifier) {
    diff_amr_msgs__srv__detail__get_transform__rosidl_typesupport_introspection_c__GetTransform_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)diff_amr_msgs__srv__detail__get_transform__rosidl_typesupport_introspection_c__GetTransform_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diff_amr_msgs, srv, GetTransform_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diff_amr_msgs, srv, GetTransform_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diff_amr_msgs, srv, GetTransform_Event)()->data;
  }

  return &diff_amr_msgs__srv__detail__get_transform__rosidl_typesupport_introspection_c__GetTransform_service_type_support_handle;
}
