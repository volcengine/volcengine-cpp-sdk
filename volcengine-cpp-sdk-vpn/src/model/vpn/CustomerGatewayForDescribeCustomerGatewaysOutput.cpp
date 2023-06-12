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
#include "volcengine/vpn/model/CustomerGatewayForDescribeCustomerGatewaysOutput.h"

using namespace volcengine;
using namespace volcengine::vpn;
using namespace nlohmann;

void CustomerGatewayForDescribeCustomerGatewaysOutput::fromJsonString(const std::string &input) {
    auto j = json::parse(input);
    if (j.contains("AccountId")) j.at("AccountId").get_to(v_accountId);
    if (j.contains("ConnectionCount")) j.at("ConnectionCount").get_to(v_connectionCount);
    if (j.contains("CreationTime")) j.at("CreationTime").get_to(v_creationTime);
    if (j.contains("CustomerGatewayId")) j.at("CustomerGatewayId").get_to(v_customerGatewayId);
    if (j.contains("CustomerGatewayName")) j.at("CustomerGatewayName").get_to(v_customerGatewayName);
    if (j.contains("Description")) j.at("Description").get_to(v_description);
    if (j.contains("IpAddress")) j.at("IpAddress").get_to(v_ipAddress);
    if (j.contains("ProjectName")) j.at("ProjectName").get_to(v_projectName);
    if (j.contains("Status")) j.at("Status").get_to(v_status);
    if (j.contains("UpdateTime")) j.at("UpdateTime").get_to(v_updateTime);
}
