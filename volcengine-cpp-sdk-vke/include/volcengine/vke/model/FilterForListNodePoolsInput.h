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
#ifndef VOLCENGINE_VKE_FILTERFORLISTNODEPOOLSINPUT_H
#define VOLCENGINE_VKE_FILTERFORLISTNODEPOOLSINPUT_H
#include <string>
#include "volcengine/core/utils/json.hpp"
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/vke/model/StatusForListNodePoolsInput.h"
using namespace nlohmann;

namespace volcengine{
    namespace vke{
        class FilterForListNodePoolsInput {
        public:
            FilterForListNodePoolsInput();
            ~FilterForListNodePoolsInput() = default;

            static RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain);
            json jsonPayload() const;

            bool isAutoScalingEnabled()const { return  v_autoScalingEnabled; }
            bool AutoScalingEnabledHasBeenSet() const { return v_autoScalingEnabledHasBeenSet; }
            void setAutoScalingEnabled(const bool s_autoScalingEnabled ) {
                v_autoScalingEnabled = s_autoScalingEnabled;
                v_autoScalingEnabledHasBeenSet = true;
            }
            const std::vector<std::string> &getClusterIds()const { return  v_clusterIds; }
            bool ClusterIdsHasBeenSet() const { return v_clusterIdsHasBeenSet; }
            void setClusterIds(const std::vector<std::string> &s_clusterIds ) {
                v_clusterIds = s_clusterIds;
                v_clusterIdsHasBeenSet = true;
            }
            const std::string &getCreateClientToken()const { return  v_createClientToken; }
            bool CreateClientTokenHasBeenSet() const { return v_createClientTokenHasBeenSet; }
            void setCreateClientToken(const std::string &s_createClientToken ) {
                v_createClientToken = s_createClientToken;
                v_createClientTokenHasBeenSet = true;
            }
            const std::vector<std::string> &getIds()const { return  v_ids; }
            bool IdsHasBeenSet() const { return v_idsHasBeenSet; }
            void setIds(const std::vector<std::string> &s_ids ) {
                v_ids = s_ids;
                v_idsHasBeenSet = true;
            }
            const std::string &getName()const { return  v_name; }
            bool NameHasBeenSet() const { return v_nameHasBeenSet; }
            void setName(const std::string &s_name ) {
                v_name = s_name;
                v_nameHasBeenSet = true;
            }
            const std::vector<StatusForListNodePoolsInput> &getStatuses()const { return  v_statuses; }
            bool StatusesHasBeenSet() const { return v_statusesHasBeenSet; }
            void setStatuses(const std::vector<StatusForListNodePoolsInput> &s_statuses ) {
                v_statuses = s_statuses;
                v_statusesHasBeenSet = true;
            }
            const std::string &getUpdateClientToken()const { return  v_updateClientToken; }
            bool UpdateClientTokenHasBeenSet() const { return v_updateClientTokenHasBeenSet; }
            void setUpdateClientToken(const std::string &s_updateClientToken ) {
                v_updateClientToken = s_updateClientToken;
                v_updateClientTokenHasBeenSet = true;
            }
        private:
            bool v_autoScalingEnabled;
            bool v_autoScalingEnabledHasBeenSet;

            std::vector<std::string> v_clusterIds;
            bool v_clusterIdsHasBeenSet;

            std::string v_createClientToken;
            bool v_createClientTokenHasBeenSet;

            std::vector<std::string> v_ids;
            bool v_idsHasBeenSet;

            std::string v_name;
            bool v_nameHasBeenSet;

            std::vector<StatusForListNodePoolsInput> v_statuses;
            bool v_statusesHasBeenSet;

            std::string v_updateClientToken;
            bool v_updateClientTokenHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_VKE_FILTERFORLISTNODEPOOLSINPUT_H