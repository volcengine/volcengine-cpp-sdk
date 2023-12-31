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
#include "volcengine/vke/model/PodsConfigForListClustersOutput.h"

using namespace volcengine;
using namespace volcengine::vke;
using namespace nlohmann;

void PodsConfigForListClustersOutput::fromJsonString(const std::string &input) {
    auto j = json::parse(input);
    if (j.contains("FlannelConfig")){
        json flannelConfigPres = j.at("FlannelConfig");
        auto next = std::make_shared<FlannelConfigForListClustersOutput>();
        next->fromJsonString(to_string(flannelConfigPres));
        v_flannelConfig = next;
    }
    if (j.contains("PodNetworkMode")) j.at("PodNetworkMode").get_to(v_podNetworkMode);
    if (j.contains("VpcCniConfig")){
        json vpcCniConfigPres = j.at("VpcCniConfig");
        auto next = std::make_shared<VpcCniConfigForListClustersOutput>();
        next->fromJsonString(to_string(vpcCniConfigPres));
        v_vpcCniConfig = next;
    }
}
