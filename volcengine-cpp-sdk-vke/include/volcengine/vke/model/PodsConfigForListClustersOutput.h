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
#ifndef VOLCENGINE_VKE_PODSCONFIGFORLISTCLUSTERSOUTPUT_H
#define VOLCENGINE_VKE_PODSCONFIGFORLISTCLUSTERSOUTPUT_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/core/utils/json.hpp"
#include "volcengine/vke/model/FlannelConfigForListClustersOutput.h"
#include "volcengine/vke/model/VpcCniConfigForListClustersOutput.h"
namespace volcengine{
    namespace vke{
        class PodsConfigForListClustersOutput {
        public:
            PodsConfigForListClustersOutput() = default;
            ~PodsConfigForListClustersOutput() = default;
            void fromJsonString(const std::string &input);
            const std::shared_ptr<FlannelConfigForListClustersOutput> &getFlannelConfig() const { return  v_flannelConfig; }
            void setFlannelConfig(const std::shared_ptr<FlannelConfigForListClustersOutput> &s_flannelConfig ) {
                v_flannelConfig = s_flannelConfig;
            }
            const std::string &getPodNetworkMode() const { return  v_podNetworkMode; }
            void setPodNetworkMode(const std::string &s_podNetworkMode ) {
                v_podNetworkMode = s_podNetworkMode;
            }
            const std::shared_ptr<VpcCniConfigForListClustersOutput> &getVpcCniConfig() const { return  v_vpcCniConfig; }
            void setVpcCniConfig(const std::shared_ptr<VpcCniConfigForListClustersOutput> &s_vpcCniConfig ) {
                v_vpcCniConfig = s_vpcCniConfig;
            }
        private:
            std::shared_ptr<FlannelConfigForListClustersOutput> v_flannelConfig;
            std::string v_podNetworkMode;
            std::shared_ptr<VpcCniConfigForListClustersOutput> v_vpcCniConfig;
        };
    }
}
#endif // !VOLCENGINE_VKE_PODSCONFIGFORLISTCLUSTERSOUTPUT_H