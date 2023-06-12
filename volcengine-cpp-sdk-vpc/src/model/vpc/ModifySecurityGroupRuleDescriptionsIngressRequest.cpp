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
#include "volcengine/vpc/model/ModifySecurityGroupRuleDescriptionsIngressRequest.h"

using namespace volcengine;
using namespace volcengine::vpc;
ModifySecurityGroupRuleDescriptionsIngressRequest::ModifySecurityGroupRuleDescriptionsIngressRequest(){
    v_portEnd = 0;
    v_portEndHasBeenSet = false;
    v_portStart = 0;
    v_portStartHasBeenSet = false;
    v_priority = 0;
    v_priorityHasBeenSet = false;
}

RequestBuilder ModifySecurityGroupRuleDescriptionsIngressRequest::withRequestBuilder(RequestBuilder rb, const std::string &chain) const {
    rb.withQuery("Action","ModifySecurityGroupRuleDescriptionsIngress");
    rb.withQuery("Version","2020-04-01");

    if(v_cidrIpHasBeenSet){
        rb.withQuery(chain + "CidrIp", v_cidrIp);

    }

    if(v_descriptionHasBeenSet){
        rb.withQuery(chain + "Description", v_description);

    }

    if(v_policyHasBeenSet){
        rb.withQuery(chain + "Policy", v_policy);

    }

    if(v_portEndHasBeenSet){
        rb.withQuery(chain + "PortEnd", std::to_string(v_portEnd));

    }

    if(v_portStartHasBeenSet){
        rb.withQuery(chain + "PortStart", std::to_string(v_portStart));

    }

    if(v_priorityHasBeenSet){
        rb.withQuery(chain + "Priority", std::to_string(v_priority));

    }

    if(v_protocolHasBeenSet){
        rb.withQuery(chain + "Protocol", v_protocol);

    }

    if(v_securityGroupIdHasBeenSet){
        rb.withQuery(chain + "SecurityGroupId", v_securityGroupId);

    }

    if(v_sourceGroupIdHasBeenSet){
        rb.withQuery(chain + "SourceGroupId", v_sourceGroupId);

    }

    return rb;
}

