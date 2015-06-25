// Copyright 2014 Open Source Robotics Foundation, Inc.
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

#ifndef RMW_RMW_IMPL_CONFIG_H_
#define RMW_RMW_IMPL_CONFIG_H_

#ifndef RMW_AVOID_MEMORY_ALLOCATION
// Default to off.
// TODO(wjwwood): document these configuration flags.
#define RMW_AVOID_MEMORY_ALLOCATION 0
#endif

#ifndef RMW_REPORT_ERROR_HANDLING_ERRORS
// Default reporting of error handling errors based on real-time settings.
// Turn this off to avoid allocation of memory in error handling funcs.
#define RMW_REPORT_ERROR_HANDLING_ERRORS 1
#endif

#endif  /* RMW_RMW_IMPL_CONFIG_H_ */
