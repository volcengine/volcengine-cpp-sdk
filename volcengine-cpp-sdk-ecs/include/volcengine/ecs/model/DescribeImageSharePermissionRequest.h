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
#ifndef VOLCENGINE_ECS_DESCRIBEIMAGESHAREPERMISSIONREQUEST_H
#define VOLCENGINE_ECS_DESCRIBEIMAGESHAREPERMISSIONREQUEST_H
#include <string>
#include <volcengine/core/RequestBuilder.h>

namespace volcengine{
    namespace ecs{
        class DescribeImageSharePermissionRequest {
        public:
            DescribeImageSharePermissionRequest();
            ~DescribeImageSharePermissionRequest() = default;

            RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain)const;

            const std::string &getImageId()const { return  v_imageId; }
            bool ImageIdHasBeenSet() const { return v_imageIdHasBeenSet; }
            void setImageId(const std::string &s_imageId ) {
                v_imageId = s_imageId;
                v_imageIdHasBeenSet = true;
            }
            int getMaxResults()const { return  v_maxResults; }
            bool MaxResultsHasBeenSet() const { return v_maxResultsHasBeenSet; }
            void setMaxResults(const int s_maxResults ) {
                v_maxResults = s_maxResults;
                v_maxResultsHasBeenSet = true;
            }
            const std::string &getNextToken()const { return  v_nextToken; }
            bool NextTokenHasBeenSet() const { return v_nextTokenHasBeenSet; }
            void setNextToken(const std::string &s_nextToken ) {
                v_nextToken = s_nextToken;
                v_nextTokenHasBeenSet = true;
            }
        private:
            std::string v_imageId;
            bool v_imageIdHasBeenSet;

            int v_maxResults;
            bool v_maxResultsHasBeenSet;

            std::string v_nextToken;
            bool v_nextTokenHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_ECS_DESCRIBEIMAGESHAREPERMISSIONREQUEST_H