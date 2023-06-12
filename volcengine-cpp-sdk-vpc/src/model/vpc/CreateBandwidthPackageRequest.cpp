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
#include "volcengine/vpc/model/CreateBandwidthPackageRequest.h"

using namespace volcengine;
using namespace volcengine::vpc;
CreateBandwidthPackageRequest::CreateBandwidthPackageRequest(){
    v_bandwidth = 0;
    v_bandwidthHasBeenSet = false;
    v_billingType = 0;
    v_billingTypeHasBeenSet = false;
}

RequestBuilder CreateBandwidthPackageRequest::withRequestBuilder(RequestBuilder rb, const std::string &chain) const {
    rb.withQuery("Action","CreateBandwidthPackage");
    rb.withQuery("Version","2020-04-01");

    if(v_bandwidthHasBeenSet){
        rb.withQuery(chain + "Bandwidth", std::to_string(v_bandwidth));

    }

    if(v_bandwidthPackageNameHasBeenSet){
        rb.withQuery(chain + "BandwidthPackageName", v_bandwidthPackageName);

    }

    if(v_billingTypeHasBeenSet){
        rb.withQuery(chain + "BillingType", std::to_string(v_billingType));

    }

    if(v_descriptionHasBeenSet){
        rb.withQuery(chain + "Description", v_description);

    }

    if(v_iSPHasBeenSet){
        rb.withQuery(chain + "ISP", v_iSP);

    }

    if(v_projectNameHasBeenSet){
        rb.withQuery(chain + "ProjectName", v_projectName);

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

    if(v_tagsHasBeenSet){
      unsigned v_tagsCount = 1;
      for(auto& item : v_tags){
        std::stringstream ss;
        ss << chain << "Tags." << v_tagsCount;
        rb = item.withRequestBuilder(rb, ss.str()+".");
        v_tagsCount ++;
      }
    }

    return rb;
}

