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
#include "volcengine/directconnect/model/DescribeDirectConnectConnectionsRequest.h"

using namespace volcengine;
using namespace volcengine::directconnect;
DescribeDirectConnectConnectionsRequest::DescribeDirectConnectConnectionsRequest(){
    v_pageNumber = 0;
    v_pageNumberHasBeenSet = false;
    v_pageSize = 0;
    v_pageSizeHasBeenSet = false;
}

RequestBuilder DescribeDirectConnectConnectionsRequest::withRequestBuilder(RequestBuilder rb, const std::string &chain) const {
    rb.withQuery("Action","DescribeDirectConnectConnections");
    rb.withQuery("Version","2020-04-01");

    if(v_accessPointHasBeenSet){
        rb.withQuery(chain + "AccessPoint", v_accessPoint);

    }

    if(v_connectionTypeHasBeenSet){
        rb.withQuery(chain + "ConnectionType", v_connectionType);

    }

    if(v_directConnectAccessPointIdHasBeenSet){
        rb.withQuery(chain + "DirectConnectAccessPointId", v_directConnectAccessPointId);

    }

    if(v_directConnectConnectionIdsHasBeenSet){
      unsigned v_directConnectConnectionIdsCount = 1;
      for(auto& item : v_directConnectConnectionIds){
        std::stringstream ss;
        ss << chain << "DirectConnectConnectionIds." << v_directConnectConnectionIdsCount;
        rb.withQuery(ss.str(), item);
        v_directConnectConnectionIdsCount ++;
      }
    }

    if(v_directConnectConnectionNameHasBeenSet){
        rb.withQuery(chain + "DirectConnectConnectionName", v_directConnectConnectionName);

    }

    if(v_lineOperatorHasBeenSet){
        rb.withQuery(chain + "LineOperator", v_lineOperator);

    }

    if(v_operatorHasBeenSet){
        rb.withQuery(chain + "Operator", v_operator);

    }

    if(v_pageNumberHasBeenSet){
        rb.withQuery(chain + "PageNumber", std::to_string(v_pageNumber));

    }

    if(v_pageSizeHasBeenSet){
        rb.withQuery(chain + "PageSize", std::to_string(v_pageSize));

    }

    if(v_peerLocationHasBeenSet){
        rb.withQuery(chain + "PeerLocation", v_peerLocation);

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


