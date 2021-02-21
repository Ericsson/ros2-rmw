// Copyright 2020 Ericsson AB
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef RMW__NETWORK_FLOW_ARRAY_H_
#define RMW__NETWORK_FLOW_ARRAY_H_

#if __cplusplus
extern "C"
{
#endif

#include "rcutils/allocator.h"
#include "rcutils/types/string_map.h"

#include "rmw/types.h"
#include "rmw/visibility_control.h"

/// Structure to hold an arrary of network flows
typedef struct RMW_PUBLIC_TYPE rmw_network_flow_array_t
{
  /// Size of the array
  size_t size;
  /// Array
  rcutils_string_map_t * network_flow;
} rmw_network_flow_array_t;

/// Return a rmw_network_flow_array_t instance with zero-initialized members
RMW_PUBLIC
rmw_network_flow_array_t
rmw_get_zero_initialized_network_flow_array(void);

/// Check if network_flow_array instance is zero-initialized
/**
 * \param[in] network_flow_array arrary to be checked
 * \returns `RMW_RET_OK` if array is zero-initialized, or
 * \returns `RMW_RET_INVALID_ARGUMENT` if `network_flow_array` is NULL, or
 * \returns `RMW_RET_ERROR` if `network_flow_array` is not zero-initialized.
 * \remark RMW error state is set on failure
 */
RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_network_flow_array_check_zero(
  rmw_network_flow_array_t * network_flow_array);

/// Allocate a rmw_network_flow_array_t instance
/**
 * \param[inout] network_flow_array array to be allocated
 * \param[in] size size of the array to be allocated
 * \param[in] allocator the allcator for allocating memory
 * \returns `RMW_RET_OK` on successfull initilization, or
 * \returns `RMW_RET_INVALID_ARGUMENT` if `network_flow_array` or `allocator` is NULL, or
 * \returns `RMW_RET_BAD_ALLOC` if memory allocation fails, or
 * \returns `RMW_RET_ERROR` when an unspecified error occurs.
 * \remark RMW error state is set on failure
 */
RMW_PUBLIC
rmw_ret_t
rmw_network_flow_array_init(
  rmw_network_flow_array_t * network_flow_array,
  size_t size,
  rcutils_allocator_t * allocator);

/// Deallocate a rmw_network_flow_array_t instance
/**
 * \param[inout] network_flow_array array to be deallocated
 * \param[in] allocator the allcator for allocating memory
 * \returns `RMW_RET_OK` on successfully deallocation, or
 * \returns `RMW_RET_INVALID_ARGUMENT` if any argument is NULL, or
 * \returns `RMW_RET_ERROR` when an unspecified error occurs.
 * \remark RMW error state is set on failure
 */
RMW_PUBLIC
rmw_ret_t
rmw_network_flow_array_fini(
  rmw_network_flow_array_t * network_flow_array,
  rcutils_allocator_t * allocator);

#if __cplusplus
}
#endif

#endif  // RMW__NETWORK_FLOW_ARRAY_H_
