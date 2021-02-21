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

#ifndef RMW__GET_NETWORK_FLOW_H_
#define RMW__GET_NETWORK_FLOW_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include "rmw/network_flow.h"
#include "rmw/types.h"
#include "rmw/visibility_control.h"

/// Get network flows of a publisher
/**
 * Query the underlying middleware for a given publisher's network flows
 *
 * \param[in] publisher the publisher instance to inspect
 * \param[in] allocator allocator to be used when allocating space for network_flow_array_t
 * \param[out] network_flow_array the network flows
 * \return `RMW_RET_OK` if successful, or
 * \return `RMW_RET_INVALID_ARGUMENT` if any argument is null,
 * \return `RMW_RET_BAD_ALLOC` if memory allocation fails, or
 * \return `RMW_RET_UNSUPPORTED` if not supported, or
 * \return `RMW_RET_ERROR` if an unexpected error occurs.
 */
RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_publisher_get_network_flow(
  const rmw_publisher_t * publisher,
  rcutils_allocator_t * allocator,
  rmw_network_flow_array_t * network_flow_array);

/// Get network flows of a subscription
/**
 * Query the underlying middleware for a given subscription's network flows
 *
 * \param[in] subscription the subscription instance to inspect
 * \param[in] allocator allocator to be used when allocating space for network_flow_array_t
 * \param[out] network_flow_array the network flows
 * \return `RMW_RET_OK` if successful, or
 * \return `RMW_RET_INVALID_ARGUMENT` if any argument is null, or
 * \return `RMW_RET_BAD_ALLOC` if memory allocation fails, or
 * \return `RMW_RET_UNSUPPORTED` if not supported, or
 * \return `RMW_RET_ERROR` if an unexpected error occurs.
 */
RMW_PUBLIC
RMW_WARN_UNUSED
rmw_ret_t
rmw_subscription_get_network_flow(
  const rmw_subscription_t * subscription,
  rcutils_allocator_t * allocator,
  rmw_network_flow_array_t * network_flow_array);

#ifdef __cplusplus
}
#endif

#endif  // RMW__GET_NETWORK_FLOW_H_
