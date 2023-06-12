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
#ifndef VOLCENGINE_CLB_DESCRIBELISTENERATTRIBUTESREQUEST_H
#define VOLCENGINE_CLB_DESCRIBELISTENERATTRIBUTESREQUEST_H
#include <string>
#include <volcengine/core/RequestBuilder.h>

namespace volcengine{
    namespace clb{
        class DescribeListenerAttributesRequest {
        public:
            DescribeListenerAttributesRequest();
            ~DescribeListenerAttributesRequest() = default;

            RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain)const;

            const std::string &getListenerId()const { return  v_listenerId; }
            bool ListenerIdHasBeenSet() const { return v_listenerIdHasBeenSet; }
            void setListenerId(const std::string &s_listenerId ) {
                v_listenerId = s_listenerId;
                v_listenerIdHasBeenSet = true;
            }
        private:
            std::string v_listenerId;
            bool v_listenerIdHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_CLB_DESCRIBELISTENERATTRIBUTESREQUEST_H