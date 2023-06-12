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
#include "volcengine/natgateway/model/SnatEntryForDescribeSnatEntriesOutput.h"

using namespace volcengine;
using namespace volcengine::natgateway;
using namespace nlohmann;

void SnatEntryForDescribeSnatEntriesOutput::fromJsonString(const std::string &input) {
    auto j = json::parse(input);
    if (j.contains("EipAddress")) j.at("EipAddress").get_to(v_eipAddress);
    if (j.contains("EipId")) j.at("EipId").get_to(v_eipId);
    if (j.contains("NatGatewayId")) j.at("NatGatewayId").get_to(v_natGatewayId);
    if (j.contains("SnatEntryId")) j.at("SnatEntryId").get_to(v_snatEntryId);
    if (j.contains("SnatEntryName")) j.at("SnatEntryName").get_to(v_snatEntryName);
    if (j.contains("SourceCidr")) j.at("SourceCidr").get_to(v_sourceCidr);
    if (j.contains("Status")) j.at("Status").get_to(v_status);
    if (j.contains("SubnetId")) j.at("SubnetId").get_to(v_subnetId);
}