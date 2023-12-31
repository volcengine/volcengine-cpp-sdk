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
#ifndef VOLCENGINE_CLB_CREATELOADBALANCERRESULT_H
#define VOLCENGINE_CLB_CREATELOADBALANCERRESULT_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/core/utils/json.hpp"
namespace volcengine{
    namespace clb{
        class CreateLoadBalancerResult {
        public:
            CreateLoadBalancerResult() = default;
            ~CreateLoadBalancerResult() = default;
            void fromJsonString(const std::string &input);
            const std::string &getLoadBalancerId() const { return  v_loadBalancerId; }
            void setLoadBalancerId(const std::string &s_loadBalancerId ) {
                v_loadBalancerId = s_loadBalancerId;
            }
            const std::string &getOrderId() const { return  v_orderId; }
            void setOrderId(const std::string &s_orderId ) {
                v_orderId = s_orderId;
            }
            const std::string &getRequestId() const { return  v_requestId; }
            void setRequestId(const std::string &s_requestId ) {
                v_requestId = s_requestId;
            }
        private:
            std::string v_loadBalancerId;
            std::string v_orderId;
            std::string v_requestId;
        };
    }
}
#endif // !VOLCENGINE_CLB_CREATELOADBALANCERRESULT_H