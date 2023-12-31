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
#include "volcengine/vpn/model/VpnGatewayForDescribeVpnGatewaysBillingOutput.h"

using namespace volcengine;
using namespace volcengine::vpn;
using namespace nlohmann;

void VpnGatewayForDescribeVpnGatewaysBillingOutput::fromJsonString(const std::string &input) {
    auto j = json::parse(input);
    if (j.contains("BillingStatus")) j.at("BillingStatus").get_to(v_billingStatus);
    if (j.contains("BillingType")) j.at("BillingType").get_to(v_billingType);
    if (j.contains("ExpiredTime")) j.at("ExpiredTime").get_to(v_expiredTime);
    if (j.contains("ReclaimTime")) j.at("ReclaimTime").get_to(v_reclaimTime);
    if (j.contains("RemainRenewTimes")) j.at("RemainRenewTimes").get_to(v_remainRenewTimes);
    if (j.contains("RenewType")) j.at("RenewType").get_to(v_renewType);
    if (j.contains("VpnGatewayId")) j.at("VpnGatewayId").get_to(v_vpnGatewayId);
}
