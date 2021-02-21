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

#ifndef RMW__IPS_FLOW_ID_H_
#define RMW__IPS_FLOW_ID_H_

#if __cplusplus
extern "C"
{
#endif

// An enumeration of flow identifiers associated with the internet protocol
// suite (IPS). This enables RMWs based on IPS to uniformly desribe their
// network flows in string-based maps.
typedef enum rmw_ips_flow_id_t
{
  RMW_IPS_TRANSPORT_PROTOCOL = 0,
  RMW_IPS_UDP_TRANSPORT_PROTOCOL,
  RMW_IPS_TCP_TRANSPORT_PROTOCOL,
  RMW_IPS_PUBLISHER_TRANSPORT_PROTOCOL,
  RMW_IPS_SUBSCRIPTION_TRANSPORT_PROTOCOL,
  RMW_IPS_TRANSPORT_PORT,
  RMW_IPS_PUBLISHER_TRANSPORT_PORT,
  RMW_IPS_SUBSCRIPTION_TRANSPORT_PORT,
  RMW_IPS_INTERNET_PROTOCOL,
  RMW_IPS_IPV4_INTERNET_PROTOCOL,
  RMW_IPS_IPV6_INTERNET_PROTOCOL,
  RMW_IPS_PUBLISHER_INTERNET_PROTOCOL,
  RMW_IPS_SUBSCRIPTION_INTERNET_PROTOCOL,
  RMW_IPS_INTERNET_ADDRESS,
  RMW_IPS_PUBLISHER_INTERNET_ADDRESS,
  RMW_IPS_SUBSCRIPTION_INTERNET_ADDRESS,
  RMW_IPS_FLOW_LABEL,
  NUM_RMW_IPS_FLOW_ID
} rmw_ips_flow_id_t;

// String counterparts of the enumeration of flow identifiers associated with
// the internet protocol suite.  Access the required string using enumeration
// as index i.e., rmw_ips_flow_id_str[INTERNET_ADDRESS]
const char * rmw_ips_flow_id_str[] = {
  "TRANSPORT_PROTOCOL",
  "UDP_TRANSPORT_PROTOCOL",
  "TCP_TRANSPORT_PROTOCOL",
  "PUBLISHER_TRANSPORT_PROTOCOL",
  "SUBSCRIPTION_TRANSPORT_PROTOCOL",
  "TRANSPORT_PORT",
  "PUBLISHER_TRANSPORT_PORT",
  "SUBSCRIPTION_TRANSPORT_PORT",
  "INTERNET_PROTOCOL",
  "IPV4_INTERNET_PROTOCOL",
  "IPV6_INTERNET_PROTOCOL",
  "PUBLISHER_INTERNET_PROTOCOL",
  "SUBSCRIPTION_INTERNET_PROTOCOL",
  "INTERNET_ADDRESS",
  "PUBLISHER_INTERNET_ADDRESS",
  "SUBSCRIPTION_INTERNET_ADDRESS",
  "FLOW_LABEL"
};

#if __cplusplus
}
#endif

#endif  // RMW__IPS_FLOW_ID_H_
