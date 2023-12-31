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
#include "volcengine/vpc/model/DescribeBandwidthPackagesRequest.h"

using namespace volcengine;
using namespace volcengine::vpc;
DescribeBandwidthPackagesRequest::DescribeBandwidthPackagesRequest(){
    v_securityProtectionEnabled = false;
    v_securityProtectionEnabledHasBeenSet = false;
}

RequestBuilder DescribeBandwidthPackagesRequest::withRequestBuilder(RequestBuilder rb, const std::string &chain) const {
    rb.withQuery("Action","DescribeBandwidthPackages");
    rb.withQuery("Version","2020-04-01");

    if(v_bandwidthPackageIdsHasBeenSet){
      unsigned v_bandwidthPackageIdsCount = 1;
      for(auto& item : v_bandwidthPackageIds){
        std::stringstream ss;
        ss << chain << "BandwidthPackageIds." << v_bandwidthPackageIdsCount;
        rb.withQuery(ss.str(), item);
        v_bandwidthPackageIdsCount ++;
      }
    }

    if(v_bandwidthPackageNameHasBeenSet){
        rb.withQuery(chain + "BandwidthPackageName", v_bandwidthPackageName);

    }

    if(v_iSPHasBeenSet){
        rb.withQuery(chain + "ISP", v_iSP);

    }

    if(v_projectNameHasBeenSet){
        rb.withQuery(chain + "ProjectName", v_projectName);

    }

    if(v_securityProtectionEnabledHasBeenSet){
        rb.withQuery(chain + "SecurityProtectionEnabled", std::to_string(v_securityProtectionEnabled));

    }

    if(v_tagFiltersHasBeenSet){
      unsigned v_tagFiltersCount = 1;
      for(auto& item : v_tagFilters){
        std::stringstream ss;
        ss << chain << "TagFilters." << v_tagFiltersCount;
        rb = item.withRequestBuilder(rb, ss.str()+".");
        v_tagFiltersCount ++;
      }
    }

    return rb;
}


