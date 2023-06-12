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
#ifndef VOLCENGINE_VPC_REMOVEBANDWIDTHPACKAGEIPREQUEST_H
#define VOLCENGINE_VPC_REMOVEBANDWIDTHPACKAGEIPREQUEST_H
#include <string>
#include <volcengine/core/RequestBuilder.h>

namespace volcengine{
    namespace vpc{
        class RemoveBandwidthPackageIpRequest {
        public:
            RemoveBandwidthPackageIpRequest();
            ~RemoveBandwidthPackageIpRequest() = default;

            RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain)const;

            const std::string &getAllocationId()const { return  v_allocationId; }
            bool AllocationIdHasBeenSet() const { return v_allocationIdHasBeenSet; }
            void setAllocationId(const std::string &s_allocationId ) {
                v_allocationId = s_allocationId;
                v_allocationIdHasBeenSet = true;
            }
            const std::string &getBandwidthPackageId()const { return  v_bandwidthPackageId; }
            bool BandwidthPackageIdHasBeenSet() const { return v_bandwidthPackageIdHasBeenSet; }
            void setBandwidthPackageId(const std::string &s_bandwidthPackageId ) {
                v_bandwidthPackageId = s_bandwidthPackageId;
                v_bandwidthPackageIdHasBeenSet = true;
            }
        private:
            std::string v_allocationId;
            bool v_allocationIdHasBeenSet;

            std::string v_bandwidthPackageId;
            bool v_bandwidthPackageIdHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_VPC_REMOVEBANDWIDTHPACKAGEIPREQUEST_H