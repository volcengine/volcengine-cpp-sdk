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
#ifndef VOLCENGINE_VPC_DESCRIBESECURITYGROUPSREQUEST_H
#define VOLCENGINE_VPC_DESCRIBESECURITYGROUPSREQUEST_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/vpc/model/TagFilterForDescribeSecurityGroupsInput.h"

namespace volcengine{
    namespace vpc{
        class DescribeSecurityGroupsRequest {
        public:
            DescribeSecurityGroupsRequest();
            ~DescribeSecurityGroupsRequest() = default;

            RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain)const;

            int getPageNumber()const { return  v_pageNumber; }
            bool PageNumberHasBeenSet() const { return v_pageNumberHasBeenSet; }
            void setPageNumber(const int s_pageNumber ) {
                v_pageNumber = s_pageNumber;
                v_pageNumberHasBeenSet = true;
            }
            int getPageSize()const { return  v_pageSize; }
            bool PageSizeHasBeenSet() const { return v_pageSizeHasBeenSet; }
            void setPageSize(const int s_pageSize ) {
                v_pageSize = s_pageSize;
                v_pageSizeHasBeenSet = true;
            }
            const std::string &getProjectName()const { return  v_projectName; }
            bool ProjectNameHasBeenSet() const { return v_projectNameHasBeenSet; }
            void setProjectName(const std::string &s_projectName ) {
                v_projectName = s_projectName;
                v_projectNameHasBeenSet = true;
            }
            const std::vector<std::string> &getSecurityGroupIds()const { return  v_securityGroupIds; }
            bool SecurityGroupIdsHasBeenSet() const { return v_securityGroupIdsHasBeenSet; }
            void setSecurityGroupIds(const std::vector<std::string> &s_securityGroupIds ) {
                v_securityGroupIds = s_securityGroupIds;
                v_securityGroupIdsHasBeenSet = true;
            }
            const std::vector<std::string> &getSecurityGroupNames()const { return  v_securityGroupNames; }
            bool SecurityGroupNamesHasBeenSet() const { return v_securityGroupNamesHasBeenSet; }
            void setSecurityGroupNames(const std::vector<std::string> &s_securityGroupNames ) {
                v_securityGroupNames = s_securityGroupNames;
                v_securityGroupNamesHasBeenSet = true;
            }
            const std::vector<TagFilterForDescribeSecurityGroupsInput> &getTagFilters()const { return  v_tagFilters; }
            bool TagFiltersHasBeenSet() const { return v_tagFiltersHasBeenSet; }
            void setTagFilters(const std::vector<TagFilterForDescribeSecurityGroupsInput> &s_tagFilters ) {
                v_tagFilters = s_tagFilters;
                v_tagFiltersHasBeenSet = true;
            }
            const std::string &getVpcId()const { return  v_vpcId; }
            bool VpcIdHasBeenSet() const { return v_vpcIdHasBeenSet; }
            void setVpcId(const std::string &s_vpcId ) {
                v_vpcId = s_vpcId;
                v_vpcIdHasBeenSet = true;
            }
        private:
            int v_pageNumber;
            bool v_pageNumberHasBeenSet;

            int v_pageSize;
            bool v_pageSizeHasBeenSet;

            std::string v_projectName;
            bool v_projectNameHasBeenSet;

            std::vector<std::string> v_securityGroupIds;
            bool v_securityGroupIdsHasBeenSet;

            std::vector<std::string> v_securityGroupNames;
            bool v_securityGroupNamesHasBeenSet;

            std::vector<TagFilterForDescribeSecurityGroupsInput> v_tagFilters;
            bool v_tagFiltersHasBeenSet;

            std::string v_vpcId;
            bool v_vpcIdHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_VPC_DESCRIBESECURITYGROUPSREQUEST_H