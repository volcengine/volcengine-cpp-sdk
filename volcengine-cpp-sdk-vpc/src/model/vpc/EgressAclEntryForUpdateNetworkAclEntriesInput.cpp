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
#include "volcengine/vpc/model/EgressAclEntryForUpdateNetworkAclEntriesInput.h"

using namespace volcengine;
using namespace volcengine::vpc;
EgressAclEntryForUpdateNetworkAclEntriesInput::EgressAclEntryForUpdateNetworkAclEntriesInput() = default;

RequestBuilder EgressAclEntryForUpdateNetworkAclEntriesInput::withRequestBuilder(RequestBuilder rb, const std::string &chain) const {

    if(v_descriptionHasBeenSet){
        rb.withQuery(chain + "Description", v_description);

    }

    if(v_destinationCidrIpHasBeenSet){
        rb.withQuery(chain + "DestinationCidrIp", v_destinationCidrIp);

    }

    if(v_networkAclEntryIdHasBeenSet){
        rb.withQuery(chain + "NetworkAclEntryId", v_networkAclEntryId);

    }

    if(v_networkAclEntryNameHasBeenSet){
        rb.withQuery(chain + "NetworkAclEntryName", v_networkAclEntryName);

    }

    if(v_policyHasBeenSet){
        rb.withQuery(chain + "Policy", v_policy);

    }

    if(v_portHasBeenSet){
        rb.withQuery(chain + "Port", v_port);

    }

    if(v_protocolHasBeenSet){
        rb.withQuery(chain + "Protocol", v_protocol);

    }

    return rb;
}


