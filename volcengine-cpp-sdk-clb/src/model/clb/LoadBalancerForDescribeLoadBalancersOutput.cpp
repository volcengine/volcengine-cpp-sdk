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
#include "volcengine/clb/model/LoadBalancerForDescribeLoadBalancersOutput.h"

using namespace volcengine;
using namespace volcengine::clb;
using namespace nlohmann;

void LoadBalancerForDescribeLoadBalancersOutput::fromJsonString(const std::string &input) {
    auto j = json::parse(input);
    if (j.contains("BusinessStatus")) j.at("BusinessStatus").get_to(v_businessStatus);
    if (j.contains("CreateTime")) j.at("CreateTime").get_to(v_createTime);
    if (j.contains("DeletedTime")) j.at("DeletedTime").get_to(v_deletedTime);
    if (j.contains("Description")) j.at("Description").get_to(v_description);
    if (j.contains("EipAddress")) j.at("EipAddress").get_to(v_eipAddress);
    if (j.contains("EipID")) j.at("EipID").get_to(v_eipID);
    if (j.contains("EniAddress")) j.at("EniAddress").get_to(v_eniAddress);
    if (j.contains("EniID")) j.at("EniID").get_to(v_eniID);
    if (j.contains("ExpiredTime")) j.at("ExpiredTime").get_to(v_expiredTime);
    if (j.contains("LoadBalancerBillingType")) j.at("LoadBalancerBillingType").get_to(v_loadBalancerBillingType);
    if (j.contains("LoadBalancerId")) j.at("LoadBalancerId").get_to(v_loadBalancerId);
    if (j.contains("LoadBalancerName")) j.at("LoadBalancerName").get_to(v_loadBalancerName);
    if (j.contains("LoadBalancerSpec")) j.at("LoadBalancerSpec").get_to(v_loadBalancerSpec);
    if (j.contains("LockReason")) j.at("LockReason").get_to(v_lockReason);
    if (j.contains("MasterZoneId")) j.at("MasterZoneId").get_to(v_masterZoneId);
    if (j.contains("ModificationProtectionReason")) j.at("ModificationProtectionReason").get_to(v_modificationProtectionReason);
    if (j.contains("ModificationProtectionStatus")) j.at("ModificationProtectionStatus").get_to(v_modificationProtectionStatus);
    if (j.contains("OverdueTime")) j.at("OverdueTime").get_to(v_overdueTime);
    if (j.contains("ProjectName")) j.at("ProjectName").get_to(v_projectName);
    if (j.contains("ServiceManaged")) j.at("ServiceManaged").get_to(v_serviceManaged);
    if (j.contains("SlaveZoneId")) j.at("SlaveZoneId").get_to(v_slaveZoneId);
    if (j.contains("Status")) j.at("Status").get_to(v_status);
    if (j.contains("SubnetId")) j.at("SubnetId").get_to(v_subnetId);
    if (j.contains("Tags")){
        json tagsPres = j.at("Tags");
        for (auto & pre : tagsPres) {
           TagForDescribeLoadBalancersOutput next;
           next.fromJsonString(to_string(pre));
           v_tags.emplace_back(next);
        }
    }
    if (j.contains("Type")) j.at("Type").get_to(v_type);
    if (j.contains("UpdateTime")) j.at("UpdateTime").get_to(v_updateTime);
    if (j.contains("VpcId")) j.at("VpcId").get_to(v_vpcId);
}
