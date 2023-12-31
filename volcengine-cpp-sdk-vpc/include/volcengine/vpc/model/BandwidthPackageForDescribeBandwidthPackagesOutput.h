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
#ifndef VOLCENGINE_VPC_BANDWIDTHPACKAGEFORDESCRIBEBANDWIDTHPACKAGESOUTPUT_H
#define VOLCENGINE_VPC_BANDWIDTHPACKAGEFORDESCRIBEBANDWIDTHPACKAGESOUTPUT_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/core/utils/json.hpp"
#include "volcengine/vpc/model/EipAddressForDescribeBandwidthPackagesOutput.h"
#include "volcengine/vpc/model/TagForDescribeBandwidthPackagesOutput.h"
namespace volcengine{
    namespace vpc{
        class BandwidthPackageForDescribeBandwidthPackagesOutput {
        public:
            BandwidthPackageForDescribeBandwidthPackagesOutput() = default;
            ~BandwidthPackageForDescribeBandwidthPackagesOutput() = default;
            void fromJsonString(const std::string &input);
            const int getBandwidth() const { return  v_bandwidth; }
            void setBandwidth(const int s_bandwidth ) {
                v_bandwidth = s_bandwidth;
            }
            const std::string &getBandwidthPackageId() const { return  v_bandwidthPackageId; }
            void setBandwidthPackageId(const std::string &s_bandwidthPackageId ) {
                v_bandwidthPackageId = s_bandwidthPackageId;
            }
            const std::string &getBandwidthPackageName() const { return  v_bandwidthPackageName; }
            void setBandwidthPackageName(const std::string &s_bandwidthPackageName ) {
                v_bandwidthPackageName = s_bandwidthPackageName;
            }
            const int getBillingType() const { return  v_billingType; }
            void setBillingType(const int s_billingType ) {
                v_billingType = s_billingType;
            }
            const std::string &getBusinessStatus() const { return  v_businessStatus; }
            void setBusinessStatus(const std::string &s_businessStatus ) {
                v_businessStatus = s_businessStatus;
            }
            const std::string &getCreationTime() const { return  v_creationTime; }
            void setCreationTime(const std::string &s_creationTime ) {
                v_creationTime = s_creationTime;
            }
            const std::string &getDeletedTime() const { return  v_deletedTime; }
            void setDeletedTime(const std::string &s_deletedTime ) {
                v_deletedTime = s_deletedTime;
            }
            const std::string &getDescription() const { return  v_description; }
            void setDescription(const std::string &s_description ) {
                v_description = s_description;
            }
            const std::vector<EipAddressForDescribeBandwidthPackagesOutput> &getEipAddresses() const { return  v_eipAddresses; }
            void setEipAddresses(const std::vector<EipAddressForDescribeBandwidthPackagesOutput> &s_eipAddresses ) {
                v_eipAddresses = s_eipAddresses;
            }
            const std::string &getISP() const { return  v_iSP; }
            void setISP(const std::string &s_iSP ) {
                v_iSP = s_iSP;
            }
            const std::string &getOverdueTime() const { return  v_overdueTime; }
            void setOverdueTime(const std::string &s_overdueTime ) {
                v_overdueTime = s_overdueTime;
            }
            const std::string &getProjectName() const { return  v_projectName; }
            void setProjectName(const std::string &s_projectName ) {
                v_projectName = s_projectName;
            }
            const std::vector<std::string> &getSecurityProtectionTypes() const { return  v_securityProtectionTypes; }
            void setSecurityProtectionTypes(const std::vector<std::string> &s_securityProtectionTypes ) {
                v_securityProtectionTypes = s_securityProtectionTypes;
            }
            const std::string &getStatus() const { return  v_status; }
            void setStatus(const std::string &s_status ) {
                v_status = s_status;
            }
            const std::vector<TagForDescribeBandwidthPackagesOutput> &getTags() const { return  v_tags; }
            void setTags(const std::vector<TagForDescribeBandwidthPackagesOutput> &s_tags ) {
                v_tags = s_tags;
            }
            const std::string &getUpdateTime() const { return  v_updateTime; }
            void setUpdateTime(const std::string &s_updateTime ) {
                v_updateTime = s_updateTime;
            }
        private:
            int v_bandwidth{};
            std::string v_bandwidthPackageId;
            std::string v_bandwidthPackageName;
            int v_billingType{};
            std::string v_businessStatus;
            std::string v_creationTime;
            std::string v_deletedTime;
            std::string v_description;
            std::vector<EipAddressForDescribeBandwidthPackagesOutput> v_eipAddresses;
            std::string v_iSP;
            std::string v_overdueTime;
            std::string v_projectName;
            std::vector<std::string> v_securityProtectionTypes;
            std::string v_status;
            std::vector<TagForDescribeBandwidthPackagesOutput> v_tags;
            std::string v_updateTime;
        };
    }
}
#endif // !VOLCENGINE_VPC_BANDWIDTHPACKAGEFORDESCRIBEBANDWIDTHPACKAGESOUTPUT_H