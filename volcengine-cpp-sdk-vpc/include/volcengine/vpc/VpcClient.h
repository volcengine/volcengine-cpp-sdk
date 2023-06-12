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
#ifndef VOLCENGINE_VPC_VPCCLIENT_H
#define VOLCENGINE_VPC_VPCCLIENT_H
#include <string>
#include <volcengine/core/ResultData.h>
#include <volcengine/core/VolcengineMetaData.h>
#include <volcengine/core/VolcengineClient.h>
#include "volcengine/vpc/model/AddBandwidthPackageIpRequest.h"
#include "volcengine/vpc/model/AddBandwidthPackageIpResult.h"
#include "volcengine/vpc/model/AllocateEipAddressRequest.h"
#include "volcengine/vpc/model/AllocateEipAddressResult.h"
#include "volcengine/vpc/model/AssignPrivateIpAddressesRequest.h"
#include "volcengine/vpc/model/AssignPrivateIpAddressesResult.h"
#include "volcengine/vpc/model/AssociateEipAddressRequest.h"
#include "volcengine/vpc/model/AssociateEipAddressResult.h"
#include "volcengine/vpc/model/AssociateHaVipRequest.h"
#include "volcengine/vpc/model/AssociateHaVipResult.h"
#include "volcengine/vpc/model/AssociateNetworkAclRequest.h"
#include "volcengine/vpc/model/AssociateNetworkAclResult.h"
#include "volcengine/vpc/model/AssociateRouteTableRequest.h"
#include "volcengine/vpc/model/AssociateRouteTableResult.h"
#include "volcengine/vpc/model/AssociateVpcCidrBlockRequest.h"
#include "volcengine/vpc/model/AssociateVpcCidrBlockResult.h"
#include "volcengine/vpc/model/AttachNetworkInterfaceRequest.h"
#include "volcengine/vpc/model/AttachNetworkInterfaceResult.h"
#include "volcengine/vpc/model/AuthorizeSecurityGroupEgressRequest.h"
#include "volcengine/vpc/model/AuthorizeSecurityGroupEgressResult.h"
#include "volcengine/vpc/model/AuthorizeSecurityGroupIngressRequest.h"
#include "volcengine/vpc/model/AuthorizeSecurityGroupIngressResult.h"
#include "volcengine/vpc/model/CreateBandwidthPackageRequest.h"
#include "volcengine/vpc/model/CreateBandwidthPackageResult.h"
#include "volcengine/vpc/model/CreateHaVipRequest.h"
#include "volcengine/vpc/model/CreateHaVipResult.h"
#include "volcengine/vpc/model/CreateNetworkAclRequest.h"
#include "volcengine/vpc/model/CreateNetworkAclResult.h"
#include "volcengine/vpc/model/CreateNetworkInterfaceRequest.h"
#include "volcengine/vpc/model/CreateNetworkInterfaceResult.h"
#include "volcengine/vpc/model/CreateRouteEntryRequest.h"
#include "volcengine/vpc/model/CreateRouteEntryResult.h"
#include "volcengine/vpc/model/CreateRouteTableRequest.h"
#include "volcengine/vpc/model/CreateRouteTableResult.h"
#include "volcengine/vpc/model/CreateSecurityGroupRequest.h"
#include "volcengine/vpc/model/CreateSecurityGroupResult.h"
#include "volcengine/vpc/model/CreateSubnetRequest.h"
#include "volcengine/vpc/model/CreateSubnetResult.h"
#include "volcengine/vpc/model/CreateVpcRequest.h"
#include "volcengine/vpc/model/CreateVpcResult.h"
#include "volcengine/vpc/model/DeleteBandwidthPackageRequest.h"
#include "volcengine/vpc/model/DeleteBandwidthPackageResult.h"
#include "volcengine/vpc/model/DeleteHaVipRequest.h"
#include "volcengine/vpc/model/DeleteHaVipResult.h"
#include "volcengine/vpc/model/DeleteNetworkAclRequest.h"
#include "volcengine/vpc/model/DeleteNetworkAclResult.h"
#include "volcengine/vpc/model/DeleteNetworkInterfaceRequest.h"
#include "volcengine/vpc/model/DeleteNetworkInterfaceResult.h"
#include "volcengine/vpc/model/DeleteRouteEntryRequest.h"
#include "volcengine/vpc/model/DeleteRouteEntryResult.h"
#include "volcengine/vpc/model/DeleteRouteTableRequest.h"
#include "volcengine/vpc/model/DeleteRouteTableResult.h"
#include "volcengine/vpc/model/DeleteSecurityGroupRequest.h"
#include "volcengine/vpc/model/DeleteSecurityGroupResult.h"
#include "volcengine/vpc/model/DeleteSubnetRequest.h"
#include "volcengine/vpc/model/DeleteSubnetResult.h"
#include "volcengine/vpc/model/DeleteVpcRequest.h"
#include "volcengine/vpc/model/DeleteVpcResult.h"
#include "volcengine/vpc/model/DescribeBandwidthPackagesRequest.h"
#include "volcengine/vpc/model/DescribeBandwidthPackagesResult.h"
#include "volcengine/vpc/model/DescribeEipAddressAttributesRequest.h"
#include "volcengine/vpc/model/DescribeEipAddressAttributesResult.h"
#include "volcengine/vpc/model/DescribeEipAddressesRequest.h"
#include "volcengine/vpc/model/DescribeEipAddressesResult.h"
#include "volcengine/vpc/model/DescribeHaVipsRequest.h"
#include "volcengine/vpc/model/DescribeHaVipsResult.h"
#include "volcengine/vpc/model/DescribeNetworkAclAttributesRequest.h"
#include "volcengine/vpc/model/DescribeNetworkAclAttributesResult.h"
#include "volcengine/vpc/model/DescribeNetworkAclsRequest.h"
#include "volcengine/vpc/model/DescribeNetworkAclsResult.h"
#include "volcengine/vpc/model/DescribeNetworkInterfaceAttributesRequest.h"
#include "volcengine/vpc/model/DescribeNetworkInterfaceAttributesResult.h"
#include "volcengine/vpc/model/DescribeNetworkInterfacesRequest.h"
#include "volcengine/vpc/model/DescribeNetworkInterfacesResult.h"
#include "volcengine/vpc/model/DescribeRouteEntryListRequest.h"
#include "volcengine/vpc/model/DescribeRouteEntryListResult.h"
#include "volcengine/vpc/model/DescribeRouteTableListRequest.h"
#include "volcengine/vpc/model/DescribeRouteTableListResult.h"
#include "volcengine/vpc/model/DescribeSecurityGroupAttributesRequest.h"
#include "volcengine/vpc/model/DescribeSecurityGroupAttributesResult.h"
#include "volcengine/vpc/model/DescribeSecurityGroupsRequest.h"
#include "volcengine/vpc/model/DescribeSecurityGroupsResult.h"
#include "volcengine/vpc/model/DescribeSubnetAttributesRequest.h"
#include "volcengine/vpc/model/DescribeSubnetAttributesResult.h"
#include "volcengine/vpc/model/DescribeSubnetsRequest.h"
#include "volcengine/vpc/model/DescribeSubnetsResult.h"
#include "volcengine/vpc/model/DescribeVpcAttributesRequest.h"
#include "volcengine/vpc/model/DescribeVpcAttributesResult.h"
#include "volcengine/vpc/model/DescribeVpcsRequest.h"
#include "volcengine/vpc/model/DescribeVpcsResult.h"
#include "volcengine/vpc/model/DetachNetworkInterfaceRequest.h"
#include "volcengine/vpc/model/DetachNetworkInterfaceResult.h"
#include "volcengine/vpc/model/DisassociateEipAddressRequest.h"
#include "volcengine/vpc/model/DisassociateEipAddressResult.h"
#include "volcengine/vpc/model/DisassociateHaVipRequest.h"
#include "volcengine/vpc/model/DisassociateHaVipResult.h"
#include "volcengine/vpc/model/DisassociateNetworkAclRequest.h"
#include "volcengine/vpc/model/DisassociateNetworkAclResult.h"
#include "volcengine/vpc/model/DisassociateRouteTableRequest.h"
#include "volcengine/vpc/model/DisassociateRouteTableResult.h"
#include "volcengine/vpc/model/DisassociateVpcCidrBlockRequest.h"
#include "volcengine/vpc/model/DisassociateVpcCidrBlockResult.h"
#include "volcengine/vpc/model/ListTagsForResourcesRequest.h"
#include "volcengine/vpc/model/ListTagsForResourcesResult.h"
#include "volcengine/vpc/model/ModifyBandwidthPackageAttributesRequest.h"
#include "volcengine/vpc/model/ModifyBandwidthPackageAttributesResult.h"
#include "volcengine/vpc/model/ModifyBandwidthPackageSpecRequest.h"
#include "volcengine/vpc/model/ModifyBandwidthPackageSpecResult.h"
#include "volcengine/vpc/model/ModifyEipAddressAttributesRequest.h"
#include "volcengine/vpc/model/ModifyEipAddressAttributesResult.h"
#include "volcengine/vpc/model/ModifyHaVipAttributesRequest.h"
#include "volcengine/vpc/model/ModifyHaVipAttributesResult.h"
#include "volcengine/vpc/model/ModifyNetworkAclAttributesRequest.h"
#include "volcengine/vpc/model/ModifyNetworkAclAttributesResult.h"
#include "volcengine/vpc/model/ModifyNetworkInterfaceAttributesRequest.h"
#include "volcengine/vpc/model/ModifyNetworkInterfaceAttributesResult.h"
#include "volcengine/vpc/model/ModifyRouteEntryRequest.h"
#include "volcengine/vpc/model/ModifyRouteEntryResult.h"
#include "volcengine/vpc/model/ModifyRouteTableAttributesRequest.h"
#include "volcengine/vpc/model/ModifyRouteTableAttributesResult.h"
#include "volcengine/vpc/model/ModifySecurityGroupAttributesRequest.h"
#include "volcengine/vpc/model/ModifySecurityGroupAttributesResult.h"
#include "volcengine/vpc/model/ModifySecurityGroupRuleDescriptionsEgressRequest.h"
#include "volcengine/vpc/model/ModifySecurityGroupRuleDescriptionsEgressResult.h"
#include "volcengine/vpc/model/ModifySecurityGroupRuleDescriptionsIngressRequest.h"
#include "volcengine/vpc/model/ModifySecurityGroupRuleDescriptionsIngressResult.h"
#include "volcengine/vpc/model/ModifySubnetAttributesRequest.h"
#include "volcengine/vpc/model/ModifySubnetAttributesResult.h"
#include "volcengine/vpc/model/ModifyVpcAttributesRequest.h"
#include "volcengine/vpc/model/ModifyVpcAttributesResult.h"
#include "volcengine/vpc/model/ReleaseEipAddressRequest.h"
#include "volcengine/vpc/model/ReleaseEipAddressResult.h"
#include "volcengine/vpc/model/RemoveBandwidthPackageIpRequest.h"
#include "volcengine/vpc/model/RemoveBandwidthPackageIpResult.h"
#include "volcengine/vpc/model/RevokeSecurityGroupEgressRequest.h"
#include "volcengine/vpc/model/RevokeSecurityGroupEgressResult.h"
#include "volcengine/vpc/model/RevokeSecurityGroupIngressRequest.h"
#include "volcengine/vpc/model/RevokeSecurityGroupIngressResult.h"
#include "volcengine/vpc/model/TagResourcesRequest.h"
#include "volcengine/vpc/model/TagResourcesResult.h"
#include "volcengine/vpc/model/UnassignPrivateIpAddressesRequest.h"
#include "volcengine/vpc/model/UnassignPrivateIpAddressesResult.h"
#include "volcengine/vpc/model/UntagResourcesRequest.h"
#include "volcengine/vpc/model/UntagResourcesResult.h"
#include "volcengine/vpc/model/UpdateNetworkAclEntriesRequest.h"
#include "volcengine/vpc/model/UpdateNetworkAclEntriesResult.h"
namespace volcengine{
    namespace vpc{
        class VpcClient {
        public:
            explicit VpcClient(const std::shared_ptr<VolcengineClientConfig> &config);

            ~VpcClient() = default;

            ResultData<VolcengineMetadata, AddBandwidthPackageIpResult> AddBandwidthPackageIp(const AddBandwidthPackageIpRequest &input) const;

            ResultData<VolcengineMetadata, AllocateEipAddressResult> AllocateEipAddress(const AllocateEipAddressRequest &input) const;

            ResultData<VolcengineMetadata, AssignPrivateIpAddressesResult> AssignPrivateIpAddresses(const AssignPrivateIpAddressesRequest &input) const;

            ResultData<VolcengineMetadata, AssociateEipAddressResult> AssociateEipAddress(const AssociateEipAddressRequest &input) const;

            ResultData<VolcengineMetadata, AssociateHaVipResult> AssociateHaVip(const AssociateHaVipRequest &input) const;

            ResultData<VolcengineMetadata, AssociateNetworkAclResult> AssociateNetworkAcl(const AssociateNetworkAclRequest &input) const;

            ResultData<VolcengineMetadata, AssociateRouteTableResult> AssociateRouteTable(const AssociateRouteTableRequest &input) const;

            ResultData<VolcengineMetadata, AssociateVpcCidrBlockResult> AssociateVpcCidrBlock(const AssociateVpcCidrBlockRequest &input) const;

            ResultData<VolcengineMetadata, AttachNetworkInterfaceResult> AttachNetworkInterface(const AttachNetworkInterfaceRequest &input) const;

            ResultData<VolcengineMetadata, AuthorizeSecurityGroupEgressResult> AuthorizeSecurityGroupEgress(const AuthorizeSecurityGroupEgressRequest &input) const;

            ResultData<VolcengineMetadata, AuthorizeSecurityGroupIngressResult> AuthorizeSecurityGroupIngress(const AuthorizeSecurityGroupIngressRequest &input) const;

            ResultData<VolcengineMetadata, CreateBandwidthPackageResult> CreateBandwidthPackage(const CreateBandwidthPackageRequest &input) const;

            ResultData<VolcengineMetadata, CreateHaVipResult> CreateHaVip(const CreateHaVipRequest &input) const;

            ResultData<VolcengineMetadata, CreateNetworkAclResult> CreateNetworkAcl(const CreateNetworkAclRequest &input) const;

            ResultData<VolcengineMetadata, CreateNetworkInterfaceResult> CreateNetworkInterface(const CreateNetworkInterfaceRequest &input) const;

            ResultData<VolcengineMetadata, CreateRouteEntryResult> CreateRouteEntry(const CreateRouteEntryRequest &input) const;

            ResultData<VolcengineMetadata, CreateRouteTableResult> CreateRouteTable(const CreateRouteTableRequest &input) const;

            ResultData<VolcengineMetadata, CreateSecurityGroupResult> CreateSecurityGroup(const CreateSecurityGroupRequest &input) const;

            ResultData<VolcengineMetadata, CreateSubnetResult> CreateSubnet(const CreateSubnetRequest &input) const;

            ResultData<VolcengineMetadata, CreateVpcResult> CreateVpc(const CreateVpcRequest &input) const;

            ResultData<VolcengineMetadata, DeleteBandwidthPackageResult> DeleteBandwidthPackage(const DeleteBandwidthPackageRequest &input) const;

            ResultData<VolcengineMetadata, DeleteHaVipResult> DeleteHaVip(const DeleteHaVipRequest &input) const;

            ResultData<VolcengineMetadata, DeleteNetworkAclResult> DeleteNetworkAcl(const DeleteNetworkAclRequest &input) const;

            ResultData<VolcengineMetadata, DeleteNetworkInterfaceResult> DeleteNetworkInterface(const DeleteNetworkInterfaceRequest &input) const;

            ResultData<VolcengineMetadata, DeleteRouteEntryResult> DeleteRouteEntry(const DeleteRouteEntryRequest &input) const;

            ResultData<VolcengineMetadata, DeleteRouteTableResult> DeleteRouteTable(const DeleteRouteTableRequest &input) const;

            ResultData<VolcengineMetadata, DeleteSecurityGroupResult> DeleteSecurityGroup(const DeleteSecurityGroupRequest &input) const;

            ResultData<VolcengineMetadata, DeleteSubnetResult> DeleteSubnet(const DeleteSubnetRequest &input) const;

            ResultData<VolcengineMetadata, DeleteVpcResult> DeleteVpc(const DeleteVpcRequest &input) const;

            ResultData<VolcengineMetadata, DescribeBandwidthPackagesResult> DescribeBandwidthPackages(const DescribeBandwidthPackagesRequest &input) const;

            ResultData<VolcengineMetadata, DescribeEipAddressAttributesResult> DescribeEipAddressAttributes(const DescribeEipAddressAttributesRequest &input) const;

            ResultData<VolcengineMetadata, DescribeEipAddressesResult> DescribeEipAddresses(const DescribeEipAddressesRequest &input) const;

            ResultData<VolcengineMetadata, DescribeHaVipsResult> DescribeHaVips(const DescribeHaVipsRequest &input) const;

            ResultData<VolcengineMetadata, DescribeNetworkAclAttributesResult> DescribeNetworkAclAttributes(const DescribeNetworkAclAttributesRequest &input) const;

            ResultData<VolcengineMetadata, DescribeNetworkAclsResult> DescribeNetworkAcls(const DescribeNetworkAclsRequest &input) const;

            ResultData<VolcengineMetadata, DescribeNetworkInterfaceAttributesResult> DescribeNetworkInterfaceAttributes(const DescribeNetworkInterfaceAttributesRequest &input) const;

            ResultData<VolcengineMetadata, DescribeNetworkInterfacesResult> DescribeNetworkInterfaces(const DescribeNetworkInterfacesRequest &input) const;

            ResultData<VolcengineMetadata, DescribeRouteEntryListResult> DescribeRouteEntryList(const DescribeRouteEntryListRequest &input) const;

            ResultData<VolcengineMetadata, DescribeRouteTableListResult> DescribeRouteTableList(const DescribeRouteTableListRequest &input) const;

            ResultData<VolcengineMetadata, DescribeSecurityGroupAttributesResult> DescribeSecurityGroupAttributes(const DescribeSecurityGroupAttributesRequest &input) const;

            ResultData<VolcengineMetadata, DescribeSecurityGroupsResult> DescribeSecurityGroups(const DescribeSecurityGroupsRequest &input) const;

            ResultData<VolcengineMetadata, DescribeSubnetAttributesResult> DescribeSubnetAttributes(const DescribeSubnetAttributesRequest &input) const;

            ResultData<VolcengineMetadata, DescribeSubnetsResult> DescribeSubnets(const DescribeSubnetsRequest &input) const;

            ResultData<VolcengineMetadata, DescribeVpcAttributesResult> DescribeVpcAttributes(const DescribeVpcAttributesRequest &input) const;

            ResultData<VolcengineMetadata, DescribeVpcsResult> DescribeVpcs(const DescribeVpcsRequest &input) const;

            ResultData<VolcengineMetadata, DetachNetworkInterfaceResult> DetachNetworkInterface(const DetachNetworkInterfaceRequest &input) const;

            ResultData<VolcengineMetadata, DisassociateEipAddressResult> DisassociateEipAddress(const DisassociateEipAddressRequest &input) const;

            ResultData<VolcengineMetadata, DisassociateHaVipResult> DisassociateHaVip(const DisassociateHaVipRequest &input) const;

            ResultData<VolcengineMetadata, DisassociateNetworkAclResult> DisassociateNetworkAcl(const DisassociateNetworkAclRequest &input) const;

            ResultData<VolcengineMetadata, DisassociateRouteTableResult> DisassociateRouteTable(const DisassociateRouteTableRequest &input) const;

            ResultData<VolcengineMetadata, DisassociateVpcCidrBlockResult> DisassociateVpcCidrBlock(const DisassociateVpcCidrBlockRequest &input) const;

            ResultData<VolcengineMetadata, ListTagsForResourcesResult> ListTagsForResources(const ListTagsForResourcesRequest &input) const;

            ResultData<VolcengineMetadata, ModifyBandwidthPackageAttributesResult> ModifyBandwidthPackageAttributes(const ModifyBandwidthPackageAttributesRequest &input) const;

            ResultData<VolcengineMetadata, ModifyBandwidthPackageSpecResult> ModifyBandwidthPackageSpec(const ModifyBandwidthPackageSpecRequest &input) const;

            ResultData<VolcengineMetadata, ModifyEipAddressAttributesResult> ModifyEipAddressAttributes(const ModifyEipAddressAttributesRequest &input) const;

            ResultData<VolcengineMetadata, ModifyHaVipAttributesResult> ModifyHaVipAttributes(const ModifyHaVipAttributesRequest &input) const;

            ResultData<VolcengineMetadata, ModifyNetworkAclAttributesResult> ModifyNetworkAclAttributes(const ModifyNetworkAclAttributesRequest &input) const;

            ResultData<VolcengineMetadata, ModifyNetworkInterfaceAttributesResult> ModifyNetworkInterfaceAttributes(const ModifyNetworkInterfaceAttributesRequest &input) const;

            ResultData<VolcengineMetadata, ModifyRouteEntryResult> ModifyRouteEntry(const ModifyRouteEntryRequest &input) const;

            ResultData<VolcengineMetadata, ModifyRouteTableAttributesResult> ModifyRouteTableAttributes(const ModifyRouteTableAttributesRequest &input) const;

            ResultData<VolcengineMetadata, ModifySecurityGroupAttributesResult> ModifySecurityGroupAttributes(const ModifySecurityGroupAttributesRequest &input) const;

            ResultData<VolcengineMetadata, ModifySecurityGroupRuleDescriptionsEgressResult> ModifySecurityGroupRuleDescriptionsEgress(const ModifySecurityGroupRuleDescriptionsEgressRequest &input) const;

            ResultData<VolcengineMetadata, ModifySecurityGroupRuleDescriptionsIngressResult> ModifySecurityGroupRuleDescriptionsIngress(const ModifySecurityGroupRuleDescriptionsIngressRequest &input) const;

            ResultData<VolcengineMetadata, ModifySubnetAttributesResult> ModifySubnetAttributes(const ModifySubnetAttributesRequest &input) const;

            ResultData<VolcengineMetadata, ModifyVpcAttributesResult> ModifyVpcAttributes(const ModifyVpcAttributesRequest &input) const;

            ResultData<VolcengineMetadata, ReleaseEipAddressResult> ReleaseEipAddress(const ReleaseEipAddressRequest &input) const;

            ResultData<VolcengineMetadata, RemoveBandwidthPackageIpResult> RemoveBandwidthPackageIp(const RemoveBandwidthPackageIpRequest &input) const;

            ResultData<VolcengineMetadata, RevokeSecurityGroupEgressResult> RevokeSecurityGroupEgress(const RevokeSecurityGroupEgressRequest &input) const;

            ResultData<VolcengineMetadata, RevokeSecurityGroupIngressResult> RevokeSecurityGroupIngress(const RevokeSecurityGroupIngressRequest &input) const;

            ResultData<VolcengineMetadata, TagResourcesResult> TagResources(const TagResourcesRequest &input) const;

            ResultData<VolcengineMetadata, UnassignPrivateIpAddressesResult> UnassignPrivateIpAddresses(const UnassignPrivateIpAddressesRequest &input) const;

            ResultData<VolcengineMetadata, UntagResourcesResult> UntagResources(const UntagResourcesRequest &input) const;

            ResultData<VolcengineMetadata, UpdateNetworkAclEntriesResult> UpdateNetworkAclEntries(const UpdateNetworkAclEntriesRequest &input) const;

        private:
            std::shared_ptr<VolcengineClient> client_;
            std::string svc_ = "vpc";
        };
    }
}
#endif // !VOLCENGINE_VPC_VPCCLIENT_H