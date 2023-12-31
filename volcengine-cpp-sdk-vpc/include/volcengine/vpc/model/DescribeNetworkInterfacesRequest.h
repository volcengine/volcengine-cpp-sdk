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
#ifndef VOLCENGINE_VPC_DESCRIBENETWORKINTERFACESREQUEST_H
#define VOLCENGINE_VPC_DESCRIBENETWORKINTERFACESREQUEST_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/vpc/model/TagFilterForDescribeNetworkInterfacesInput.h"

namespace volcengine{
    namespace vpc{
        class DescribeNetworkInterfacesRequest {
        public:
            DescribeNetworkInterfacesRequest();
            ~DescribeNetworkInterfacesRequest() = default;

            RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain)const;

            const std::string &getInstanceId()const { return  v_instanceId; }
            bool InstanceIdHasBeenSet() const { return v_instanceIdHasBeenSet; }
            void setInstanceId(const std::string &s_instanceId ) {
                v_instanceId = s_instanceId;
                v_instanceIdHasBeenSet = true;
            }
            const std::vector<std::string> &getNetworkInterfaceIds()const { return  v_networkInterfaceIds; }
            bool NetworkInterfaceIdsHasBeenSet() const { return v_networkInterfaceIdsHasBeenSet; }
            void setNetworkInterfaceIds(const std::vector<std::string> &s_networkInterfaceIds ) {
                v_networkInterfaceIds = s_networkInterfaceIds;
                v_networkInterfaceIdsHasBeenSet = true;
            }
            const std::string &getNetworkInterfaceName()const { return  v_networkInterfaceName; }
            bool NetworkInterfaceNameHasBeenSet() const { return v_networkInterfaceNameHasBeenSet; }
            void setNetworkInterfaceName(const std::string &s_networkInterfaceName ) {
                v_networkInterfaceName = s_networkInterfaceName;
                v_networkInterfaceNameHasBeenSet = true;
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
            const std::vector<std::string> &getPrimaryIpAddresses()const { return  v_primaryIpAddresses; }
            bool PrimaryIpAddressesHasBeenSet() const { return v_primaryIpAddressesHasBeenSet; }
            void setPrimaryIpAddresses(const std::vector<std::string> &s_primaryIpAddresses ) {
                v_primaryIpAddresses = s_primaryIpAddresses;
                v_primaryIpAddressesHasBeenSet = true;
            }
            const std::vector<std::string> &getPrivateIpAddresses()const { return  v_privateIpAddresses; }
            bool PrivateIpAddressesHasBeenSet() const { return v_privateIpAddressesHasBeenSet; }
            void setPrivateIpAddresses(const std::vector<std::string> &s_privateIpAddresses ) {
                v_privateIpAddresses = s_privateIpAddresses;
                v_privateIpAddressesHasBeenSet = true;
            }
            const std::string &getProjectName()const { return  v_projectName; }
            bool ProjectNameHasBeenSet() const { return v_projectNameHasBeenSet; }
            void setProjectName(const std::string &s_projectName ) {
                v_projectName = s_projectName;
                v_projectNameHasBeenSet = true;
            }
            const std::string &getSecurityGroupId()const { return  v_securityGroupId; }
            bool SecurityGroupIdHasBeenSet() const { return v_securityGroupIdHasBeenSet; }
            void setSecurityGroupId(const std::string &s_securityGroupId ) {
                v_securityGroupId = s_securityGroupId;
                v_securityGroupIdHasBeenSet = true;
            }
            const std::string &getStatus()const { return  v_status; }
            bool StatusHasBeenSet() const { return v_statusHasBeenSet; }
            void setStatus(const std::string &s_status ) {
                v_status = s_status;
                v_statusHasBeenSet = true;
            }
            const std::string &getSubnetId()const { return  v_subnetId; }
            bool SubnetIdHasBeenSet() const { return v_subnetIdHasBeenSet; }
            void setSubnetId(const std::string &s_subnetId ) {
                v_subnetId = s_subnetId;
                v_subnetIdHasBeenSet = true;
            }
            const std::vector<TagFilterForDescribeNetworkInterfacesInput> &getTagFilters()const { return  v_tagFilters; }
            bool TagFiltersHasBeenSet() const { return v_tagFiltersHasBeenSet; }
            void setTagFilters(const std::vector<TagFilterForDescribeNetworkInterfacesInput> &s_tagFilters ) {
                v_tagFilters = s_tagFilters;
                v_tagFiltersHasBeenSet = true;
            }
            const std::string &getType()const { return  v_type; }
            bool TypeHasBeenSet() const { return v_typeHasBeenSet; }
            void setType(const std::string &s_type ) {
                v_type = s_type;
                v_typeHasBeenSet = true;
            }
            const std::string &getVpcId()const { return  v_vpcId; }
            bool VpcIdHasBeenSet() const { return v_vpcIdHasBeenSet; }
            void setVpcId(const std::string &s_vpcId ) {
                v_vpcId = s_vpcId;
                v_vpcIdHasBeenSet = true;
            }
            const std::string &getZoneId()const { return  v_zoneId; }
            bool ZoneIdHasBeenSet() const { return v_zoneIdHasBeenSet; }
            void setZoneId(const std::string &s_zoneId ) {
                v_zoneId = s_zoneId;
                v_zoneIdHasBeenSet = true;
            }
        private:
            std::string v_instanceId;
            bool v_instanceIdHasBeenSet;

            std::vector<std::string> v_networkInterfaceIds;
            bool v_networkInterfaceIdsHasBeenSet;

            std::string v_networkInterfaceName;
            bool v_networkInterfaceNameHasBeenSet;

            int v_pageNumber;
            bool v_pageNumberHasBeenSet;

            int v_pageSize;
            bool v_pageSizeHasBeenSet;

            std::vector<std::string> v_primaryIpAddresses;
            bool v_primaryIpAddressesHasBeenSet;

            std::vector<std::string> v_privateIpAddresses;
            bool v_privateIpAddressesHasBeenSet;

            std::string v_projectName;
            bool v_projectNameHasBeenSet;

            std::string v_securityGroupId;
            bool v_securityGroupIdHasBeenSet;

            std::string v_status;
            bool v_statusHasBeenSet;

            std::string v_subnetId;
            bool v_subnetIdHasBeenSet;

            std::vector<TagFilterForDescribeNetworkInterfacesInput> v_tagFilters;
            bool v_tagFiltersHasBeenSet;

            std::string v_type;
            bool v_typeHasBeenSet;

            std::string v_vpcId;
            bool v_vpcIdHasBeenSet;

            std::string v_zoneId;
            bool v_zoneIdHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_VPC_DESCRIBENETWORKINTERFACESREQUEST_H