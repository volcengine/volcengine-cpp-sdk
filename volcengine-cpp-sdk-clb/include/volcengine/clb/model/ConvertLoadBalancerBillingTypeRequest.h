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
#ifndef VOLCENGINE_CLB_CONVERTLOADBALANCERBILLINGTYPEREQUEST_H
#define VOLCENGINE_CLB_CONVERTLOADBALANCERBILLINGTYPEREQUEST_H
#include <string>
#include <volcengine/core/RequestBuilder.h>

namespace volcengine{
    namespace clb{
        class ConvertLoadBalancerBillingTypeRequest {
        public:
            ConvertLoadBalancerBillingTypeRequest();
            ~ConvertLoadBalancerBillingTypeRequest() = default;

            RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain)const;

            int getLoadBalancerBillingType()const { return  v_loadBalancerBillingType; }
            bool LoadBalancerBillingTypeHasBeenSet() const { return v_loadBalancerBillingTypeHasBeenSet; }
            void setLoadBalancerBillingType(const int s_loadBalancerBillingType ) {
                v_loadBalancerBillingType = s_loadBalancerBillingType;
                v_loadBalancerBillingTypeHasBeenSet = true;
            }
            const std::string &getLoadBalancerId()const { return  v_loadBalancerId; }
            bool LoadBalancerIdHasBeenSet() const { return v_loadBalancerIdHasBeenSet; }
            void setLoadBalancerId(const std::string &s_loadBalancerId ) {
                v_loadBalancerId = s_loadBalancerId;
                v_loadBalancerIdHasBeenSet = true;
            }
            int getPeriod()const { return  v_period; }
            bool PeriodHasBeenSet() const { return v_periodHasBeenSet; }
            void setPeriod(const int s_period ) {
                v_period = s_period;
                v_periodHasBeenSet = true;
            }
            const std::string &getPeriodUnit()const { return  v_periodUnit; }
            bool PeriodUnitHasBeenSet() const { return v_periodUnitHasBeenSet; }
            void setPeriodUnit(const std::string &s_periodUnit ) {
                v_periodUnit = s_periodUnit;
                v_periodUnitHasBeenSet = true;
            }
        private:
            int v_loadBalancerBillingType;
            bool v_loadBalancerBillingTypeHasBeenSet;

            std::string v_loadBalancerId;
            bool v_loadBalancerIdHasBeenSet;

            int v_period;
            bool v_periodHasBeenSet;

            std::string v_periodUnit;
            bool v_periodUnitHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_CLB_CONVERTLOADBALANCERBILLINGTYPEREQUEST_H