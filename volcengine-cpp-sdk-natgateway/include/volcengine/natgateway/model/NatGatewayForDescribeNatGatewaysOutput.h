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
#ifndef VOLCENGINE_NATGATEWAY_NATGATEWAYFORDESCRIBENATGATEWAYSOUTPUT_H
#define VOLCENGINE_NATGATEWAY_NATGATEWAYFORDESCRIBENATGATEWAYSOUTPUT_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/core/utils/json.hpp"
#include "volcengine/natgateway/model/EipAddressForDescribeNatGatewaysOutput.h"
#include "volcengine/natgateway/model/TagForDescribeNatGatewaysOutput.h"
namespace volcengine{
    namespace natgateway{
        class NatGatewayForDescribeNatGatewaysOutput {
        public:
            NatGatewayForDescribeNatGatewaysOutput() = default;
            ~NatGatewayForDescribeNatGatewaysOutput() = default;
            void fromJsonString(const std::string &input);
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
            const std::vector<EipAddressForDescribeNatGatewaysOutput> &getEipAddresses() const { return  v_eipAddresses; }
            void setEipAddresses(const std::vector<EipAddressForDescribeNatGatewaysOutput> &s_eipAddresses ) {
                v_eipAddresses = s_eipAddresses;
            }
            const std::string &getExpiredTime() const { return  v_expiredTime; }
            void setExpiredTime(const std::string &s_expiredTime ) {
                v_expiredTime = s_expiredTime;
            }
            const std::string &getLockReason() const { return  v_lockReason; }
            void setLockReason(const std::string &s_lockReason ) {
                v_lockReason = s_lockReason;
            }
            const std::string &getNatGatewayId() const { return  v_natGatewayId; }
            void setNatGatewayId(const std::string &s_natGatewayId ) {
                v_natGatewayId = s_natGatewayId;
            }
            const std::string &getNatGatewayName() const { return  v_natGatewayName; }
            void setNatGatewayName(const std::string &s_natGatewayName ) {
                v_natGatewayName = s_natGatewayName;
            }
            const std::string &getNetworkInterfaceId() const { return  v_networkInterfaceId; }
            void setNetworkInterfaceId(const std::string &s_networkInterfaceId ) {
                v_networkInterfaceId = s_networkInterfaceId;
            }
            const std::string &getOverdueTime() const { return  v_overdueTime; }
            void setOverdueTime(const std::string &s_overdueTime ) {
                v_overdueTime = s_overdueTime;
            }
            const std::string &getProjectName() const { return  v_projectName; }
            void setProjectName(const std::string &s_projectName ) {
                v_projectName = s_projectName;
            }
            const std::string &getSpec() const { return  v_spec; }
            void setSpec(const std::string &s_spec ) {
                v_spec = s_spec;
            }
            const std::string &getStatus() const { return  v_status; }
            void setStatus(const std::string &s_status ) {
                v_status = s_status;
            }
            const std::string &getSubnetId() const { return  v_subnetId; }
            void setSubnetId(const std::string &s_subnetId ) {
                v_subnetId = s_subnetId;
            }
            const std::vector<TagForDescribeNatGatewaysOutput> &getTags() const { return  v_tags; }
            void setTags(const std::vector<TagForDescribeNatGatewaysOutput> &s_tags ) {
                v_tags = s_tags;
            }
            const std::string &getUpdatedAt() const { return  v_updatedAt; }
            void setUpdatedAt(const std::string &s_updatedAt ) {
                v_updatedAt = s_updatedAt;
            }
            const std::string &getVpcId() const { return  v_vpcId; }
            void setVpcId(const std::string &s_vpcId ) {
                v_vpcId = s_vpcId;
            }
            const std::string &getZoneId() const { return  v_zoneId; }
            void setZoneId(const std::string &s_zoneId ) {
                v_zoneId = s_zoneId;
            }
        private:
            int v_billingType{};
            std::string v_businessStatus;
            std::string v_creationTime;
            std::string v_deletedTime;
            std::string v_description;
            std::vector<EipAddressForDescribeNatGatewaysOutput> v_eipAddresses;
            std::string v_expiredTime;
            std::string v_lockReason;
            std::string v_natGatewayId;
            std::string v_natGatewayName;
            std::string v_networkInterfaceId;
            std::string v_overdueTime;
            std::string v_projectName;
            std::string v_spec;
            std::string v_status;
            std::string v_subnetId;
            std::vector<TagForDescribeNatGatewaysOutput> v_tags;
            std::string v_updatedAt;
            std::string v_vpcId;
            std::string v_zoneId;
        };
    }
}
#endif // !VOLCENGINE_NATGATEWAY_NATGATEWAYFORDESCRIBENATGATEWAYSOUTPUT_H