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
#ifndef VOLCENGINE_VPN_VPNCLIENT_H
#define VOLCENGINE_VPN_VPNCLIENT_H
#include <string>
#include <volcengine/core/ResultData.h>
#include <volcengine/core/VolcengineMetaData.h>
#include <volcengine/core/VolcengineClient.h>
#include "volcengine/vpn/model/CreateCustomerGatewayRequest.h"
#include "volcengine/vpn/model/CreateCustomerGatewayResult.h"
#include "volcengine/vpn/model/CreateVpnConnectionRequest.h"
#include "volcengine/vpn/model/CreateVpnConnectionResult.h"
#include "volcengine/vpn/model/CreateVpnGatewayRequest.h"
#include "volcengine/vpn/model/CreateVpnGatewayResult.h"
#include "volcengine/vpn/model/CreateVpnGatewayRouteRequest.h"
#include "volcengine/vpn/model/CreateVpnGatewayRouteResult.h"
#include "volcengine/vpn/model/DeleteCustomerGatewayRequest.h"
#include "volcengine/vpn/model/DeleteCustomerGatewayResult.h"
#include "volcengine/vpn/model/DeleteVpnConnectionRequest.h"
#include "volcengine/vpn/model/DeleteVpnConnectionResult.h"
#include "volcengine/vpn/model/DeleteVpnGatewayRequest.h"
#include "volcengine/vpn/model/DeleteVpnGatewayResult.h"
#include "volcengine/vpn/model/DeleteVpnGatewayRouteRequest.h"
#include "volcengine/vpn/model/DeleteVpnGatewayRouteResult.h"
#include "volcengine/vpn/model/DescribeCustomerGatewayAttributesRequest.h"
#include "volcengine/vpn/model/DescribeCustomerGatewayAttributesResult.h"
#include "volcengine/vpn/model/DescribeCustomerGatewaysRequest.h"
#include "volcengine/vpn/model/DescribeCustomerGatewaysResult.h"
#include "volcengine/vpn/model/DescribeVpnConnectionAttributesRequest.h"
#include "volcengine/vpn/model/DescribeVpnConnectionAttributesResult.h"
#include "volcengine/vpn/model/DescribeVpnConnectionsRequest.h"
#include "volcengine/vpn/model/DescribeVpnConnectionsResult.h"
#include "volcengine/vpn/model/DescribeVpnGatewayAttributesRequest.h"
#include "volcengine/vpn/model/DescribeVpnGatewayAttributesResult.h"
#include "volcengine/vpn/model/DescribeVpnGatewayRouteAttributesRequest.h"
#include "volcengine/vpn/model/DescribeVpnGatewayRouteAttributesResult.h"
#include "volcengine/vpn/model/DescribeVpnGatewayRoutesRequest.h"
#include "volcengine/vpn/model/DescribeVpnGatewayRoutesResult.h"
#include "volcengine/vpn/model/DescribeVpnGatewaysRequest.h"
#include "volcengine/vpn/model/DescribeVpnGatewaysResult.h"
#include "volcengine/vpn/model/DescribeVpnGatewaysBillingRequest.h"
#include "volcengine/vpn/model/DescribeVpnGatewaysBillingResult.h"
#include "volcengine/vpn/model/ModifyCustomerGatewayAttributesRequest.h"
#include "volcengine/vpn/model/ModifyCustomerGatewayAttributesResult.h"
#include "volcengine/vpn/model/ModifyVpnConnectionAttributesRequest.h"
#include "volcengine/vpn/model/ModifyVpnConnectionAttributesResult.h"
#include "volcengine/vpn/model/ModifyVpnGatewayAttributesRequest.h"
#include "volcengine/vpn/model/ModifyVpnGatewayAttributesResult.h"
#include "volcengine/vpn/model/RenewVpnGatewayRequest.h"
#include "volcengine/vpn/model/RenewVpnGatewayResult.h"
#include "volcengine/vpn/model/SetVpnGatewayRenewalRequest.h"
#include "volcengine/vpn/model/SetVpnGatewayRenewalResult.h"
namespace volcengine{
    namespace vpn{
        class VpnClient {
        public:
            explicit VpnClient(const std::shared_ptr<VolcengineClientConfig> &config);

            ~VpnClient() = default;

            ResultData<VolcengineMetadata, CreateCustomerGatewayResult> CreateCustomerGateway(const CreateCustomerGatewayRequest &input) const;

            ResultData<VolcengineMetadata, CreateVpnConnectionResult> CreateVpnConnection(const CreateVpnConnectionRequest &input) const;

            ResultData<VolcengineMetadata, CreateVpnGatewayResult> CreateVpnGateway(const CreateVpnGatewayRequest &input) const;

            ResultData<VolcengineMetadata, CreateVpnGatewayRouteResult> CreateVpnGatewayRoute(const CreateVpnGatewayRouteRequest &input) const;

            ResultData<VolcengineMetadata, DeleteCustomerGatewayResult> DeleteCustomerGateway(const DeleteCustomerGatewayRequest &input) const;

            ResultData<VolcengineMetadata, DeleteVpnConnectionResult> DeleteVpnConnection(const DeleteVpnConnectionRequest &input) const;

            ResultData<VolcengineMetadata, DeleteVpnGatewayResult> DeleteVpnGateway(const DeleteVpnGatewayRequest &input) const;

            ResultData<VolcengineMetadata, DeleteVpnGatewayRouteResult> DeleteVpnGatewayRoute(const DeleteVpnGatewayRouteRequest &input) const;

            ResultData<VolcengineMetadata, DescribeCustomerGatewayAttributesResult> DescribeCustomerGatewayAttributes(const DescribeCustomerGatewayAttributesRequest &input) const;

            ResultData<VolcengineMetadata, DescribeCustomerGatewaysResult> DescribeCustomerGateways(const DescribeCustomerGatewaysRequest &input) const;

            ResultData<VolcengineMetadata, DescribeVpnConnectionAttributesResult> DescribeVpnConnectionAttributes(const DescribeVpnConnectionAttributesRequest &input) const;

            ResultData<VolcengineMetadata, DescribeVpnConnectionsResult> DescribeVpnConnections(const DescribeVpnConnectionsRequest &input) const;

            ResultData<VolcengineMetadata, DescribeVpnGatewayAttributesResult> DescribeVpnGatewayAttributes(const DescribeVpnGatewayAttributesRequest &input) const;

            ResultData<VolcengineMetadata, DescribeVpnGatewayRouteAttributesResult> DescribeVpnGatewayRouteAttributes(const DescribeVpnGatewayRouteAttributesRequest &input) const;

            ResultData<VolcengineMetadata, DescribeVpnGatewayRoutesResult> DescribeVpnGatewayRoutes(const DescribeVpnGatewayRoutesRequest &input) const;

            ResultData<VolcengineMetadata, DescribeVpnGatewaysResult> DescribeVpnGateways(const DescribeVpnGatewaysRequest &input) const;

            ResultData<VolcengineMetadata, DescribeVpnGatewaysBillingResult> DescribeVpnGatewaysBilling(const DescribeVpnGatewaysBillingRequest &input) const;

            ResultData<VolcengineMetadata, ModifyCustomerGatewayAttributesResult> ModifyCustomerGatewayAttributes(const ModifyCustomerGatewayAttributesRequest &input) const;

            ResultData<VolcengineMetadata, ModifyVpnConnectionAttributesResult> ModifyVpnConnectionAttributes(const ModifyVpnConnectionAttributesRequest &input) const;

            ResultData<VolcengineMetadata, ModifyVpnGatewayAttributesResult> ModifyVpnGatewayAttributes(const ModifyVpnGatewayAttributesRequest &input) const;

            ResultData<VolcengineMetadata, RenewVpnGatewayResult> RenewVpnGateway(const RenewVpnGatewayRequest &input) const;

            ResultData<VolcengineMetadata, SetVpnGatewayRenewalResult> SetVpnGatewayRenewal(const SetVpnGatewayRenewalRequest &input) const;

        private:
            std::shared_ptr<VolcengineClient> client_;
            std::string svc_ = "vpn";
        };
    }
}
#endif // !VOLCENGINE_VPN_VPNCLIENT_H