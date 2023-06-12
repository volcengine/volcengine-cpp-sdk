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
#ifndef VOLCENGINE_CLB_DESCRIBESERVERGROUPSREQUEST_H
#define VOLCENGINE_CLB_DESCRIBESERVERGROUPSREQUEST_H
#include <string>
#include <volcengine/core/RequestBuilder.h>

namespace volcengine{
    namespace clb{
        class DescribeServerGroupsRequest {
        public:
            DescribeServerGroupsRequest();
            ~DescribeServerGroupsRequest() = default;

            RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain)const;

            const std::string &getLoadBalancerId()const { return  v_loadBalancerId; }
            bool LoadBalancerIdHasBeenSet() const { return v_loadBalancerIdHasBeenSet; }
            void setLoadBalancerId(const std::string &s_loadBalancerId ) {
                v_loadBalancerId = s_loadBalancerId;
                v_loadBalancerIdHasBeenSet = true;
            }
            int getPageNumber()const { return  v_pageNumber; }
            bool PageNumberHasBeenSet() const { return v_pageNumberHasBeenSet; }
            void setPageNumber(const int s_pageNumber ) {
                v_pageNumber = s_pageNumber;
                v_pageNumberHasBeenSet = true;
            }
            int getPageSize()const { return  v_pageSize; }
            bool PageSizeHasBeenSet() const { return v_pageSizeHasBeenSet; }
            void setPageSize(const int s_pageSize ) {
                v_pageSize = s_pageSize;
                v_pageSizeHasBeenSet = true;
            }
            const std::vector<std::string> &getServerGroupIds()const { return  v_serverGroupIds; }
            bool ServerGroupIdsHasBeenSet() const { return v_serverGroupIdsHasBeenSet; }
            void setServerGroupIds(const std::vector<std::string> &s_serverGroupIds ) {
                v_serverGroupIds = s_serverGroupIds;
                v_serverGroupIdsHasBeenSet = true;
            }
            const std::string &getServerGroupName()const { return  v_serverGroupName; }
            bool ServerGroupNameHasBeenSet() const { return v_serverGroupNameHasBeenSet; }
            void setServerGroupName(const std::string &s_serverGroupName ) {
                v_serverGroupName = s_serverGroupName;
                v_serverGroupNameHasBeenSet = true;
            }
        private:
            std::string v_loadBalancerId;
            bool v_loadBalancerIdHasBeenSet;

            int v_pageNumber;
            bool v_pageNumberHasBeenSet;

            int v_pageSize;
            bool v_pageSizeHasBeenSet;

            std::vector<std::string> v_serverGroupIds;
            bool v_serverGroupIdsHasBeenSet;

            std::string v_serverGroupName;
            bool v_serverGroupNameHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_CLB_DESCRIBESERVERGROUPSREQUEST_H