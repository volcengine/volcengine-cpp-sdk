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
#ifndef VOLCENGINE_CEN_DESCRIBECENBANDWIDTHPACKAGESRESULT_H
#define VOLCENGINE_CEN_DESCRIBECENBANDWIDTHPACKAGESRESULT_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/core/utils/json.hpp"
#include "volcengine/cen/model/CenBandwidthPackageForDescribeCenBandwidthPackagesOutput.h"
namespace volcengine{
    namespace cen{
        class DescribeCenBandwidthPackagesResult {
        public:
            DescribeCenBandwidthPackagesResult() = default;
            ~DescribeCenBandwidthPackagesResult() = default;
            void fromJsonString(const std::string &input);
            const std::vector<CenBandwidthPackageForDescribeCenBandwidthPackagesOutput> &getCenBandwidthPackages() const { return  v_cenBandwidthPackages; }
            void setCenBandwidthPackages(const std::vector<CenBandwidthPackageForDescribeCenBandwidthPackagesOutput> &s_cenBandwidthPackages ) {
                v_cenBandwidthPackages = s_cenBandwidthPackages;
            }
            const int getPageNumber() const { return  v_pageNumber; }
            void setPageNumber(const int s_pageNumber ) {
                v_pageNumber = s_pageNumber;
            }
            const int getPageSize() const { return  v_pageSize; }
            void setPageSize(const int s_pageSize ) {
                v_pageSize = s_pageSize;
            }
            const int getTotalCount() const { return  v_totalCount; }
            void setTotalCount(const int s_totalCount ) {
                v_totalCount = s_totalCount;
            }
        private:
            std::vector<CenBandwidthPackageForDescribeCenBandwidthPackagesOutput> v_cenBandwidthPackages;
            int v_pageNumber{};
            int v_pageSize{};
            int v_totalCount{};
        };
    }
}
#endif // !VOLCENGINE_CEN_DESCRIBECENBANDWIDTHPACKAGESRESULT_H