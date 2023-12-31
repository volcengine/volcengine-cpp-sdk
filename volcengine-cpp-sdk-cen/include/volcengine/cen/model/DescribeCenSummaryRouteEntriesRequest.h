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
#ifndef VOLCENGINE_CEN_DESCRIBECENSUMMARYROUTEENTRIESREQUEST_H
#define VOLCENGINE_CEN_DESCRIBECENSUMMARYROUTEENTRIESREQUEST_H
#include <string>
#include <volcengine/core/RequestBuilder.h>

namespace volcengine{
    namespace cen{
        class DescribeCenSummaryRouteEntriesRequest {
        public:
            DescribeCenSummaryRouteEntriesRequest();
            ~DescribeCenSummaryRouteEntriesRequest() = default;

            RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain)const;

            const std::string &getCenId()const { return  v_cenId; }
            bool CenIdHasBeenSet() const { return v_cenIdHasBeenSet; }
            void setCenId(const std::string &s_cenId ) {
                v_cenId = s_cenId;
                v_cenIdHasBeenSet = true;
            }
            const std::string &getDestinationCidrBlock()const { return  v_destinationCidrBlock; }
            bool DestinationCidrBlockHasBeenSet() const { return v_destinationCidrBlockHasBeenSet; }
            void setDestinationCidrBlock(const std::string &s_destinationCidrBlock ) {
                v_destinationCidrBlock = s_destinationCidrBlock;
                v_destinationCidrBlockHasBeenSet = true;
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
        private:
            std::string v_cenId;
            bool v_cenIdHasBeenSet;

            std::string v_destinationCidrBlock;
            bool v_destinationCidrBlockHasBeenSet;

            int v_pageNumber;
            bool v_pageNumberHasBeenSet;

            int v_pageSize;
            bool v_pageSizeHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_CEN_DESCRIBECENSUMMARYROUTEENTRIESREQUEST_H