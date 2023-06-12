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
#include "volcengine/clb/model/ConvertLoadBalancerBillingTypeRequest.h"

using namespace volcengine;
using namespace volcengine::clb;
ConvertLoadBalancerBillingTypeRequest::ConvertLoadBalancerBillingTypeRequest(){
    v_loadBalancerBillingType = 0;
    v_loadBalancerBillingTypeHasBeenSet = false;
    v_period = 0;
    v_periodHasBeenSet = false;
}

RequestBuilder ConvertLoadBalancerBillingTypeRequest::withRequestBuilder(RequestBuilder rb, const std::string &chain) const {
    rb.withQuery("Action","ConvertLoadBalancerBillingType");
    rb.withQuery("Version","2020-04-01");

    if(v_loadBalancerBillingTypeHasBeenSet){
        rb.withQuery(chain + "LoadBalancerBillingType", std::to_string(v_loadBalancerBillingType));

    }

    if(v_loadBalancerIdHasBeenSet){
        rb.withQuery(chain + "LoadBalancerId", v_loadBalancerId);

    }

    if(v_periodHasBeenSet){
        rb.withQuery(chain + "Period", std::to_string(v_period));

    }

    if(v_periodUnitHasBeenSet){
        rb.withQuery(chain + "PeriodUnit", v_periodUnit);

    }

    return rb;
}


