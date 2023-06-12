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
#include "volcengine/vpc/model/AssociateNetworkAclRequest.h"

using namespace volcengine;
using namespace volcengine::vpc;
AssociateNetworkAclRequest::AssociateNetworkAclRequest() = default;

RequestBuilder AssociateNetworkAclRequest::withRequestBuilder(RequestBuilder rb, const std::string &chain) const {
    rb.withQuery("Action","AssociateNetworkAcl");
    rb.withQuery("Version","2020-04-01");

    if(v_networkAclIdHasBeenSet){
        rb.withQuery(chain + "NetworkAclId", v_networkAclId);

    }

    if(v_resourceHasBeenSet){
      unsigned v_resourceCount = 1;
      for(auto& item : v_resource){
        std::stringstream ss;
        ss << chain << "Resource." << v_resourceCount;
        rb = item.withRequestBuilder(rb, ss.str()+".");
        v_resourceCount ++;
      }
    }

    return rb;
}


