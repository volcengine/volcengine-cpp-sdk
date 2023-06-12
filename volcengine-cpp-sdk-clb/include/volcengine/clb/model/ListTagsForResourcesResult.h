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
#ifndef VOLCENGINE_CLB_LISTTAGSFORRESOURCESRESULT_H
#define VOLCENGINE_CLB_LISTTAGSFORRESOURCESRESULT_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/core/utils/json.hpp"
#include "volcengine/clb/model/ResourceTagForListTagsForResourcesOutput.h"
namespace volcengine{
    namespace clb{
        class ListTagsForResourcesResult {
        public:
            ListTagsForResourcesResult() = default;
            ~ListTagsForResourcesResult() = default;
            void fromJsonString(const std::string &input);
            const std::string &getNextToken() const { return  v_nextToken; }
            void setNextToken(const std::string &s_nextToken ) {
                v_nextToken = s_nextToken;
            }
            const std::string &getRequestId() const { return  v_requestId; }
            void setRequestId(const std::string &s_requestId ) {
                v_requestId = s_requestId;
            }
            const std::vector<ResourceTagForListTagsForResourcesOutput> &getResourceTags() const { return  v_resourceTags; }
            void setResourceTags(const std::vector<ResourceTagForListTagsForResourcesOutput> &s_resourceTags ) {
                v_resourceTags = s_resourceTags;
            }
        private:
            std::string v_nextToken;
            std::string v_requestId;
            std::vector<ResourceTagForListTagsForResourcesOutput> v_resourceTags;
        };
    }
}
#endif // !VOLCENGINE_CLB_LISTTAGSFORRESOURCESRESULT_H