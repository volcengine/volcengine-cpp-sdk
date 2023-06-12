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
#include "volcengine/storageebs/model/DescribeVolumesRequest.h"

using namespace volcengine;
using namespace volcengine::storageebs;
DescribeVolumesRequest::DescribeVolumesRequest(){
    v_pageNumber = 0;
    v_pageNumberHasBeenSet = false;
    v_pageSize = 0;
    v_pageSizeHasBeenSet = false;
}

RequestBuilder DescribeVolumesRequest::withRequestBuilder(RequestBuilder rb, const std::string &chain) const {
    rb.withQuery("Action","DescribeVolumes");
    rb.withQuery("Version","2020-04-01");

    if(v_instanceIdHasBeenSet){
        rb.withQuery(chain + "InstanceId", v_instanceId);

    }

    if(v_kindHasBeenSet){
        rb.withQuery(chain + "Kind", v_kind);

    }

    if(v_pageNumberHasBeenSet){
        rb.withQuery(chain + "PageNumber", std::to_string(v_pageNumber));

    }

    if(v_pageSizeHasBeenSet){
        rb.withQuery(chain + "PageSize", std::to_string(v_pageSize));

    }

    if(v_projectNameHasBeenSet){
        rb.withQuery(chain + "ProjectName", v_projectName);

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

    if(v_volumeIdsHasBeenSet){
      unsigned v_volumeIdsCount = 1;
      for(auto& item : v_volumeIds){
        std::stringstream ss;
        ss << chain << "VolumeIds." << v_volumeIdsCount;
        rb.withQuery(ss.str(), item);
        v_volumeIdsCount ++;
      }
    }

    if(v_volumeNameHasBeenSet){
        rb.withQuery(chain + "VolumeName", v_volumeName);

    }

    if(v_volumeStatusHasBeenSet){
        rb.withQuery(chain + "VolumeStatus", v_volumeStatus);

    }

    if(v_volumeTypeHasBeenSet){
        rb.withQuery(chain + "VolumeType", v_volumeType);

    }

    if(v_zoneIdHasBeenSet){
        rb.withQuery(chain + "ZoneId", v_zoneId);

    }

    return rb;
}


