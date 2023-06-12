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
#ifndef VOLCENGINE_VPC_DESCRIBEEIPADDRESSESRESULT_H
#define VOLCENGINE_VPC_DESCRIBEEIPADDRESSESRESULT_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/core/utils/json.hpp"
#include "volcengine/vpc/model/EipAddressForDescribeEipAddressesOutput.h"
namespace volcengine{
    namespace vpc{
        class DescribeEipAddressesResult {
        public:
            DescribeEipAddressesResult() = default;
            ~DescribeEipAddressesResult() = default;
            void fromJsonString(const std::string &input);
            const std::vector<EipAddressForDescribeEipAddressesOutput> &getEipAddresses() const { return  v_eipAddresses; }
            void setEipAddresses(const std::vector<EipAddressForDescribeEipAddressesOutput> &s_eipAddresses ) {
                v_eipAddresses = s_eipAddresses;
            }
            const int getPageNumber() const { return  v_pageNumber; }
            void setPageNumber(const int s_pageNumber ) {
                v_pageNumber = s_pageNumber;
            }
            const int getPageSize() const { return  v_pageSize; }
            void setPageSize(const int s_pageSize ) {
                v_pageSize = s_pageSize;
            }
            const std::string &getRequestId() const { return  v_requestId; }
            void setRequestId(const std::string &s_requestId ) {
                v_requestId = s_requestId;
            }
            const int getTotalCount() const { return  v_totalCount; }
            void setTotalCount(const int s_totalCount ) {
                v_totalCount = s_totalCount;
            }
        private:
            std::vector<EipAddressForDescribeEipAddressesOutput> v_eipAddresses;
            int v_pageNumber{};
            int v_pageSize{};
            std::string v_requestId;
            int v_totalCount{};
        };
    }
}
#endif // !VOLCENGINE_VPC_DESCRIBEEIPADDRESSESRESULT_H