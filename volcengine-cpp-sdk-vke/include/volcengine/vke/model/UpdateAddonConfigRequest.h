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
#ifndef VOLCENGINE_VKE_UPDATEADDONCONFIGREQUEST_H
#define VOLCENGINE_VKE_UPDATEADDONCONFIGREQUEST_H
#include <string>
#include "volcengine/core/utils/json.hpp"
#include <volcengine/core/RequestBuilder.h>
using namespace nlohmann;

namespace volcengine{
    namespace vke{
        class UpdateAddonConfigRequest {
        public:
            UpdateAddonConfigRequest();
            ~UpdateAddonConfigRequest() = default;

            static RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain);
            json jsonPayload() const;

            const std::string &getClientToken()const { return  v_clientToken; }
            bool ClientTokenHasBeenSet() const { return v_clientTokenHasBeenSet; }
            void setClientToken(const std::string &s_clientToken ) {
                v_clientToken = s_clientToken;
                v_clientTokenHasBeenSet = true;
            }
            const std::string &getClusterId()const { return  v_clusterId; }
            bool ClusterIdHasBeenSet() const { return v_clusterIdHasBeenSet; }
            void setClusterId(const std::string &s_clusterId ) {
                v_clusterId = s_clusterId;
                v_clusterIdHasBeenSet = true;
            }
            const std::string &getConfig()const { return  v_config; }
            bool ConfigHasBeenSet() const { return v_configHasBeenSet; }
            void setConfig(const std::string &s_config ) {
                v_config = s_config;
                v_configHasBeenSet = true;
            }
            const std::string &getName()const { return  v_name; }
            bool NameHasBeenSet() const { return v_nameHasBeenSet; }
            void setName(const std::string &s_name ) {
                v_name = s_name;
                v_nameHasBeenSet = true;
            }
        private:
            std::string v_clientToken;
            bool v_clientTokenHasBeenSet;

            std::string v_clusterId;
            bool v_clusterIdHasBeenSet;

            std::string v_config;
            bool v_configHasBeenSet;

            std::string v_name;
            bool v_nameHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_VKE_UPDATEADDONCONFIGREQUEST_H