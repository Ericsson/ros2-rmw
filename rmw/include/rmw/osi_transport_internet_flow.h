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

#ifndef RMW__OSI_TRANSPORT_INTERNET_FLOW_H_
#define RMW__OSI_TRANSPORT_INTERNET_FLOW_H_

#if __cplusplus
extern "C"
{
#endif

// An enumeration of flow identifiers associated with transport and internet
// layers of the OSI network model.  This enables RMWs based on transport and
// internet protocols to uniformly desribe their network flows in string-based
// maps.
enum osi_transport_internet_flow_id
{
  TRANSPORT_PROTOCOL = 0,
  UDP_TRANSPORT_PROTOCOL,
  TCP_TRANSPORT_PROTOCOL,
  PUBLISHER_TRANSPORT_PROTOCOL,
  SUBSCRIPTION_TRANSPORT_PROTOCOL,
  TRANSPORT_PORT,
  PUBLISHER_TRANSPORT_PORT,
  SUBSCRIPTION_TRANSPORT_PORT,
  INTERNET_PROTOCOL,
  IPV4_INTERNET_PROTOCOL,
  IPV6_INTERNET_PROTOCOL,
  PUBLISHER_INTERNET_PROTOCOL,
  SUBSCRIPTION_INTERNET_PROTOCOL,
  INTERNET_ADDRESS,
  PUBLISHER_INTERNET_ADDRESS,
  SUBSCRIPTION_INTERNET_ADDRESS,
  FLOW_LABEL,
  OSI_TRANSPORT_INTERNET_FLOW_NUM_ID
};

// String counterparts of the enumeration of flow identifiers associated with
// transport and internet layers of the OSI network model.  Access the required
// string using enumeration as index i.e.,
// osi_transport_internet_flow_id_str[INTERNET_ADDRESS]
const char * osi_transport_internet_flow_id_str[OSI_TRANSPORT_INTERNET_FLOW_NUM_ID] = {
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

#endif  // RMW__OSI_TRANSPORT_INTERNET_FLOW_H_
