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
#ifndef VOLCENGINE_CLB_REMOVESERVERGROUPBACKENDSERVERSREQUEST_H
#define VOLCENGINE_CLB_REMOVESERVERGROUPBACKENDSERVERSREQUEST_H
#include <string>
#include <volcengine/core/RequestBuilder.h>

namespace volcengine{
    namespace clb{
        class RemoveServerGroupBackendServersRequest {
        public:
            RemoveServerGroupBackendServersRequest();
            ~RemoveServerGroupBackendServersRequest() = default;

            RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain)const;

            const std::string &getServerGroupId()const { return  v_serverGroupId; }
            bool ServerGroupIdHasBeenSet() const { return v_serverGroupIdHasBeenSet; }
            void setServerGroupId(const std::string &s_serverGroupId ) {
                v_serverGroupId = s_serverGroupId;
                v_serverGroupIdHasBeenSet = true;
            }
            const std::vector<std::string> &getServerIds()const { return  v_serverIds; }
            bool ServerIdsHasBeenSet() const { return v_serverIdsHasBeenSet; }
            void setServerIds(const std::vector<std::string> &s_serverIds ) {
                v_serverIds = s_serverIds;
                v_serverIdsHasBeenSet = true;
            }
        private:
            std::string v_serverGroupId;
            bool v_serverGroupIdHasBeenSet;

            std::vector<std::string> v_serverIds;
            bool v_serverIdsHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_CLB_REMOVESERVERGROUPBACKENDSERVERSREQUEST_H