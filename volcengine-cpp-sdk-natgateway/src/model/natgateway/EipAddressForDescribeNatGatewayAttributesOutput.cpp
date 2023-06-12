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
#include "volcengine/natgateway/model/EipAddressForDescribeNatGatewayAttributesOutput.h"

using namespace volcengine;
using namespace volcengine::natgateway;
using namespace nlohmann;

void EipAddressForDescribeNatGatewayAttributesOutput::fromJsonString(const std::string &input) {
    auto j = json::parse(input);
    if (j.contains("AllocationId")) j.at("AllocationId").get_to(v_allocationId);
    if (j.contains("EipAddress")) j.at("EipAddress").get_to(v_eipAddress);
    if (j.contains("UsingStatus")) j.at("UsingStatus").get_to(v_usingStatus);
}
