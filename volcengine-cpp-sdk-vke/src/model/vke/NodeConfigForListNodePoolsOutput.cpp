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
#include "volcengine/vke/model/NodeConfigForListNodePoolsOutput.h"

using namespace volcengine;
using namespace volcengine::vke;
using namespace nlohmann;

void NodeConfigForListNodePoolsOutput::fromJsonString(const std::string &input) {
    auto j = json::parse(input);
    if (j.contains("AdditionalContainerStorageEnabled")) j.at("AdditionalContainerStorageEnabled").get_to(v_additionalContainerStorageEnabled);
    if (j.contains("AutoRenew")) j.at("AutoRenew").get_to(v_autoRenew);
    if (j.contains("AutoRenewPeriod")) j.at("AutoRenewPeriod").get_to(v_autoRenewPeriod);
    if (j.contains("DataVolumes")){
        json dataVolumesPres = j.at("DataVolumes");
        for (auto & pre : dataVolumesPres) {
           DataVolumeForListNodePoolsOutput next;
           next.fromJsonString(to_string(pre));
           v_dataVolumes.emplace_back(next);
        }
    }
    if (j.contains("HpcClusterIds")){
        json hpcClusterIdsPres = j.at("HpcClusterIds");
        for (auto & pre : hpcClusterIdsPres) {
           v_hpcClusterIds.emplace_back(pre);
        }
    }
    if (j.contains("ImageId")) j.at("ImageId").get_to(v_imageId);
    if (j.contains("InitializeScript")) j.at("InitializeScript").get_to(v_initializeScript);
    if (j.contains("InstanceChargeType")) j.at("InstanceChargeType").get_to(v_instanceChargeType);
    if (j.contains("InstanceTypeIds")){
        json instanceTypeIdsPres = j.at("InstanceTypeIds");
        for (auto & pre : instanceTypeIdsPres) {
           v_instanceTypeIds.emplace_back(pre);
        }
    }
    if (j.contains("NamePrefix")) j.at("NamePrefix").get_to(v_namePrefix);
    if (j.contains("Period")) j.at("Period").get_to(v_period);
    if (j.contains("Security")){
        json securityPres = j.at("Security");
        auto next = std::make_shared<SecurityForListNodePoolsOutput>();
        next->fromJsonString(to_string(securityPres));
        v_security = next;
    }
    if (j.contains("SubnetIds")){
        json subnetIdsPres = j.at("SubnetIds");
        for (auto & pre : subnetIdsPres) {
           v_subnetIds.emplace_back(pre);
        }
    }
    if (j.contains("SystemVolume")){
        json systemVolumePres = j.at("SystemVolume");
        auto next = std::make_shared<SystemVolumeForListNodePoolsOutput>();
        next->fromJsonString(to_string(systemVolumePres));
        v_systemVolume = next;
    }
    if (j.contains("Tags")){
        json tagsPres = j.at("Tags");
        for (auto & pre : tagsPres) {
           TagForListNodePoolsOutput next;
           next.fromJsonString(to_string(pre));
           v_tags.emplace_back(next);
        }
    }
}
