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
#include "volcengine/clb/model/EipBillingConfigForCreateLoadBalancerInput.h"

using namespace volcengine;
using namespace volcengine::clb;
EipBillingConfigForCreateLoadBalancerInput::EipBillingConfigForCreateLoadBalancerInput(){
    v_bandwidth = 0;
    v_bandwidthHasBeenSet = false;
    v_eipBillingType = 0;
    v_eipBillingTypeHasBeenSet = false;
}

RequestBuilder EipBillingConfigForCreateLoadBalancerInput::withRequestBuilder(RequestBuilder rb, const std::string &chain) const {

    if(v_bandwidthHasBeenSet){
        rb.withQuery(chain + "Bandwidth", std::to_string(v_bandwidth));

    }

    if(v_bandwidthPackageIdHasBeenSet){
        rb.withQuery(chain + "BandwidthPackageId", v_bandwidthPackageId);

    }

    if(v_eipBillingTypeHasBeenSet){
        rb.withQuery(chain + "EipBillingType", std::to_string(v_eipBillingType));

    }

    if(v_iSPHasBeenSet){
        rb.withQuery(chain + "ISP", v_iSP);

    }

    if(v_securityProtectionTypesHasBeenSet){
      unsigned v_securityProtectionTypesCount = 1;
      for(auto& item : v_securityProtectionTypes){
        std::stringstream ss;
        ss << chain << "SecurityProtectionTypes." << v_securityProtectionTypesCount;
        rb.withQuery(ss.str(), item);
        v_securityProtectionTypesCount ++;
      }
    }

    return rb;
}


