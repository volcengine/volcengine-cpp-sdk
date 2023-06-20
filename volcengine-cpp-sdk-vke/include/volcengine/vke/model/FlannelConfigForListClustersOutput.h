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
#ifndef VOLCENGINE_VKE_FLANNELCONFIGFORLISTCLUSTERSOUTPUT_H
#define VOLCENGINE_VKE_FLANNELCONFIGFORLISTCLUSTERSOUTPUT_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/core/utils/json.hpp"
namespace volcengine{
    namespace vke{
        class FlannelConfigForListClustersOutput {
        public:
            FlannelConfigForListClustersOutput() = default;
            ~FlannelConfigForListClustersOutput() = default;
            void fromJsonString(const std::string &input);
            const int getMaxPodsPerNode() const { return  v_maxPodsPerNode; }
            void setMaxPodsPerNode(const int s_maxPodsPerNode ) {
                v_maxPodsPerNode = s_maxPodsPerNode;
            }
            const std::vector<std::string> &getPodCidrs() const { return  v_podCidrs; }
            void setPodCidrs(const std::vector<std::string> &s_podCidrs ) {
                v_podCidrs = s_podCidrs;
            }
        private:
            int v_maxPodsPerNode{};
            std::vector<std::string> v_podCidrs;
        };
    }
}
#endif // !VOLCENGINE_VKE_FLANNELCONFIGFORLISTCLUSTERSOUTPUT_H