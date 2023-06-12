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
#ifndef VOLCENGINE_CLB_DESCRIBESERVERGROUPATTRIBUTESRESULT_H
#define VOLCENGINE_CLB_DESCRIBESERVERGROUPATTRIBUTESRESULT_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/core/utils/json.hpp"
#include "volcengine/clb/model/ServerForDescribeServerGroupAttributesOutput.h"
namespace volcengine{
    namespace clb{
        class DescribeServerGroupAttributesResult {
        public:
            DescribeServerGroupAttributesResult() = default;
            ~DescribeServerGroupAttributesResult() = default;
            void fromJsonString(const std::string &input);
            const std::string &getDescription() const { return  v_description; }
            void setDescription(const std::string &s_description ) {
                v_description = s_description;
            }
            const std::vector<std::string> &getListeners() const { return  v_listeners; }
            void setListeners(const std::vector<std::string> &s_listeners ) {
                v_listeners = s_listeners;
            }
            const std::string &getLoadBalancerId() const { return  v_loadBalancerId; }
            void setLoadBalancerId(const std::string &s_loadBalancerId ) {
                v_loadBalancerId = s_loadBalancerId;
            }
            const std::string &getRequestId() const { return  v_requestId; }
            void setRequestId(const std::string &s_requestId ) {
                v_requestId = s_requestId;
            }
            const std::string &getServerGroupId() const { return  v_serverGroupId; }
            void setServerGroupId(const std::string &s_serverGroupId ) {
                v_serverGroupId = s_serverGroupId;
            }
            const std::string &getServerGroupName() const { return  v_serverGroupName; }
            void setServerGroupName(const std::string &s_serverGroupName ) {
                v_serverGroupName = s_serverGroupName;
            }
            const std::vector<ServerForDescribeServerGroupAttributesOutput> &getServers() const { return  v_servers; }
            void setServers(const std::vector<ServerForDescribeServerGroupAttributesOutput> &s_servers ) {
                v_servers = s_servers;
            }
        private:
            std::string v_description;
            std::vector<std::string> v_listeners;
            std::string v_loadBalancerId;
            std::string v_requestId;
            std::string v_serverGroupId;
            std::string v_serverGroupName;
            std::vector<ServerForDescribeServerGroupAttributesOutput> v_servers;
        };
    }
}
#endif // !VOLCENGINE_CLB_DESCRIBESERVERGROUPATTRIBUTESRESULT_H