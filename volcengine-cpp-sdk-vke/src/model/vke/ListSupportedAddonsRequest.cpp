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
#include "volcengine/vke/model/ListSupportedAddonsRequest.h"

using namespace volcengine;
using namespace volcengine::vke;
using namespace nlohmann;
ListSupportedAddonsRequest::ListSupportedAddonsRequest() = default;

RequestBuilder ListSupportedAddonsRequest::withRequestBuilder(RequestBuilder rb, const std::string &chain) {
    rb.withQuery("Action","ListSupportedAddons");
    rb.withQuery("Version","2022-05-12");

    return rb;
}

json ListSupportedAddonsRequest::jsonPayload() const {
    json j;

    if(v_filterHasBeenSet){
      j["Filter"] = v_filter->jsonPayload();
    }
    return j;
}

