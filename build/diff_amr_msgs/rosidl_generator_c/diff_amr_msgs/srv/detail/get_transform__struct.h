// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from diff_amr_msgs:srv/GetTransform.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "diff_amr_msgs/srv/get_transform.h"


#ifndef DIFF_AMR_MSGS__SRV__DETAIL__GET_TRANSFORM__STRUCT_H_
#define DIFF_AMR_MSGS__SRV__DETAIL__GET_TRANSFORM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'frame_id'
// Member 'child_frame_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetTransform in the package diff_amr_msgs.
typedef struct diff_amr_msgs__srv__GetTransform_Request
{
  rosidl_runtime_c__String frame_id;
  rosidl_runtime_c__String child_frame_id;
} diff_amr_msgs__srv__GetTransform_Request;

// Struct for a sequence of diff_amr_msgs__srv__GetTransform_Request.
typedef struct diff_amr_msgs__srv__GetTransform_Request__Sequence
{
  diff_amr_msgs__srv__GetTransform_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} diff_amr_msgs__srv__GetTransform_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'transform'
#include "geometry_msgs/msg/detail/transform_stamped__struct.h"

/// Struct defined in srv/GetTransform in the package diff_amr_msgs.
typedef struct diff_amr_msgs__srv__GetTransform_Response
{
  geometry_msgs__msg__TransformStamped transform;
  bool success;
} diff_amr_msgs__srv__GetTransform_Response;

// Struct for a sequence of diff_amr_msgs__srv__GetTransform_Response.
typedef struct diff_amr_msgs__srv__GetTransform_Response__Sequence
{
  diff_amr_msgs__srv__GetTransform_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} diff_amr_msgs__srv__GetTransform_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  diff_amr_msgs__srv__GetTransform_Event__request__MAX_SIZE = 1
};
// response
enum
{
  diff_amr_msgs__srv__GetTransform_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetTransform in the package diff_amr_msgs.
typedef struct diff_amr_msgs__srv__GetTransform_Event
{
  service_msgs__msg__ServiceEventInfo info;
  diff_amr_msgs__srv__GetTransform_Request__Sequence request;
  diff_amr_msgs__srv__GetTransform_Response__Sequence response;
} diff_amr_msgs__srv__GetTransform_Event;

// Struct for a sequence of diff_amr_msgs__srv__GetTransform_Event.
typedef struct diff_amr_msgs__srv__GetTransform_Event__Sequence
{
  diff_amr_msgs__srv__GetTransform_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} diff_amr_msgs__srv__GetTransform_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DIFF_AMR_MSGS__SRV__DETAIL__GET_TRANSFORM__STRUCT_H_
