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
#include "volcengine/clb/model/DescribeLoadBalancersRequest.h"

using namespace volcengine;
using namespace volcengine::clb;
DescribeLoadBalancersRequest::DescribeLoadBalancersRequest(){
    v_pageNumber = 0;
    v_pageNumberHasBeenSet = false;
    v_pageSize = 0;
    v_pageSizeHasBeenSet = false;
}

RequestBuilder DescribeLoadBalancersRequest::withRequestBuilder(RequestBuilder rb, const std::string &chain) const {
    rb.withQuery("Action","DescribeLoadBalancers");
    rb.withQuery("Version","2020-04-01");

    if(v_addressIpVersionHasBeenSet){
        rb.withQuery(chain + "AddressIpVersion", v_addressIpVersion);

    }

    if(v_eniAddressHasBeenSet){
        rb.withQuery(chain + "EniAddress", v_eniAddress);

    }

    if(v_loadBalancerIdsHasBeenSet){
      unsigned v_loadBalancerIdsCount = 1;
      for(auto& item : v_loadBalancerIds){
        std::stringstream ss;
        ss << chain << "LoadBalancerIds." << v_loadBalancerIdsCount;
        rb.withQuery(ss.str(), item);
        v_loadBalancerIdsCount ++;
      }
    }

    if(v_loadBalancerNameHasBeenSet){
        rb.withQuery(chain + "LoadBalancerName", v_loadBalancerName);

    }

    if(v_pageNumberHasBeenSet){
        rb.withQuery(chain + "PageNumber", std::to_string(v_pageNumber));

    }

    if(v_pageSizeHasBeenSet){
        rb.withQuery(chain + "PageSize", std::to_string(v_pageSize));

    }

    if(v_projectNameHasBeenSet){
        rb.withQuery(chain + "ProjectName", v_projectName);

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

    if(v_vpcIdHasBeenSet){
        rb.withQuery(chain + "VpcId", v_vpcId);

    }

    return rb;
}

