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
#ifndef VOLCENGINE_ECS_DESCRIBEKEYPAIRSREQUEST_H
#define VOLCENGINE_ECS_DESCRIBEKEYPAIRSREQUEST_H
#include <string>
#include <volcengine/core/RequestBuilder.h>

namespace volcengine{
    namespace ecs{
        class DescribeKeyPairsRequest {
        public:
            DescribeKeyPairsRequest();
            ~DescribeKeyPairsRequest() = default;

            RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain)const;

            const std::string &getFingerPrint()const { return  v_fingerPrint; }
            bool FingerPrintHasBeenSet() const { return v_fingerPrintHasBeenSet; }
            void setFingerPrint(const std::string &s_fingerPrint ) {
                v_fingerPrint = s_fingerPrint;
                v_fingerPrintHasBeenSet = true;
            }
            const std::vector<std::string> &getKeyPairIds()const { return  v_keyPairIds; }
            bool KeyPairIdsHasBeenSet() const { return v_keyPairIdsHasBeenSet; }
            void setKeyPairIds(const std::vector<std::string> &s_keyPairIds ) {
                v_keyPairIds = s_keyPairIds;
                v_keyPairIdsHasBeenSet = true;
            }
            const std::string &getKeyPairName()const { return  v_keyPairName; }
            bool KeyPairNameHasBeenSet() const { return v_keyPairNameHasBeenSet; }
            void setKeyPairName(const std::string &s_keyPairName ) {
                v_keyPairName = s_keyPairName;
                v_keyPairNameHasBeenSet = true;
            }
            const std::vector<std::string> &getKeyPairNames()const { return  v_keyPairNames; }
            bool KeyPairNamesHasBeenSet() const { return v_keyPairNamesHasBeenSet; }
            void setKeyPairNames(const std::vector<std::string> &s_keyPairNames ) {
                v_keyPairNames = s_keyPairNames;
                v_keyPairNamesHasBeenSet = true;
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
            const std::string &getProjectName()const { return  v_projectName; }
            bool ProjectNameHasBeenSet() const { return v_projectNameHasBeenSet; }
            void setProjectName(const std::string &s_projectName ) {
                v_projectName = s_projectName;
                v_projectNameHasBeenSet = true;
            }
        private:
            std::string v_fingerPrint;
            bool v_fingerPrintHasBeenSet;

            std::vector<std::string> v_keyPairIds;
            bool v_keyPairIdsHasBeenSet;

            std::string v_keyPairName;
            bool v_keyPairNameHasBeenSet;

            std::vector<std::string> v_keyPairNames;
            bool v_keyPairNamesHasBeenSet;

            int v_maxResults;
            bool v_maxResultsHasBeenSet;

            std::string v_nextToken;
            bool v_nextTokenHasBeenSet;

            std::string v_projectName;
            bool v_projectNameHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_ECS_DESCRIBEKEYPAIRSREQUEST_H