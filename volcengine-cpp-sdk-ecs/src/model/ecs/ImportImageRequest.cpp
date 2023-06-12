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
#include "volcengine/ecs/model/ImportImageRequest.h"

using namespace volcengine;
using namespace volcengine::ecs;
ImportImageRequest::ImportImageRequest() = default;

RequestBuilder ImportImageRequest::withRequestBuilder(RequestBuilder rb, const std::string &chain) const {
    rb.withQuery("Action","ImportImage");
    rb.withQuery("Version","2020-04-01");

    if(v_architectureHasBeenSet){
        rb.withQuery(chain + "Architecture", v_architecture);

    }

    if(v_bootModeHasBeenSet){
        rb.withQuery(chain + "BootMode", v_bootMode);

    }

    if(v_descriptionHasBeenSet){
        rb.withQuery(chain + "Description", v_description);

    }

    if(v_imageNameHasBeenSet){
        rb.withQuery(chain + "ImageName", v_imageName);

    }

    if(v_osTypeHasBeenSet){
        rb.withQuery(chain + "OsType", v_osType);

    }

    if(v_platformHasBeenSet){
        rb.withQuery(chain + "Platform", v_platform);

    }

    if(v_platformVersionHasBeenSet){
        rb.withQuery(chain + "PlatformVersion", v_platformVersion);

    }

    if(v_projectNameHasBeenSet){
        rb.withQuery(chain + "ProjectName", v_projectName);

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

    if(v_urlHasBeenSet){
        rb.withQuery(chain + "Url", v_url);

    }

    return rb;
}

