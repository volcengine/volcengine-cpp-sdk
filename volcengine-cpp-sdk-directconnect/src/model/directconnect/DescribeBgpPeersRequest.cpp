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
#include "volcengine/directconnect/model/DescribeBgpPeersRequest.h"

using namespace volcengine;
using namespace volcengine::directconnect;
DescribeBgpPeersRequest::DescribeBgpPeersRequest(){
    v_pageNumber = 0;
    v_pageNumberHasBeenSet = false;
    v_pageSize = 0;
    v_pageSizeHasBeenSet = false;
    v_remoteAsn = 0;
    v_remoteAsnHasBeenSet = false;
}

RequestBuilder DescribeBgpPeersRequest::withRequestBuilder(RequestBuilder rb, const std::string &chain) const {
    rb.withQuery("Action","DescribeBgpPeers");
    rb.withQuery("Version","2020-04-01");

    if(v_bgpPeerIdsHasBeenSet){
      unsigned v_bgpPeerIdsCount = 1;
      for(auto& item : v_bgpPeerIds){
        std::stringstream ss;
        ss << chain << "BgpPeerIds." << v_bgpPeerIdsCount;
        rb.withQuery(ss.str(), item);
        v_bgpPeerIdsCount ++;
      }
    }

    if(v_bgpPeerNameHasBeenSet){
        rb.withQuery(chain + "BgpPeerName", v_bgpPeerName);

    }

    if(v_directConnectGatewayIdHasBeenSet){
        rb.withQuery(chain + "DirectConnectGatewayId", v_directConnectGatewayId);

    }

    if(v_pageNumberHasBeenSet){
        rb.withQuery(chain + "PageNumber", std::to_string(v_pageNumber));

    }

    if(v_pageSizeHasBeenSet){
        rb.withQuery(chain + "PageSize", std::to_string(v_pageSize));

    }

    if(v_remoteAsnHasBeenSet){
        rb.withQuery(chain + "RemoteAsn", std::to_string(v_remoteAsn));

    }

    if(v_virtualInterfaceIdHasBeenSet){
        rb.withQuery(chain + "VirtualInterfaceId", v_virtualInterfaceId);

    }

    return rb;
}


