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
#include "volcengine/directconnect/model/CreateDirectConnectConnectionRequest.h"

using namespace volcengine;
using namespace volcengine::directconnect;
CreateDirectConnectConnectionRequest::CreateDirectConnectConnectionRequest(){
    v_bandwidth = 0;
    v_bandwidthHasBeenSet = false;
}

RequestBuilder CreateDirectConnectConnectionRequest::withRequestBuilder(RequestBuilder rb, const std::string &chain) const {
    rb.withQuery("Action","CreateDirectConnectConnection");
    rb.withQuery("Version","2020-04-01");

    if(v_bandwidthHasBeenSet){
        rb.withQuery(chain + "Bandwidth", std::to_string(v_bandwidth));

    }

    if(v_clientTokenHasBeenSet){
        rb.withQuery(chain + "ClientToken", v_clientToken);

    }

    if(v_customerContactEmailHasBeenSet){
        rb.withQuery(chain + "CustomerContactEmail", v_customerContactEmail);

    }

    if(v_customerContactPhoneHasBeenSet){
        rb.withQuery(chain + "CustomerContactPhone", v_customerContactPhone);

    }

    if(v_customerNameHasBeenSet){
        rb.withQuery(chain + "CustomerName", v_customerName);

    }

    if(v_descriptionHasBeenSet){
        rb.withQuery(chain + "Description", v_description);

    }

    if(v_directConnectAccessPointIdHasBeenSet){
        rb.withQuery(chain + "DirectConnectAccessPointId", v_directConnectAccessPointId);

    }

    if(v_directConnectConnectionNameHasBeenSet){
        rb.withQuery(chain + "DirectConnectConnectionName", v_directConnectConnectionName);

    }

    if(v_lineOperatorHasBeenSet){
        rb.withQuery(chain + "LineOperator", v_lineOperator);

    }

    if(v_peerLocationHasBeenSet){
        rb.withQuery(chain + "PeerLocation", v_peerLocation);

    }

    if(v_portSpecHasBeenSet){
        rb.withQuery(chain + "PortSpec", v_portSpec);

    }

    if(v_portTypeHasBeenSet){
        rb.withQuery(chain + "PortType", v_portType);

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

