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
#ifndef VOLCENGINE_CLB_DESCRIBEHEALTHCHECKLOGTOPICATTRIBUTESREQUEST_H
#define VOLCENGINE_CLB_DESCRIBEHEALTHCHECKLOGTOPICATTRIBUTESREQUEST_H
#include <string>
#include <volcengine/core/RequestBuilder.h>

namespace volcengine{
    namespace clb{
        class DescribeHealthCheckLogTopicAttributesRequest {
        public:
            DescribeHealthCheckLogTopicAttributesRequest();
            ~DescribeHealthCheckLogTopicAttributesRequest() = default;

            RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain)const;

            const std::string &getLogTopicId()const { return  v_logTopicId; }
            bool LogTopicIdHasBeenSet() const { return v_logTopicIdHasBeenSet; }
            void setLogTopicId(const std::string &s_logTopicId ) {
                v_logTopicId = s_logTopicId;
                v_logTopicIdHasBeenSet = true;
            }
        private:
            std::string v_logTopicId;
            bool v_logTopicIdHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_CLB_DESCRIBEHEALTHCHECKLOGTOPICATTRIBUTESREQUEST_H