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
#ifndef VOLCENGINE_VPC_DESCRIBEBANDWIDTHPACKAGESREQUEST_H
#define VOLCENGINE_VPC_DESCRIBEBANDWIDTHPACKAGESREQUEST_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/vpc/model/TagFilterForDescribeBandwidthPackagesInput.h"

namespace volcengine{
    namespace vpc{
        class DescribeBandwidthPackagesRequest {
        public:
            DescribeBandwidthPackagesRequest();
            ~DescribeBandwidthPackagesRequest() = default;

            RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain)const;

            const std::vector<std::string> &getBandwidthPackageIds()const { return  v_bandwidthPackageIds; }
            bool BandwidthPackageIdsHasBeenSet() const { return v_bandwidthPackageIdsHasBeenSet; }
            void setBandwidthPackageIds(const std::vector<std::string> &s_bandwidthPackageIds ) {
                v_bandwidthPackageIds = s_bandwidthPackageIds;
                v_bandwidthPackageIdsHasBeenSet = true;
            }
            const std::string &getBandwidthPackageName()const { return  v_bandwidthPackageName; }
            bool BandwidthPackageNameHasBeenSet() const { return v_bandwidthPackageNameHasBeenSet; }
            void setBandwidthPackageName(const std::string &s_bandwidthPackageName ) {
                v_bandwidthPackageName = s_bandwidthPackageName;
                v_bandwidthPackageNameHasBeenSet = true;
            }
            const std::string &getISP()const { return  v_iSP; }
            bool ISPHasBeenSet() const { return v_iSPHasBeenSet; }
            void setISP(const std::string &s_iSP ) {
                v_iSP = s_iSP;
                v_iSPHasBeenSet = true;
            }
            const std::string &getProjectName()const { return  v_projectName; }
            bool ProjectNameHasBeenSet() const { return v_projectNameHasBeenSet; }
            void setProjectName(const std::string &s_projectName ) {
                v_projectName = s_projectName;
                v_projectNameHasBeenSet = true;
            }
            bool isSecurityProtectionEnabled()const { return  v_securityProtectionEnabled; }
            bool SecurityProtectionEnabledHasBeenSet() const { return v_securityProtectionEnabledHasBeenSet; }
            void setSecurityProtectionEnabled(const bool s_securityProtectionEnabled ) {
                v_securityProtectionEnabled = s_securityProtectionEnabled;
                v_securityProtectionEnabledHasBeenSet = true;
            }
            const std::vector<TagFilterForDescribeBandwidthPackagesInput> &getTagFilters()const { return  v_tagFilters; }
            bool TagFiltersHasBeenSet() const { return v_tagFiltersHasBeenSet; }
            void setTagFilters(const std::vector<TagFilterForDescribeBandwidthPackagesInput> &s_tagFilters ) {
                v_tagFilters = s_tagFilters;
                v_tagFiltersHasBeenSet = true;
            }
        private:
            std::vector<std::string> v_bandwidthPackageIds;
            bool v_bandwidthPackageIdsHasBeenSet;

            std::string v_bandwidthPackageName;
            bool v_bandwidthPackageNameHasBeenSet;

            std::string v_iSP;
            bool v_iSPHasBeenSet;

            std::string v_projectName;
            bool v_projectNameHasBeenSet;

            bool v_securityProtectionEnabled;
            bool v_securityProtectionEnabledHasBeenSet;

            std::vector<TagFilterForDescribeBandwidthPackagesInput> v_tagFilters;
            bool v_tagFiltersHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_VPC_DESCRIBEBANDWIDTHPACKAGESREQUEST_H