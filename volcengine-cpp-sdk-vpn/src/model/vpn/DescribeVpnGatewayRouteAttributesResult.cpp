/*
* Code generated by Beijing Volcanoengine Technology.Do NOT EDIT.
* Copyright Beijing Volcanoengine Technology Ltd All rights reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/
#include "volcengine/vpn/model/DescribeVpnGatewayRouteAttributesResult.h"

using namespace volcengine;
using namespace volcengine::vpn;
using namespace nlohmann;

void DescribeVpnGatewayRouteAttributesResult::fromJsonString(const std::string &input) {
    auto j = json::parse(input);
    j = j.at("Result");
    if (j.contains("CreationTime")) j.at("CreationTime").get_to(v_creationTime);
    if (j.contains("DestinationCidrBlock")) j.at("DestinationCidrBlock").get_to(v_destinationCidrBlock);
    if (j.contains("NextHopId")) j.at("NextHopId").get_to(v_nextHopId);
    if (j.contains("RequestId")) j.at("RequestId").get_to(v_requestId);
    if (j.contains("Status")) j.at("Status").get_to(v_status);
    if (j.contains("UpdateTime")) j.at("UpdateTime").get_to(v_updateTime);
    if (j.contains("VpnGatewayId")) j.at("VpnGatewayId").get_to(v_vpnGatewayId);
    if (j.contains("VpnGatewayRouteId")) j.at("VpnGatewayRouteId").get_to(v_vpnGatewayRouteId);
}
