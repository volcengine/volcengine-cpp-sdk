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
#ifndef VOLCENGINE_VKE_APISERVERPUBLICACCESSCONFIGFORLISTCLUSTERSOUTPUT_H
#define VOLCENGINE_VKE_APISERVERPUBLICACCESSCONFIGFORLISTCLUSTERSOUTPUT_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/core/utils/json.hpp"
#include "volcengine/vke/model/PublicAccessNetworkConfigForListClustersOutput.h"
namespace volcengine{
    namespace vke{
        class ApiServerPublicAccessConfigForListClustersOutput {
        public:
            ApiServerPublicAccessConfigForListClustersOutput() = default;
            ~ApiServerPublicAccessConfigForListClustersOutput() = default;
            void fromJsonString(const std::string &input);
            const std::vector<std::string> &getAccessSourceIpsv4() const { return  v_accessSourceIpsv4; }
            void setAccessSourceIpsv4(const std::vector<std::string> &s_accessSourceIpsv4 ) {
                v_accessSourceIpsv4 = s_accessSourceIpsv4;
            }
            const std::shared_ptr<PublicAccessNetworkConfigForListClustersOutput> &getPublicAccessNetworkConfig() const { return  v_publicAccessNetworkConfig; }
            void setPublicAccessNetworkConfig(const std::shared_ptr<PublicAccessNetworkConfigForListClustersOutput> &s_publicAccessNetworkConfig ) {
                v_publicAccessNetworkConfig = s_publicAccessNetworkConfig;
            }
        private:
            std::vector<std::string> v_accessSourceIpsv4;
            std::shared_ptr<PublicAccessNetworkConfigForListClustersOutput> v_publicAccessNetworkConfig;
        };
    }
}
#endif // !VOLCENGINE_VKE_APISERVERPUBLICACCESSCONFIGFORLISTCLUSTERSOUTPUT_H