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
#include "volcengine/ecs/model/ModifyImageSharePermissionRequest.h"

using namespace volcengine;
using namespace volcengine::ecs;
ModifyImageSharePermissionRequest::ModifyImageSharePermissionRequest() = default;

RequestBuilder ModifyImageSharePermissionRequest::withRequestBuilder(RequestBuilder rb, const std::string &chain) const {
    rb.withQuery("Action","ModifyImageSharePermission");
    rb.withQuery("Version","2020-04-01");

    if(v_addAccountsHasBeenSet){
      unsigned v_addAccountsCount = 1;
      for(auto& item : v_addAccounts){
        std::stringstream ss;
        ss << chain << "AddAccounts." << v_addAccountsCount;
        rb.withQuery(ss.str(), item);
        v_addAccountsCount ++;
      }
    }

    if(v_imageIdHasBeenSet){
        rb.withQuery(chain + "ImageId", v_imageId);

    }

    if(v_removeAccountsHasBeenSet){
      unsigned v_removeAccountsCount = 1;
      for(auto& item : v_removeAccounts){
        std::stringstream ss;
        ss << chain << "RemoveAccounts." << v_removeAccountsCount;
        rb.withQuery(ss.str(), item);
        v_removeAccountsCount ++;
      }
    }

    return rb;
}


