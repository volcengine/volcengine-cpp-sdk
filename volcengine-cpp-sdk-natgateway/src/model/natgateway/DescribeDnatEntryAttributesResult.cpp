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
#include "volcengine/natgateway/model/DescribeDnatEntryAttributesResult.h"

using namespace volcengine;
using namespace volcengine::natgateway;
using namespace nlohmann;

void DescribeDnatEntryAttributesResult::fromJsonString(const std::string &input) {
    auto j = json::parse(input);
    j = j.at("Result");
    if (j.contains("DnatEntryId")) j.at("DnatEntryId").get_to(v_dnatEntryId);
    if (j.contains("DnatEntryName")) j.at("DnatEntryName").get_to(v_dnatEntryName);
    if (j.contains("ExternalIp")) j.at("ExternalIp").get_to(v_externalIp);
    if (j.contains("ExternalPort")) j.at("ExternalPort").get_to(v_externalPort);
    if (j.contains("InternalIp")) j.at("InternalIp").get_to(v_internalIp);
    if (j.contains("InternalPort")) j.at("InternalPort").get_to(v_internalPort);
    if (j.contains("NatGatewayId")) j.at("NatGatewayId").get_to(v_natGatewayId);
    if (j.contains("Protocol")) j.at("Protocol").get_to(v_protocol);
    if (j.contains("RequestId")) j.at("RequestId").get_to(v_requestId);
    if (j.contains("Status")) j.at("Status").get_to(v_status);
}
