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
#include "volcengine/vpn/model/CreateVpnConnectionRequest.h"

using namespace volcengine;
using namespace volcengine::vpn;
CreateVpnConnectionRequest::CreateVpnConnectionRequest(){
    v_logEnabled = false;
    v_logEnabledHasBeenSet = false;
    v_natTraversal = false;
    v_natTraversalHasBeenSet = false;
    v_negotiateInstantly = false;
    v_negotiateInstantlyHasBeenSet = false;
}

RequestBuilder CreateVpnConnectionRequest::withRequestBuilder(RequestBuilder rb, const std::string &chain) const {
    rb.withQuery("Action","CreateVpnConnection");
    rb.withQuery("Version","2020-04-01");

    if(v_attachTypeHasBeenSet){
        rb.withQuery(chain + "AttachType", v_attachType);

    }

    if(v_clientTokenHasBeenSet){
        rb.withQuery(chain + "ClientToken", v_clientToken);

    }

    if(v_customerGatewayIdHasBeenSet){
        rb.withQuery(chain + "CustomerGatewayId", v_customerGatewayId);

    }

    if(v_descriptionHasBeenSet){
        rb.withQuery(chain + "Description", v_description);

    }

    if(v_dpdActionHasBeenSet){
        rb.withQuery(chain + "DpdAction", v_dpdAction);

    }

    if(v_ikeConfigHasBeenSet){
        rb.withQuery(chain + "IkeConfig", v_ikeConfig);

    }

    if(v_ipsecConfigHasBeenSet){
        rb.withQuery(chain + "IpsecConfig", v_ipsecConfig);

    }

    if(v_localSubnetHasBeenSet){
      unsigned v_localSubnetCount = 1;
      for(auto& item : v_localSubnet){
        std::stringstream ss;
        ss << chain << "LocalSubnet." << v_localSubnetCount;
        rb.withQuery(ss.str(), item);
        v_localSubnetCount ++;
      }
    }

    if(v_logEnabledHasBeenSet){
        rb.withQuery(chain + "LogEnabled", std::to_string(v_logEnabled));

    }

    if(v_natTraversalHasBeenSet){
        rb.withQuery(chain + "NatTraversal", std::to_string(v_natTraversal));

    }

    if(v_negotiateInstantlyHasBeenSet){
        rb.withQuery(chain + "NegotiateInstantly", std::to_string(v_negotiateInstantly));

    }

    if(v_projectNameHasBeenSet){
        rb.withQuery(chain + "ProjectName", v_projectName);

    }

    if(v_remoteSubnetHasBeenSet){
      unsigned v_remoteSubnetCount = 1;
      for(auto& item : v_remoteSubnet){
        std::stringstream ss;
        ss << chain << "RemoteSubnet." << v_remoteSubnetCount;
        rb.withQuery(ss.str(), item);
        v_remoteSubnetCount ++;
      }
    }

    if(v_vpnConnectionNameHasBeenSet){
        rb.withQuery(chain + "VpnConnectionName", v_vpnConnectionName);

    }

    if(v_vpnGatewayIdHasBeenSet){
        rb.withQuery(chain + "VpnGatewayId", v_vpnGatewayId);

    }

    return rb;
}

