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
#include <sstream>
#include <volcengine/core/RequestBuilder.h>
#include <volcengine/core/utils/StringUtils.h>
#include "volcengine/clb/model/SetLoadBalancerRenewalRequest.h"

using namespace volcengine;
using namespace volcengine::clb;
SetLoadBalancerRenewalRequest::SetLoadBalancerRenewalRequest(){
    v_remainRenewTimes = 0;
    v_remainRenewTimesHasBeenSet = false;
    v_renewPeriodTimes = 0;
    v_renewPeriodTimesHasBeenSet = false;
    v_renewType = 0;
    v_renewTypeHasBeenSet = false;
}

RequestBuilder SetLoadBalancerRenewalRequest::withRequestBuilder(RequestBuilder rb, const std::string &chain) const {
    rb.withQuery("Action","SetLoadBalancerRenewal");
    rb.withQuery("Version","2020-04-01");

    if(v_loadBalancerIdHasBeenSet){
        rb.withQuery(chain + "LoadBalancerId", v_loadBalancerId);

    }

    if(v_remainRenewTimesHasBeenSet){
        rb.withQuery(chain + "RemainRenewTimes", std::to_string(v_remainRenewTimes));

    }

    if(v_renewPeriodTimesHasBeenSet){
        rb.withQuery(chain + "RenewPeriodTimes", std::to_string(v_renewPeriodTimes));

    }

    if(v_renewTypeHasBeenSet){
        rb.withQuery(chain + "RenewType", std::to_string(v_renewType));

    }

    return rb;
}


