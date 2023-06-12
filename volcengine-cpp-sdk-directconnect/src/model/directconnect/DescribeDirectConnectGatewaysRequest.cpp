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
#include "volcengine/directconnect/model/DescribeDirectConnectGatewaysRequest.h"

using namespace volcengine;
using namespace volcengine::directconnect;
DescribeDirectConnectGatewaysRequest::DescribeDirectConnectGatewaysRequest(){
    v_pageNumber = 0;
    v_pageNumberHasBeenSet = false;
    v_pageSize = 0;
    v_pageSizeHasBeenSet = false;
}

RequestBuilder DescribeDirectConnectGatewaysRequest::withRequestBuilder(RequestBuilder rb, const std::string &chain) const {
    rb.withQuery("Action","DescribeDirectConnectGateways");
    rb.withQuery("Version","2020-04-01");

    if(v_cenIdHasBeenSet){
        rb.withQuery(chain + "CenId", v_cenId);

    }

    if(v_directConnectGatewayIdsHasBeenSet){
      unsigned v_directConnectGatewayIdsCount = 1;
      for(auto& item : v_directConnectGatewayIds){
        std::stringstream ss;
        ss << chain << "DirectConnectGatewayIds." << v_directConnectGatewayIdsCount;
        rb.withQuery(ss.str(), item);
        v_directConnectGatewayIdsCount ++;
      }
    }

    if(v_directConnectGatewayNameHasBeenSet){
        rb.withQuery(chain + "DirectConnectGatewayName", v_directConnectGatewayName);

    }

    if(v_pageNumberHasBeenSet){
        rb.withQuery(chain + "PageNumber", std::to_string(v_pageNumber));

    }

    if(v_pageSizeHasBeenSet){
        rb.withQuery(chain + "PageSize", std::to_string(v_pageSize));

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


