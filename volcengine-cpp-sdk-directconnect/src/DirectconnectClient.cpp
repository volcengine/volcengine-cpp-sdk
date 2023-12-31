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
#pragma once
#include <volcengine/core/VolcengineClient.h>
#include "volcengine/directconnect/DirectconnectClient.h"

using namespace volcengine;
using namespace volcengine::directconnect;

DirectconnectClient::DirectconnectClient(const std::shared_ptr<VolcengineClientConfig> &config) {
    client_ = std::make_shared<VolcengineClient>(config);
}


ResultData<VolcengineMetadata, CreateBgpPeerResult> DirectconnectClient::CreateBgpPeer(const CreateBgpPeerRequest &input) const{
    ResultData<VolcengineMetadata, CreateBgpPeerResult> result;
    auto rb = client_->initBuilder(svc_);
    rb = input.withRequestBuilder(rb,"");
    auto req = rb.Build(MethodGet);
    auto resp = client_->doCall(req);
    result.setMetadata(resp.getMetadata());
    if (!resp.isSuccess()) {
        result.setSuccess(false);
        return result;
    }
    auto output = std::make_shared<CreateBgpPeerResult>();
    output->fromJsonString(resp.getResult()->getResponseBody());
    result.setSuccess(true);
    result.setResult(output);
    return result;
}

ResultData<VolcengineMetadata, CreateDirectConnectConnectionResult> DirectconnectClient::CreateDirectConnectConnection(const CreateDirectConnectConnectionRequest &input) const{
    ResultData<VolcengineMetadata, CreateDirectConnectConnectionResult> result;
    auto rb = client_->initBuilder(svc_);
    rb = input.withRequestBuilder(rb,"");
    auto req = rb.Build(MethodGet);
    auto resp = client_->doCall(req);
    result.setMetadata(resp.getMetadata());
    if (!resp.isSuccess()) {
        result.setSuccess(false);
        return result;
    }
    auto output = std::make_shared<CreateDirectConnectConnectionResult>();
    output->fromJsonString(resp.getResult()->getResponseBody());
    result.setSuccess(true);
    result.setResult(output);
    return result;
}

ResultData<VolcengineMetadata, CreateDirectConnectConnectionOrderResult> DirectconnectClient::CreateDirectConnectConnectionOrder(const CreateDirectConnectConnectionOrderRequest &input) const{
    ResultData<VolcengineMetadata, CreateDirectConnectConnectionOrderResult> result;
    auto rb = client_->initBuilder(svc_);
    rb = input.withRequestBuilder(rb,"");
    auto req = rb.Build(MethodGet);
    auto resp = client_->doCall(req);
    result.setMetadata(resp.getMetadata());
    if (!resp.isSuccess()) {
        result.setSuccess(false);
        return result;
    }
    auto output = std::make_shared<CreateDirectConnectConnectionOrderResult>();
    output->fromJsonString(resp.getResult()->getResponseBody());
    result.setSuccess(true);
    result.setResult(output);
    return result;
}

ResultData<VolcengineMetadata, CreateDirectConnectGatewayResult> DirectconnectClient::CreateDirectConnectGateway(const CreateDirectConnectGatewayRequest &input) const{
    ResultData<VolcengineMetadata, CreateDirectConnectGatewayResult> result;
    auto rb = client_->initBuilder(svc_);
    rb = input.withRequestBuilder(rb,"");
    auto req = rb.Build(MethodGet);
    auto resp = client_->doCall(req);
    result.setMetadata(resp.getMetadata());
    if (!resp.isSuccess()) {
        result.setSuccess(false);
        return result;
    }
    auto output = std::make_shared<CreateDirectConnectGatewayResult>();
    output->fromJsonString(resp.getResult()->getResponseBody());
    result.setSuccess(true);
    result.setResult(output);
    return result;
}

ResultData<VolcengineMetadata, CreateDirectConnectGatewayRouteResult> DirectconnectClient::CreateDirectConnectGatewayRoute(const CreateDirectConnectGatewayRouteRequest &input) const{
    ResultData<VolcengineMetadata, CreateDirectConnectGatewayRouteResult> result;
    auto rb = client_->initBuilder(svc_);
    rb = input.withRequestBuilder(rb,"");
    auto req = rb.Build(MethodGet);
    auto resp = client_->doCall(req);
    result.setMetadata(resp.getMetadata());
    if (!resp.isSuccess()) {
        result.setSuccess(false);
        return result;
    }
    auto output = std::make_shared<CreateDirectConnectGatewayRouteResult>();
    output->fromJsonString(resp.getResult()->getResponseBody());
    result.setSuccess(true);
    result.setResult(output);
    return result;
}

ResultData<VolcengineMetadata, CreateDirectConnectVirtualInterfaceResult> DirectconnectClient::CreateDirectConnectVirtualInterface(const CreateDirectConnectVirtualInterfaceRequest &input) const{
    ResultData<VolcengineMetadata, CreateDirectConnectVirtualInterfaceResult> result;
    auto rb = client_->initBuilder(svc_);
    rb = input.withRequestBuilder(rb,"");
    auto req = rb.Build(MethodGet);
    auto resp = client_->doCall(req);
    result.setMetadata(resp.getMetadata());
    if (!resp.isSuccess()) {
        result.setSuccess(false);
        return result;
    }
    auto output = std::make_shared<CreateDirectConnectVirtualInterfaceResult>();
    output->fromJsonString(resp.getResult()->getResponseBody());
    result.setSuccess(true);
    result.setResult(output);
    return result;
}

ResultData<VolcengineMetadata, DeleteBgpPeerResult> DirectconnectClient::DeleteBgpPeer(const DeleteBgpPeerRequest &input) const{
    ResultData<VolcengineMetadata, DeleteBgpPeerResult> result;
    auto rb = client_->initBuilder(svc_);
    rb = input.withRequestBuilder(rb,"");
    auto req = rb.Build(MethodGet);
    auto resp = client_->doCall(req);
    result.setMetadata(resp.getMetadata());
    if (!resp.isSuccess()) {
        result.setSuccess(false);
        return result;
    }
    auto output = std::make_shared<DeleteBgpPeerResult>();
    output->fromJsonString(resp.getResult()->getResponseBody());
    result.setSuccess(true);
    result.setResult(output);
    return result;
}

ResultData<VolcengineMetadata, DeleteDirectConnectConnectionResult> DirectconnectClient::DeleteDirectConnectConnection(const DeleteDirectConnectConnectionRequest &input) const{
    ResultData<VolcengineMetadata, DeleteDirectConnectConnectionResult> result;
    auto rb = client_->initBuilder(svc_);
    rb = input.withRequestBuilder(rb,"");
    auto req = rb.Build(MethodGet);
    auto resp = client_->doCall(req);
    result.setMetadata(resp.getMetadata());
    if (!resp.isSuccess()) {
        result.setSuccess(false);
        return result;
    }
    auto output = std::make_shared<DeleteDirectConnectConnectionResult>();
    output->fromJsonString(resp.getResult()->getResponseBody());
    result.setSuccess(true);
    result.setResult(output);
    return result;
}

ResultData<VolcengineMetadata, DeleteDirectConnectGatewayResult> DirectconnectClient::DeleteDirectConnectGateway(const DeleteDirectConnectGatewayRequest &input) const{
    ResultData<VolcengineMetadata, DeleteDirectConnectGatewayResult> result;
    auto rb = client_->initBuilder(svc_);
    rb = input.withRequestBuilder(rb,"");
    auto req = rb.Build(MethodGet);
    auto resp = client_->doCall(req);
    result.setMetadata(resp.getMetadata());
    if (!resp.isSuccess()) {
        result.setSuccess(false);
        return result;
    }
    auto output = std::make_shared<DeleteDirectConnectGatewayResult>();
    output->fromJsonString(resp.getResult()->getResponseBody());
    result.setSuccess(true);
    result.setResult(output);
    return result;
}

ResultData<VolcengineMetadata, DeleteDirectConnectGatewayRouteResult> DirectconnectClient::DeleteDirectConnectGatewayRoute(const DeleteDirectConnectGatewayRouteRequest &input) const{
    ResultData<VolcengineMetadata, DeleteDirectConnectGatewayRouteResult> result;
    auto rb = client_->initBuilder(svc_);
    rb = input.withRequestBuilder(rb,"");
    auto req = rb.Build(MethodGet);
    auto resp = client_->doCall(req);
    result.setMetadata(resp.getMetadata());
    if (!resp.isSuccess()) {
        result.setSuccess(false);
        return result;
    }
    auto output = std::make_shared<DeleteDirectConnectGatewayRouteResult>();
    output->fromJsonString(resp.getResult()->getResponseBody());
    result.setSuccess(true);
    result.setResult(output);
    return result;
}

ResultData<VolcengineMetadata, DeleteDirectConnectVirtualInterfaceResult> DirectconnectClient::DeleteDirectConnectVirtualInterface(const DeleteDirectConnectVirtualInterfaceRequest &input) const{
    ResultData<VolcengineMetadata, DeleteDirectConnectVirtualInterfaceResult> result;
    auto rb = client_->initBuilder(svc_);
    rb = input.withRequestBuilder(rb,"");
    auto req = rb.Build(MethodGet);
    auto resp = client_->doCall(req);
    result.setMetadata(resp.getMetadata());
    if (!resp.isSuccess()) {
        result.setSuccess(false);
        return result;
    }
    auto output = std::make_shared<DeleteDirectConnectVirtualInterfaceResult>();
    output->fromJsonString(resp.getResult()->getResponseBody());
    result.setSuccess(true);
    result.setResult(output);
    return result;
}

ResultData<VolcengineMetadata, DescribeBgpPeerAttributesResult> DirectconnectClient::DescribeBgpPeerAttributes(const DescribeBgpPeerAttributesRequest &input) const{
    ResultData<VolcengineMetadata, DescribeBgpPeerAttributesResult> result;
    auto rb = client_->initBuilder(svc_);
    rb = input.withRequestBuilder(rb,"");
    auto req = rb.Build(MethodGet);
    auto resp = client_->doCall(req);
    result.setMetadata(resp.getMetadata());
    if (!resp.isSuccess()) {
        result.setSuccess(false);
        return result;
    }
    auto output = std::make_shared<DescribeBgpPeerAttributesResult>();
    output->fromJsonString(resp.getResult()->getResponseBody());
    result.setSuccess(true);
    result.setResult(output);
    return result;
}

ResultData<VolcengineMetadata, DescribeBgpPeersResult> DirectconnectClient::DescribeBgpPeers(const DescribeBgpPeersRequest &input) const{
    ResultData<VolcengineMetadata, DescribeBgpPeersResult> result;
    auto rb = client_->initBuilder(svc_);
    rb = input.withRequestBuilder(rb,"");
    auto req = rb.Build(MethodGet);
    auto resp = client_->doCall(req);
    result.setMetadata(resp.getMetadata());
    if (!resp.isSuccess()) {
        result.setSuccess(false);
        return result;
    }
    auto output = std::make_shared<DescribeBgpPeersResult>();
    output->fromJsonString(resp.getResult()->getResponseBody());
    result.setSuccess(true);
    result.setResult(output);
    return result;
}

ResultData<VolcengineMetadata, DescribeDirectConnectAccessPointsResult> DirectconnectClient::DescribeDirectConnectAccessPoints(const DescribeDirectConnectAccessPointsRequest &input) const{
    ResultData<VolcengineMetadata, DescribeDirectConnectAccessPointsResult> result;
    auto rb = client_->initBuilder(svc_);
    rb = input.withRequestBuilder(rb,"");
    auto req = rb.Build(MethodGet);
    auto resp = client_->doCall(req);
    result.setMetadata(resp.getMetadata());
    if (!resp.isSuccess()) {
        result.setSuccess(false);
        return result;
    }
    auto output = std::make_shared<DescribeDirectConnectAccessPointsResult>();
    output->fromJsonString(resp.getResult()->getResponseBody());
    result.setSuccess(true);
    result.setResult(output);
    return result;
}

ResultData<VolcengineMetadata, DescribeDirectConnectConnectionAttributesResult> DirectconnectClient::DescribeDirectConnectConnectionAttributes(const DescribeDirectConnectConnectionAttributesRequest &input) const{
    ResultData<VolcengineMetadata, DescribeDirectConnectConnectionAttributesResult> result;
    auto rb = client_->initBuilder(svc_);
    rb = input.withRequestBuilder(rb,"");
    auto req = rb.Build(MethodGet);
    auto resp = client_->doCall(req);
    result.setMetadata(resp.getMetadata());
    if (!resp.isSuccess()) {
        result.setSuccess(false);
        return result;
    }
    auto output = std::make_shared<DescribeDirectConnectConnectionAttributesResult>();
    output->fromJsonString(resp.getResult()->getResponseBody());
    result.setSuccess(true);
    result.setResult(output);
    return result;
}

ResultData<VolcengineMetadata, DescribeDirectConnectConnectionsResult> DirectconnectClient::DescribeDirectConnectConnections(const DescribeDirectConnectConnectionsRequest &input) const{
    ResultData<VolcengineMetadata, DescribeDirectConnectConnectionsResult> result;
    auto rb = client_->initBuilder(svc_);
    rb = input.withRequestBuilder(rb,"");
    auto req = rb.Build(MethodGet);
    auto resp = client_->doCall(req);
    result.setMetadata(resp.getMetadata());
    if (!resp.isSuccess()) {
        result.setSuccess(false);
        return result;
    }
    auto output = std::make_shared<DescribeDirectConnectConnectionsResult>();
    output->fromJsonString(resp.getResult()->getResponseBody());
    result.setSuccess(true);
    result.setResult(output);
    return result;
}

ResultData<VolcengineMetadata, DescribeDirectConnectGatewayAttributesResult> DirectconnectClient::DescribeDirectConnectGatewayAttributes(const DescribeDirectConnectGatewayAttributesRequest &input) const{
    ResultData<VolcengineMetadata, DescribeDirectConnectGatewayAttributesResult> result;
    auto rb = client_->initBuilder(svc_);
    rb = input.withRequestBuilder(rb,"");
    auto req = rb.Build(MethodGet);
    auto resp = client_->doCall(req);
    result.setMetadata(resp.getMetadata());
    if (!resp.isSuccess()) {
        result.setSuccess(false);
        return result;
    }
    auto output = std::make_shared<DescribeDirectConnectGatewayAttributesResult>();
    output->fromJsonString(resp.getResult()->getResponseBody());
    result.setSuccess(true);
    result.setResult(output);
    return result;
}

ResultData<VolcengineMetadata, DescribeDirectConnectGatewayRouteAttributesResult> DirectconnectClient::DescribeDirectConnectGatewayRouteAttributes(const DescribeDirectConnectGatewayRouteAttributesRequest &input) const{
    ResultData<VolcengineMetadata, DescribeDirectConnectGatewayRouteAttributesResult> result;
    auto rb = client_->initBuilder(svc_);
    rb = input.withRequestBuilder(rb,"");
    auto req = rb.Build(MethodGet);
    auto resp = client_->doCall(req);
    result.setMetadata(resp.getMetadata());
    if (!resp.isSuccess()) {
        result.setSuccess(false);
        return result;
    }
    auto output = std::make_shared<DescribeDirectConnectGatewayRouteAttributesResult>();
    output->fromJsonString(resp.getResult()->getResponseBody());
    result.setSuccess(true);
    result.setResult(output);
    return result;
}

ResultData<VolcengineMetadata, DescribeDirectConnectGatewayRoutesResult> DirectconnectClient::DescribeDirectConnectGatewayRoutes(const DescribeDirectConnectGatewayRoutesRequest &input) const{
    ResultData<VolcengineMetadata, DescribeDirectConnectGatewayRoutesResult> result;
    auto rb = client_->initBuilder(svc_);
    rb = input.withRequestBuilder(rb,"");
    auto req = rb.Build(MethodGet);
    auto resp = client_->doCall(req);
    result.setMetadata(resp.getMetadata());
    if (!resp.isSuccess()) {
        result.setSuccess(false);
        return result;
    }
    auto output = std::make_shared<DescribeDirectConnectGatewayRoutesResult>();
    output->fromJsonString(resp.getResult()->getResponseBody());
    result.setSuccess(true);
    result.setResult(output);
    return result;
}

ResultData<VolcengineMetadata, DescribeDirectConnectGatewaysResult> DirectconnectClient::DescribeDirectConnectGateways(const DescribeDirectConnectGatewaysRequest &input) const{
    ResultData<VolcengineMetadata, DescribeDirectConnectGatewaysResult> result;
    auto rb = client_->initBuilder(svc_);
    rb = input.withRequestBuilder(rb,"");
    auto req = rb.Build(MethodGet);
    auto resp = client_->doCall(req);
    result.setMetadata(resp.getMetadata());
    if (!resp.isSuccess()) {
        result.setSuccess(false);
        return result;
    }
    auto output = std::make_shared<DescribeDirectConnectGatewaysResult>();
    output->fromJsonString(resp.getResult()->getResponseBody());
    result.setSuccess(true);
    result.setResult(output);
    return result;
}

ResultData<VolcengineMetadata, DescribeDirectConnectVirtualInterfaceAttributesResult> DirectconnectClient::DescribeDirectConnectVirtualInterfaceAttributes(const DescribeDirectConnectVirtualInterfaceAttributesRequest &input) const{
    ResultData<VolcengineMetadata, DescribeDirectConnectVirtualInterfaceAttributesResult> result;
    auto rb = client_->initBuilder(svc_);
    rb = input.withRequestBuilder(rb,"");
    auto req = rb.Build(MethodGet);
    auto resp = client_->doCall(req);
    result.setMetadata(resp.getMetadata());
    if (!resp.isSuccess()) {
        result.setSuccess(false);
        return result;
    }
    auto output = std::make_shared<DescribeDirectConnectVirtualInterfaceAttributesResult>();
    output->fromJsonString(resp.getResult()->getResponseBody());
    result.setSuccess(true);
    result.setResult(output);
    return result;
}

ResultData<VolcengineMetadata, DescribeDirectConnectVirtualInterfacesResult> DirectconnectClient::DescribeDirectConnectVirtualInterfaces(const DescribeDirectConnectVirtualInterfacesRequest &input) const{
    ResultData<VolcengineMetadata, DescribeDirectConnectVirtualInterfacesResult> result;
    auto rb = client_->initBuilder(svc_);
    rb = input.withRequestBuilder(rb,"");
    auto req = rb.Build(MethodGet);
    auto resp = client_->doCall(req);
    result.setMetadata(resp.getMetadata());
    if (!resp.isSuccess()) {
        result.setSuccess(false);
        return result;
    }
    auto output = std::make_shared<DescribeDirectConnectVirtualInterfacesResult>();
    output->fromJsonString(resp.getResult()->getResponseBody());
    result.setSuccess(true);
    result.setResult(output);
    return result;
}

ResultData<VolcengineMetadata, ModifyBgpPeerAttributesResult> DirectconnectClient::ModifyBgpPeerAttributes(const ModifyBgpPeerAttributesRequest &input) const{
    ResultData<VolcengineMetadata, ModifyBgpPeerAttributesResult> result;
    auto rb = client_->initBuilder(svc_);
    rb = input.withRequestBuilder(rb,"");
    auto req = rb.Build(MethodGet);
    auto resp = client_->doCall(req);
    result.setMetadata(resp.getMetadata());
    if (!resp.isSuccess()) {
        result.setSuccess(false);
        return result;
    }
    auto output = std::make_shared<ModifyBgpPeerAttributesResult>();
    output->fromJsonString(resp.getResult()->getResponseBody());
    result.setSuccess(true);
    result.setResult(output);
    return result;
}

ResultData<VolcengineMetadata, ModifyDirectConnectConnectionAttributesResult> DirectconnectClient::ModifyDirectConnectConnectionAttributes(const ModifyDirectConnectConnectionAttributesRequest &input) const{
    ResultData<VolcengineMetadata, ModifyDirectConnectConnectionAttributesResult> result;
    auto rb = client_->initBuilder(svc_);
    rb = input.withRequestBuilder(rb,"");
    auto req = rb.Build(MethodGet);
    auto resp = client_->doCall(req);
    result.setMetadata(resp.getMetadata());
    if (!resp.isSuccess()) {
        result.setSuccess(false);
        return result;
    }
    auto output = std::make_shared<ModifyDirectConnectConnectionAttributesResult>();
    output->fromJsonString(resp.getResult()->getResponseBody());
    result.setSuccess(true);
    result.setResult(output);
    return result;
}

ResultData<VolcengineMetadata, ModifyDirectConnectGatewayAttributesResult> DirectconnectClient::ModifyDirectConnectGatewayAttributes(const ModifyDirectConnectGatewayAttributesRequest &input) const{
    ResultData<VolcengineMetadata, ModifyDirectConnectGatewayAttributesResult> result;
    auto rb = client_->initBuilder(svc_);
    rb = input.withRequestBuilder(rb,"");
    auto req = rb.Build(MethodGet);
    auto resp = client_->doCall(req);
    result.setMetadata(resp.getMetadata());
    if (!resp.isSuccess()) {
        result.setSuccess(false);
        return result;
    }
    auto output = std::make_shared<ModifyDirectConnectGatewayAttributesResult>();
    output->fromJsonString(resp.getResult()->getResponseBody());
    result.setSuccess(true);
    result.setResult(output);
    return result;
}

ResultData<VolcengineMetadata, ModifyDirectConnectVirtualInterfaceAttributesResult> DirectconnectClient::ModifyDirectConnectVirtualInterfaceAttributes(const ModifyDirectConnectVirtualInterfaceAttributesRequest &input) const{
    ResultData<VolcengineMetadata, ModifyDirectConnectVirtualInterfaceAttributesResult> result;
    auto rb = client_->initBuilder(svc_);
    rb = input.withRequestBuilder(rb,"");
    auto req = rb.Build(MethodGet);
    auto resp = client_->doCall(req);
    result.setMetadata(resp.getMetadata());
    if (!resp.isSuccess()) {
        result.setSuccess(false);
        return result;
    }
    auto output = std::make_shared<ModifyDirectConnectVirtualInterfaceAttributesResult>();
    output->fromJsonString(resp.getResult()->getResponseBody());
    result.setSuccess(true);
    result.setResult(output);
    return result;
}
