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
#include "volcengine/vke/model/ItemForListNodePoolsOutput.h"

using namespace volcengine;
using namespace volcengine::vke;
using namespace nlohmann;

void ItemForListNodePoolsOutput::fromJsonString(const std::string &input) {
    auto j = json::parse(input);
    if (j.contains("AutoScaling")){
        json autoScalingPres = j.at("AutoScaling");
        auto next = std::make_shared<AutoScalingForListNodePoolsOutput>();
        next->fromJsonString(to_string(autoScalingPres));
        v_autoScaling = next;
    }
    if (j.contains("ClusterId")) j.at("ClusterId").get_to(v_clusterId);
    if (j.contains("CreateClientToken")) j.at("CreateClientToken").get_to(v_createClientToken);
    if (j.contains("CreateTime")) j.at("CreateTime").get_to(v_createTime);
    if (j.contains("Id")) j.at("Id").get_to(v_id);
    if (j.contains("KubernetesConfig")){
        json kubernetesConfigPres = j.at("KubernetesConfig");
        auto next = std::make_shared<KubernetesConfigForListNodePoolsOutput>();
        next->fromJsonString(to_string(kubernetesConfigPres));
        v_kubernetesConfig = next;
    }
    if (j.contains("Name")) j.at("Name").get_to(v_name);
    if (j.contains("NodeConfig")){
        json nodeConfigPres = j.at("NodeConfig");
        auto next = std::make_shared<NodeConfigForListNodePoolsOutput>();
        next->fromJsonString(to_string(nodeConfigPres));
        v_nodeConfig = next;
    }
    if (j.contains("NodeStatistics")){
        json nodeStatisticsPres = j.at("NodeStatistics");
        auto next = std::make_shared<NodeStatisticsForListNodePoolsOutput>();
        next->fromJsonString(to_string(nodeStatisticsPres));
        v_nodeStatistics = next;
    }
    if (j.contains("Status")){
        json statusPres = j.at("Status");
        auto next = std::make_shared<StatusForListNodePoolsOutput>();
        next->fromJsonString(to_string(statusPres));
        v_status = next;
    }
    if (j.contains("Tags")){
        json tagsPres = j.at("Tags");
        for (auto & pre : tagsPres) {
           ConvertTagForListNodePoolsOutput next;
           next.fromJsonString(to_string(pre));
           v_tags.emplace_back(next);
        }
    }
    if (j.contains("UpdateClientToken")) j.at("UpdateClientToken").get_to(v_updateClientToken);
    if (j.contains("UpdateTime")) j.at("UpdateTime").get_to(v_updateTime);
}