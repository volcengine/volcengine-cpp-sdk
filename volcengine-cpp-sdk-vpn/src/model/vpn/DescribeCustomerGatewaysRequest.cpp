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
#include "volcengine/vpn/model/DescribeCustomerGatewaysRequest.h"

using namespace volcengine;
using namespace volcengine::vpn;
DescribeCustomerGatewaysRequest::DescribeCustomerGatewaysRequest(){
    v_pageNumber = 0;
    v_pageNumberHasBeenSet = false;
    v_pageSize = 0;
    v_pageSizeHasBeenSet = false;
}

RequestBuilder DescribeCustomerGatewaysRequest::withRequestBuilder(RequestBuilder rb, const std::string &chain) const {
    rb.withQuery("Action","DescribeCustomerGateways");
    rb.withQuery("Version","2020-04-01");

    if(v_customerGatewayIdsHasBeenSet){
      unsigned v_customerGatewayIdsCount = 1;
      for(auto& item : v_customerGatewayIds){
        std::stringstream ss;
        ss << chain << "CustomerGatewayIds." << v_customerGatewayIdsCount;
        rb.withQuery(ss.str(), item);
        v_customerGatewayIdsCount ++;
      }
    }

    if(v_customerGatewayNameHasBeenSet){
        rb.withQuery(chain + "CustomerGatewayName", v_customerGatewayName);

    }

    if(v_ipAddressHasBeenSet){
        rb.withQuery(chain + "IpAddress", v_ipAddress);

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

    return rb;
}


