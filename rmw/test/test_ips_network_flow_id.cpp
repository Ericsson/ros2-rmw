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

#include "gmock/gmock.h"
#include "osrf_testing_tools_cpp/scope_exit.hpp"
#include "rcutils/allocator.h"

#include "rmw/error_handling.h"
#include "rmw/ips_network_flow_id.h"

// Test to check if the size of the enumeration rmw_ips_network_flow_id_t and
// its string counterpart array rmw_ips_flow_id_str have the same size
TEST(test_ips_network_flow_id, check_size_consistency) {
  EXPECT_EQ(
    sizeof(rmw_ips_network_flow_id_str) / sizeof(rmw_ips_network_flow_id_str[0]),
    NUM_RMW_IPS_NETWORK_FLOW_ID);
}
