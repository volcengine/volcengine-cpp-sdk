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
#include "volcengine/cen/model/DescribeCenAttachedInstancesRequest.h"

using namespace volcengine;
using namespace volcengine::cen;
DescribeCenAttachedInstancesRequest::DescribeCenAttachedInstancesRequest(){
    v_pageNumber = 0;
    v_pageNumberHasBeenSet = false;
    v_pageSize = 0;
    v_pageSizeHasBeenSet = false;
}

RequestBuilder DescribeCenAttachedInstancesRequest::withRequestBuilder(RequestBuilder rb, const std::string &chain) const {
    rb.withQuery("Action","DescribeCenAttachedInstances");
    rb.withQuery("Version","2020-04-01");

    if(v_cenIdHasBeenSet){
        rb.withQuery(chain + "CenId", v_cenId);

    }

    if(v_instanceIdHasBeenSet){
        rb.withQuery(chain + "InstanceId", v_instanceId);

    }

    if(v_instanceRegionIdHasBeenSet){
        rb.withQuery(chain + "InstanceRegionId", v_instanceRegionId);

    }

    if(v_instanceTypeHasBeenSet){
        rb.withQuery(chain + "InstanceType", v_instanceType);

    }

    if(v_pageNumberHasBeenSet){
        rb.withQuery(chain + "PageNumber", std::to_string(v_pageNumber));

    }

    if(v_pageSizeHasBeenSet){
        rb.withQuery(chain + "PageSize", std::to_string(v_pageSize));

    }

    return rb;
}


