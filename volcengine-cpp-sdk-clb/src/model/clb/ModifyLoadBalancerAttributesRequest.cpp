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
#include "volcengine/clb/model/ModifyLoadBalancerAttributesRequest.h"

using namespace volcengine;
using namespace volcengine::clb;
ModifyLoadBalancerAttributesRequest::ModifyLoadBalancerAttributesRequest() = default;

RequestBuilder ModifyLoadBalancerAttributesRequest::withRequestBuilder(RequestBuilder rb, const std::string &chain) const {
    rb.withQuery("Action","ModifyLoadBalancerAttributes");
    rb.withQuery("Version","2020-04-01");

    if(v_descriptionHasBeenSet){
        rb.withQuery(chain + "Description", v_description);

    }

    if(v_loadBalancerIdHasBeenSet){
        rb.withQuery(chain + "LoadBalancerId", v_loadBalancerId);

    }

    if(v_loadBalancerNameHasBeenSet){
        rb.withQuery(chain + "LoadBalancerName", v_loadBalancerName);

    }

    if(v_loadBalancerSpecHasBeenSet){
        rb.withQuery(chain + "LoadBalancerSpec", v_loadBalancerSpec);

    }

    if(v_modificationProtectionReasonHasBeenSet){
        rb.withQuery(chain + "ModificationProtectionReason", v_modificationProtectionReason);

    }

    if(v_modificationProtectionStatusHasBeenSet){
        rb.withQuery(chain + "ModificationProtectionStatus", v_modificationProtectionStatus);

    }

    return rb;
}


