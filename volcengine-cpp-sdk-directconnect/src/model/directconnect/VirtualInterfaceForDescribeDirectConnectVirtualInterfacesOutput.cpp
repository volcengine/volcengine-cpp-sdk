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
#include "volcengine/directconnect/model/VirtualInterfaceForDescribeDirectConnectVirtualInterfacesOutput.h"

using namespace volcengine;
using namespace volcengine::directconnect;
using namespace nlohmann;

void VirtualInterfaceForDescribeDirectConnectVirtualInterfacesOutput::fromJsonString(const std::string &input) {
    auto j = json::parse(input);
    if (j.contains("AccountId")) j.at("AccountId").get_to(v_accountId);
    if (j.contains("Bandwidth")) j.at("Bandwidth").get_to(v_bandwidth);
    if (j.contains("BfdDetectInterval")) j.at("BfdDetectInterval").get_to(v_bfdDetectInterval);
    if (j.contains("BfdDetectMultiplier")) j.at("BfdDetectMultiplier").get_to(v_bfdDetectMultiplier);
    if (j.contains("CreationTime")) j.at("CreationTime").get_to(v_creationTime);
    if (j.contains("Description")) j.at("Description").get_to(v_description);
    if (j.contains("DirectConnectConnectionId")) j.at("DirectConnectConnectionId").get_to(v_directConnectConnectionId);
    if (j.contains("DirectConnectGatewayId")) j.at("DirectConnectGatewayId").get_to(v_directConnectGatewayId);
    if (j.contains("EnableBfd")) j.at("EnableBfd").get_to(v_enableBfd);
    if (j.contains("EnableNqa")) j.at("EnableNqa").get_to(v_enableNqa);
    if (j.contains("LocalIp")) j.at("LocalIp").get_to(v_localIp);
    if (j.contains("NqaDetectInterval")) j.at("NqaDetectInterval").get_to(v_nqaDetectInterval);
    if (j.contains("NqaDetectMultiplier")) j.at("NqaDetectMultiplier").get_to(v_nqaDetectMultiplier);
    if (j.contains("PeerIp")) j.at("PeerIp").get_to(v_peerIp);
    if (j.contains("RouteType")) j.at("RouteType").get_to(v_routeType);
    if (j.contains("Status")) j.at("Status").get_to(v_status);
    if (j.contains("Tags")){
        json tagsPres = j.at("Tags");
        for (auto & pre : tagsPres) {
           TagForDescribeDirectConnectVirtualInterfacesOutput next;
           next.fromJsonString(to_string(pre));
           v_tags.emplace_back(next);
        }
    }
    if (j.contains("UpdateTime")) j.at("UpdateTime").get_to(v_updateTime);
    if (j.contains("VirtualInterfaceId")) j.at("VirtualInterfaceId").get_to(v_virtualInterfaceId);
    if (j.contains("VirtualInterfaceName")) j.at("VirtualInterfaceName").get_to(v_virtualInterfaceName);
    if (j.contains("VlanId")) j.at("VlanId").get_to(v_vlanId);
}