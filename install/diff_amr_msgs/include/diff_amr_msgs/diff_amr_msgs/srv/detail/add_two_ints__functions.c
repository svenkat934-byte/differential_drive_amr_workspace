// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from diff_amr_msgs:srv/AddTwoInts.idl
// generated code does not contain a copyright notice
#include "diff_amr_msgs/srv/detail/add_two_ints__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
diff_amr_msgs__srv__AddTwoInts_Request__init(diff_amr_msgs__srv__AddTwoInts_Request * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  return true;
}

void
diff_amr_msgs__srv__AddTwoInts_Request__fini(diff_amr_msgs__srv__AddTwoInts_Request * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
}

bool
diff_amr_msgs__srv__AddTwoInts_Request__are_equal(const diff_amr_msgs__srv__AddTwoInts_Request * lhs, const diff_amr_msgs__srv__AddTwoInts_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // a
  if (lhs->a != rhs->a) {
    return false;
  }
  // b
  if (lhs->b != rhs->b) {
    return false;
  }
  return true;
}

bool
diff_amr_msgs__srv__AddTwoInts_Request__copy(
  const diff_amr_msgs__srv__AddTwoInts_Request * input,
  diff_amr_msgs__srv__AddTwoInts_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // a
  output->a = input->a;
  // b
  output->b = input->b;
  return true;
}

diff_amr_msgs__srv__AddTwoInts_Request *
diff_amr_msgs__srv__AddTwoInts_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  diff_amr_msgs__srv__AddTwoInts_Request * msg = (diff_amr_msgs__srv__AddTwoInts_Request *)allocator.allocate(sizeof(diff_amr_msgs__srv__AddTwoInts_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(diff_amr_msgs__srv__AddTwoInts_Request));
  bool success = diff_amr_msgs__srv__AddTwoInts_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
diff_amr_msgs__srv__AddTwoInts_Request__destroy(diff_amr_msgs__srv__AddTwoInts_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    diff_amr_msgs__srv__AddTwoInts_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
diff_amr_msgs__srv__AddTwoInts_Request__Sequence__init(diff_amr_msgs__srv__AddTwoInts_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  diff_amr_msgs__srv__AddTwoInts_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(diff_amr_msgs__srv__AddTwoInts_Request)) {
      return false;
    }
    data = (diff_amr_msgs__srv__AddTwoInts_Request *)allocator.zero_allocate(size, sizeof(diff_amr_msgs__srv__AddTwoInts_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = diff_amr_msgs__srv__AddTwoInts_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        diff_amr_msgs__srv__AddTwoInts_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
diff_amr_msgs__srv__AddTwoInts_Request__Sequence__fini(diff_amr_msgs__srv__AddTwoInts_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      diff_amr_msgs__srv__AddTwoInts_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

diff_amr_msgs__srv__AddTwoInts_Request__Sequence *
diff_amr_msgs__srv__AddTwoInts_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  diff_amr_msgs__srv__AddTwoInts_Request__Sequence * array = (diff_amr_msgs__srv__AddTwoInts_Request__Sequence *)allocator.allocate(sizeof(diff_amr_msgs__srv__AddTwoInts_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = diff_amr_msgs__srv__AddTwoInts_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
diff_amr_msgs__srv__AddTwoInts_Request__Sequence__destroy(diff_amr_msgs__srv__AddTwoInts_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    diff_amr_msgs__srv__AddTwoInts_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
diff_amr_msgs__srv__AddTwoInts_Request__Sequence__are_equal(const diff_amr_msgs__srv__AddTwoInts_Request__Sequence * lhs, const diff_amr_msgs__srv__AddTwoInts_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!diff_amr_msgs__srv__AddTwoInts_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
diff_amr_msgs__srv__AddTwoInts_Request__Sequence__copy(
  const diff_amr_msgs__srv__AddTwoInts_Request__Sequence * input,
  diff_amr_msgs__srv__AddTwoInts_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(diff_amr_msgs__srv__AddTwoInts_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(diff_amr_msgs__srv__AddTwoInts_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    diff_amr_msgs__srv__AddTwoInts_Request * data =
      (diff_amr_msgs__srv__AddTwoInts_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!diff_amr_msgs__srv__AddTwoInts_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          diff_amr_msgs__srv__AddTwoInts_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!diff_amr_msgs__srv__AddTwoInts_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
diff_amr_msgs__srv__AddTwoInts_Response__init(diff_amr_msgs__srv__AddTwoInts_Response * msg)
{
  if (!msg) {
    return false;
  }
  // sum
  return true;
}

void
diff_amr_msgs__srv__AddTwoInts_Response__fini(diff_amr_msgs__srv__AddTwoInts_Response * msg)
{
  if (!msg) {
    return;
  }
  // sum
}

bool
diff_amr_msgs__srv__AddTwoInts_Response__are_equal(const diff_amr_msgs__srv__AddTwoInts_Response * lhs, const diff_amr_msgs__srv__AddTwoInts_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sum
  if (lhs->sum != rhs->sum) {
    return false;
  }
  return true;
}

bool
diff_amr_msgs__srv__AddTwoInts_Response__copy(
  const diff_amr_msgs__srv__AddTwoInts_Response * input,
  diff_amr_msgs__srv__AddTwoInts_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // sum
  output->sum = input->sum;
  return true;
}

diff_amr_msgs__srv__AddTwoInts_Response *
diff_amr_msgs__srv__AddTwoInts_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  diff_amr_msgs__srv__AddTwoInts_Response * msg = (diff_amr_msgs__srv__AddTwoInts_Response *)allocator.allocate(sizeof(diff_amr_msgs__srv__AddTwoInts_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(diff_amr_msgs__srv__AddTwoInts_Response));
  bool success = diff_amr_msgs__srv__AddTwoInts_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
diff_amr_msgs__srv__AddTwoInts_Response__destroy(diff_amr_msgs__srv__AddTwoInts_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    diff_amr_msgs__srv__AddTwoInts_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
diff_amr_msgs__srv__AddTwoInts_Response__Sequence__init(diff_amr_msgs__srv__AddTwoInts_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  diff_amr_msgs__srv__AddTwoInts_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(diff_amr_msgs__srv__AddTwoInts_Response)) {
      return false;
    }
    data = (diff_amr_msgs__srv__AddTwoInts_Response *)allocator.zero_allocate(size, sizeof(diff_amr_msgs__srv__AddTwoInts_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = diff_amr_msgs__srv__AddTwoInts_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        diff_amr_msgs__srv__AddTwoInts_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
diff_amr_msgs__srv__AddTwoInts_Response__Sequence__fini(diff_amr_msgs__srv__AddTwoInts_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      diff_amr_msgs__srv__AddTwoInts_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

diff_amr_msgs__srv__AddTwoInts_Response__Sequence *
diff_amr_msgs__srv__AddTwoInts_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  diff_amr_msgs__srv__AddTwoInts_Response__Sequence * array = (diff_amr_msgs__srv__AddTwoInts_Response__Sequence *)allocator.allocate(sizeof(diff_amr_msgs__srv__AddTwoInts_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = diff_amr_msgs__srv__AddTwoInts_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
diff_amr_msgs__srv__AddTwoInts_Response__Sequence__destroy(diff_amr_msgs__srv__AddTwoInts_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    diff_amr_msgs__srv__AddTwoInts_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
diff_amr_msgs__srv__AddTwoInts_Response__Sequence__are_equal(const diff_amr_msgs__srv__AddTwoInts_Response__Sequence * lhs, const diff_amr_msgs__srv__AddTwoInts_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!diff_amr_msgs__srv__AddTwoInts_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
diff_amr_msgs__srv__AddTwoInts_Response__Sequence__copy(
  const diff_amr_msgs__srv__AddTwoInts_Response__Sequence * input,
  diff_amr_msgs__srv__AddTwoInts_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(diff_amr_msgs__srv__AddTwoInts_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(diff_amr_msgs__srv__AddTwoInts_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    diff_amr_msgs__srv__AddTwoInts_Response * data =
      (diff_amr_msgs__srv__AddTwoInts_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!diff_amr_msgs__srv__AddTwoInts_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          diff_amr_msgs__srv__AddTwoInts_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!diff_amr_msgs__srv__AddTwoInts_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "diff_amr_msgs/srv/detail/add_two_ints__functions.h"

bool
diff_amr_msgs__srv__AddTwoInts_Event__init(diff_amr_msgs__srv__AddTwoInts_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    diff_amr_msgs__srv__AddTwoInts_Event__fini(msg);
    return false;
  }
  // request
  if (!diff_amr_msgs__srv__AddTwoInts_Request__Sequence__init(&msg->request, 0)) {
    diff_amr_msgs__srv__AddTwoInts_Event__fini(msg);
    return false;
  }
  // response
  if (!diff_amr_msgs__srv__AddTwoInts_Response__Sequence__init(&msg->response, 0)) {
    diff_amr_msgs__srv__AddTwoInts_Event__fini(msg);
    return false;
  }
  return true;
}

void
diff_amr_msgs__srv__AddTwoInts_Event__fini(diff_amr_msgs__srv__AddTwoInts_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  diff_amr_msgs__srv__AddTwoInts_Request__Sequence__fini(&msg->request);
  // response
  diff_amr_msgs__srv__AddTwoInts_Response__Sequence__fini(&msg->response);
}

bool
diff_amr_msgs__srv__AddTwoInts_Event__are_equal(const diff_amr_msgs__srv__AddTwoInts_Event * lhs, const diff_amr_msgs__srv__AddTwoInts_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!diff_amr_msgs__srv__AddTwoInts_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!diff_amr_msgs__srv__AddTwoInts_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
diff_amr_msgs__srv__AddTwoInts_Event__copy(
  const diff_amr_msgs__srv__AddTwoInts_Event * input,
  diff_amr_msgs__srv__AddTwoInts_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!diff_amr_msgs__srv__AddTwoInts_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!diff_amr_msgs__srv__AddTwoInts_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

diff_amr_msgs__srv__AddTwoInts_Event *
diff_amr_msgs__srv__AddTwoInts_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  diff_amr_msgs__srv__AddTwoInts_Event * msg = (diff_amr_msgs__srv__AddTwoInts_Event *)allocator.allocate(sizeof(diff_amr_msgs__srv__AddTwoInts_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(diff_amr_msgs__srv__AddTwoInts_Event));
  bool success = diff_amr_msgs__srv__AddTwoInts_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
diff_amr_msgs__srv__AddTwoInts_Event__destroy(diff_amr_msgs__srv__AddTwoInts_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    diff_amr_msgs__srv__AddTwoInts_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
diff_amr_msgs__srv__AddTwoInts_Event__Sequence__init(diff_amr_msgs__srv__AddTwoInts_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  diff_amr_msgs__srv__AddTwoInts_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(diff_amr_msgs__srv__AddTwoInts_Event)) {
      return false;
    }
    data = (diff_amr_msgs__srv__AddTwoInts_Event *)allocator.zero_allocate(size, sizeof(diff_amr_msgs__srv__AddTwoInts_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = diff_amr_msgs__srv__AddTwoInts_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        diff_amr_msgs__srv__AddTwoInts_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
diff_amr_msgs__srv__AddTwoInts_Event__Sequence__fini(diff_amr_msgs__srv__AddTwoInts_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      diff_amr_msgs__srv__AddTwoInts_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

diff_amr_msgs__srv__AddTwoInts_Event__Sequence *
diff_amr_msgs__srv__AddTwoInts_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  diff_amr_msgs__srv__AddTwoInts_Event__Sequence * array = (diff_amr_msgs__srv__AddTwoInts_Event__Sequence *)allocator.allocate(sizeof(diff_amr_msgs__srv__AddTwoInts_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = diff_amr_msgs__srv__AddTwoInts_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
diff_amr_msgs__srv__AddTwoInts_Event__Sequence__destroy(diff_amr_msgs__srv__AddTwoInts_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    diff_amr_msgs__srv__AddTwoInts_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
diff_amr_msgs__srv__AddTwoInts_Event__Sequence__are_equal(const diff_amr_msgs__srv__AddTwoInts_Event__Sequence * lhs, const diff_amr_msgs__srv__AddTwoInts_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!diff_amr_msgs__srv__AddTwoInts_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
diff_amr_msgs__srv__AddTwoInts_Event__Sequence__copy(
  const diff_amr_msgs__srv__AddTwoInts_Event__Sequence * input,
  diff_amr_msgs__srv__AddTwoInts_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(diff_amr_msgs__srv__AddTwoInts_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(diff_amr_msgs__srv__AddTwoInts_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    diff_amr_msgs__srv__AddTwoInts_Event * data =
      (diff_amr_msgs__srv__AddTwoInts_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!diff_amr_msgs__srv__AddTwoInts_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          diff_amr_msgs__srv__AddTwoInts_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!diff_amr_msgs__srv__AddTwoInts_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
