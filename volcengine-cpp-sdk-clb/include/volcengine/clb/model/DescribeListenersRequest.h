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
#ifndef VOLCENGINE_CLB_DESCRIBELISTENERSREQUEST_H
#define VOLCENGINE_CLB_DESCRIBELISTENERSREQUEST_H
#include <string>
#include <volcengine/core/RequestBuilder.h>

namespace volcengine{
    namespace clb{
        class DescribeListenersRequest {
        public:
            DescribeListenersRequest();
            ~DescribeListenersRequest() = default;

            RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain)const;

            const std::vector<std::string> &getListenerIds()const { return  v_listenerIds; }
            bool ListenerIdsHasBeenSet() const { return v_listenerIdsHasBeenSet; }
            void setListenerIds(const std::vector<std::string> &s_listenerIds ) {
                v_listenerIds = s_listenerIds;
                v_listenerIdsHasBeenSet = true;
            }
            const std::string &getListenerName()const { return  v_listenerName; }
            bool ListenerNameHasBeenSet() const { return v_listenerNameHasBeenSet; }
            void setListenerName(const std::string &s_listenerName ) {
                v_listenerName = s_listenerName;
                v_listenerNameHasBeenSet = true;
            }
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
        private:
            std::vector<std::string> v_listenerIds;
            bool v_listenerIdsHasBeenSet;

            std::string v_listenerName;
            bool v_listenerNameHasBeenSet;

            std::string v_loadBalancerId;
            bool v_loadBalancerIdHasBeenSet;

            int v_pageNumber;
            bool v_pageNumberHasBeenSet;

            int v_pageSize;
            bool v_pageSizeHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_CLB_DESCRIBELISTENERSREQUEST_H