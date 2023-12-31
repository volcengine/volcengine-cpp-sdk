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
#include "volcengine/directconnect/model/DescribeDirectConnectVirtualInterfacesRequest.h"

using namespace volcengine;
using namespace volcengine::directconnect;
DescribeDirectConnectVirtualInterfacesRequest::DescribeDirectConnectVirtualInterfacesRequest(){
    v_pageNumber = 0;
    v_pageNumberHasBeenSet = false;
    v_pageSize = 0;
    v_pageSizeHasBeenSet = false;
    v_vlanId = 0;
    v_vlanIdHasBeenSet = false;
}

RequestBuilder DescribeDirectConnectVirtualInterfacesRequest::withRequestBuilder(RequestBuilder rb, const std::string &chain) const {
    rb.withQuery("Action","DescribeDirectConnectVirtualInterfaces");
    rb.withQuery("Version","2020-04-01");

    if(v_directConnectConnectionIdHasBeenSet){
        rb.withQuery(chain + "DirectConnectConnectionId", v_directConnectConnectionId);

    }

    if(v_directConnectGatewayIdHasBeenSet){
        rb.withQuery(chain + "DirectConnectGatewayId", v_directConnectGatewayId);

    }

    if(v_localIpHasBeenSet){
        rb.withQuery(chain + "LocalIp", v_localIp);

    }

    if(v_pageNumberHasBeenSet){
        rb.withQuery(chain + "PageNumber", std::to_string(v_pageNumber));

    }

    if(v_pageSizeHasBeenSet){
        rb.withQuery(chain + "PageSize", std::to_string(v_pageSize));

    }

    if(v_peerIpHasBeenSet){
        rb.withQuery(chain + "PeerIp", v_peerIp);

    }

    if(v_routeTypeHasBeenSet){
        rb.withQuery(chain + "RouteType", v_routeType);

    }

    if(v_statusHasBeenSet){
        rb.withQuery(chain + "Status", v_status);

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

    if(v_virtualInterfaceIdsHasBeenSet){
      unsigned v_virtualInterfaceIdsCount = 1;
      for(auto& item : v_virtualInterfaceIds){
        std::stringstream ss;
        ss << chain << "VirtualInterfaceIds." << v_virtualInterfaceIdsCount;
        rb.withQuery(ss.str(), item);
        v_virtualInterfaceIdsCount ++;
      }
    }

    if(v_virtualInterfaceNameHasBeenSet){
        rb.withQuery(chain + "VirtualInterfaceName", v_virtualInterfaceName);

    }

    if(v_vlanIdHasBeenSet){
        rb.withQuery(chain + "VlanId", std::to_string(v_vlanId));

    }

    return rb;
}


