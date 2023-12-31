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
#ifndef VOLCENGINE_CEN_DESCRIBECENSREQUEST_H
#define VOLCENGINE_CEN_DESCRIBECENSREQUEST_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/cen/model/TagFilterForDescribeCensInput.h"

namespace volcengine{
    namespace cen{
        class DescribeCensRequest {
        public:
            DescribeCensRequest();
            ~DescribeCensRequest() = default;

            RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain)const;

            const std::string &getCenIds()const { return  v_cenIds; }
            bool CenIdsHasBeenSet() const { return v_cenIdsHasBeenSet; }
            void setCenIds(const std::string &s_cenIds ) {
                v_cenIds = s_cenIds;
                v_cenIdsHasBeenSet = true;
            }
            const std::string &getCenName()const { return  v_cenName; }
            bool CenNameHasBeenSet() const { return v_cenNameHasBeenSet; }
            void setCenName(const std::string &s_cenName ) {
                v_cenName = s_cenName;
                v_cenNameHasBeenSet = true;
            }
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
            const std::vector<TagFilterForDescribeCensInput> &getTagFilters()const { return  v_tagFilters; }
            bool TagFiltersHasBeenSet() const { return v_tagFiltersHasBeenSet; }
            void setTagFilters(const std::vector<TagFilterForDescribeCensInput> &s_tagFilters ) {
                v_tagFilters = s_tagFilters;
                v_tagFiltersHasBeenSet = true;
            }
        private:
            std::string v_cenIds;
            bool v_cenIdsHasBeenSet;

            std::string v_cenName;
            bool v_cenNameHasBeenSet;

            int v_pageNumber;
            bool v_pageNumberHasBeenSet;

            int v_pageSize;
            bool v_pageSizeHasBeenSet;

            std::string v_projectName;
            bool v_projectNameHasBeenSet;

            std::vector<TagFilterForDescribeCensInput> v_tagFilters;
            bool v_tagFiltersHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_CEN_DESCRIBECENSREQUEST_H