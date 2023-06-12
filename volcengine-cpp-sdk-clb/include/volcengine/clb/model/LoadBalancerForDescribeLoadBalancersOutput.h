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
#ifndef VOLCENGINE_CLB_LOADBALANCERFORDESCRIBELOADBALANCERSOUTPUT_H
#define VOLCENGINE_CLB_LOADBALANCERFORDESCRIBELOADBALANCERSOUTPUT_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/core/utils/json.hpp"
#include "volcengine/clb/model/TagForDescribeLoadBalancersOutput.h"
namespace volcengine{
    namespace clb{
        class LoadBalancerForDescribeLoadBalancersOutput {
        public:
            LoadBalancerForDescribeLoadBalancersOutput() = default;
            ~LoadBalancerForDescribeLoadBalancersOutput() = default;
            void fromJsonString(const std::string &input);
            const std::string &getBusinessStatus() const { return  v_businessStatus; }
            void setBusinessStatus(const std::string &s_businessStatus ) {
                v_businessStatus = s_businessStatus;
            }
            const std::string &getCreateTime() const { return  v_createTime; }
            void setCreateTime(const std::string &s_createTime ) {
                v_createTime = s_createTime;
            }
            const std::string &getDeletedTime() const { return  v_deletedTime; }
            void setDeletedTime(const std::string &s_deletedTime ) {
                v_deletedTime = s_deletedTime;
            }
            const std::string &getDescription() const { return  v_description; }
            void setDescription(const std::string &s_description ) {
                v_description = s_description;
            }
            const std::string &getEipAddress() const { return  v_eipAddress; }
            void setEipAddress(const std::string &s_eipAddress ) {
                v_eipAddress = s_eipAddress;
            }
            const std::string &getEipID() const { return  v_eipID; }
            void setEipID(const std::string &s_eipID ) {
                v_eipID = s_eipID;
            }
            const std::string &getEniAddress() const { return  v_eniAddress; }
            void setEniAddress(const std::string &s_eniAddress ) {
                v_eniAddress = s_eniAddress;
            }
            const std::string &getEniID() const { return  v_eniID; }
            void setEniID(const std::string &s_eniID ) {
                v_eniID = s_eniID;
            }
            const std::string &getExpiredTime() const { return  v_expiredTime; }
            void setExpiredTime(const std::string &s_expiredTime ) {
                v_expiredTime = s_expiredTime;
            }
            const int getLoadBalancerBillingType() const { return  v_loadBalancerBillingType; }
            void setLoadBalancerBillingType(const int s_loadBalancerBillingType ) {
                v_loadBalancerBillingType = s_loadBalancerBillingType;
            }
            const std::string &getLoadBalancerId() const { return  v_loadBalancerId; }
            void setLoadBalancerId(const std::string &s_loadBalancerId ) {
                v_loadBalancerId = s_loadBalancerId;
            }
            const std::string &getLoadBalancerName() const { return  v_loadBalancerName; }
            void setLoadBalancerName(const std::string &s_loadBalancerName ) {
                v_loadBalancerName = s_loadBalancerName;
            }
            const std::string &getLoadBalancerSpec() const { return  v_loadBalancerSpec; }
            void setLoadBalancerSpec(const std::string &s_loadBalancerSpec ) {
                v_loadBalancerSpec = s_loadBalancerSpec;
            }
            const std::string &getLockReason() const { return  v_lockReason; }
            void setLockReason(const std::string &s_lockReason ) {
                v_lockReason = s_lockReason;
            }
            const std::string &getMasterZoneId() const { return  v_masterZoneId; }
            void setMasterZoneId(const std::string &s_masterZoneId ) {
                v_masterZoneId = s_masterZoneId;
            }
            const std::string &getModificationProtectionReason() const { return  v_modificationProtectionReason; }
            void setModificationProtectionReason(const std::string &s_modificationProtectionReason ) {
                v_modificationProtectionReason = s_modificationProtectionReason;
            }
            const std::string &getModificationProtectionStatus() const { return  v_modificationProtectionStatus; }
            void setModificationProtectionStatus(const std::string &s_modificationProtectionStatus ) {
                v_modificationProtectionStatus = s_modificationProtectionStatus;
            }
            const std::string &getOverdueTime() const { return  v_overdueTime; }
            void setOverdueTime(const std::string &s_overdueTime ) {
                v_overdueTime = s_overdueTime;
            }
            const std::string &getProjectName() const { return  v_projectName; }
            void setProjectName(const std::string &s_projectName ) {
                v_projectName = s_projectName;
            }
            const bool isServiceManaged() const { return  v_serviceManaged; }
            void setServiceManaged(const bool s_serviceManaged ) {
                v_serviceManaged = s_serviceManaged;
            }
            const std::string &getSlaveZoneId() const { return  v_slaveZoneId; }
            void setSlaveZoneId(const std::string &s_slaveZoneId ) {
                v_slaveZoneId = s_slaveZoneId;
            }
            const std::string &getStatus() const { return  v_status; }
            void setStatus(const std::string &s_status ) {
                v_status = s_status;
            }
            const std::string &getSubnetId() const { return  v_subnetId; }
            void setSubnetId(const std::string &s_subnetId ) {
                v_subnetId = s_subnetId;
            }
            const std::vector<TagForDescribeLoadBalancersOutput> &getTags() const { return  v_tags; }
            void setTags(const std::vector<TagForDescribeLoadBalancersOutput> &s_tags ) {
                v_tags = s_tags;
            }
            const std::string &getType() const { return  v_type; }
            void setType(const std::string &s_type ) {
                v_type = s_type;
            }
            const std::string &getUpdateTime() const { return  v_updateTime; }
            void setUpdateTime(const std::string &s_updateTime ) {
                v_updateTime = s_updateTime;
            }
            const std::string &getVpcId() const { return  v_vpcId; }
            void setVpcId(const std::string &s_vpcId ) {
                v_vpcId = s_vpcId;
            }
        private:
            std::string v_businessStatus;
            std::string v_createTime;
            std::string v_deletedTime;
            std::string v_description;
            std::string v_eipAddress;
            std::string v_eipID;
            std::string v_eniAddress;
            std::string v_eniID;
            std::string v_expiredTime;
            int v_loadBalancerBillingType{};
            std::string v_loadBalancerId;
            std::string v_loadBalancerName;
            std::string v_loadBalancerSpec;
            std::string v_lockReason;
            std::string v_masterZoneId;
            std::string v_modificationProtectionReason;
            std::string v_modificationProtectionStatus;
            std::string v_overdueTime;
            std::string v_projectName;
            bool v_serviceManaged{};
            std::string v_slaveZoneId;
            std::string v_status;
            std::string v_subnetId;
            std::vector<TagForDescribeLoadBalancersOutput> v_tags;
            std::string v_type;
            std::string v_updateTime;
            std::string v_vpcId;
        };
    }
}
#endif // !VOLCENGINE_CLB_LOADBALANCERFORDESCRIBELOADBALANCERSOUTPUT_H