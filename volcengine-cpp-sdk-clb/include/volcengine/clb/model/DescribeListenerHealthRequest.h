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
#ifndef VOLCENGINE_CLB_DESCRIBELISTENERHEALTHREQUEST_H
#define VOLCENGINE_CLB_DESCRIBELISTENERHEALTHREQUEST_H
#include <string>
#include <volcengine/core/RequestBuilder.h>

namespace volcengine{
    namespace clb{
        class DescribeListenerHealthRequest {
        public:
            DescribeListenerHealthRequest();
            ~DescribeListenerHealthRequest() = default;

            RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain)const;

            const std::string &getListenerId()const { return  v_listenerId; }
            bool ListenerIdHasBeenSet() const { return v_listenerIdHasBeenSet; }
            void setListenerId(const std::string &s_listenerId ) {
                v_listenerId = s_listenerId;
                v_listenerIdHasBeenSet = true;
            }
            const std::string &getOnlyUnHealthy()const { return  v_onlyUnHealthy; }
            bool OnlyUnHealthyHasBeenSet() const { return v_onlyUnHealthyHasBeenSet; }
            void setOnlyUnHealthy(const std::string &s_onlyUnHealthy ) {
                v_onlyUnHealthy = s_onlyUnHealthy;
                v_onlyUnHealthyHasBeenSet = true;
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
            std::string v_listenerId;
            bool v_listenerIdHasBeenSet;

            std::string v_onlyUnHealthy;
            bool v_onlyUnHealthyHasBeenSet;

            int v_pageNumber;
            bool v_pageNumberHasBeenSet;

            int v_pageSize;
            bool v_pageSizeHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_CLB_DESCRIBELISTENERHEALTHREQUEST_H