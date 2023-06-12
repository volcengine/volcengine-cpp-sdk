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
#ifndef VOLCENGINE_CLB_CLBCLIENT_H
#define VOLCENGINE_CLB_CLBCLIENT_H
#include <string>
#include <volcengine/core/ResultData.h>
#include <volcengine/core/VolcengineMetaData.h>
#include <volcengine/core/VolcengineClient.h>
#include "volcengine/clb/model/AddAclEntriesRequest.h"
#include "volcengine/clb/model/AddAclEntriesResult.h"
#include "volcengine/clb/model/AddServerGroupBackendServersRequest.h"
#include "volcengine/clb/model/AddServerGroupBackendServersResult.h"
#include "volcengine/clb/model/AttachHealthCheckLogTopicRequest.h"
#include "volcengine/clb/model/AttachHealthCheckLogTopicResult.h"
#include "volcengine/clb/model/ConvertLoadBalancerBillingTypeRequest.h"
#include "volcengine/clb/model/ConvertLoadBalancerBillingTypeResult.h"
#include "volcengine/clb/model/CreateAclRequest.h"
#include "volcengine/clb/model/CreateAclResult.h"
#include "volcengine/clb/model/CreateHealthCheckLogProjectRequest.h"
#include "volcengine/clb/model/CreateHealthCheckLogProjectResult.h"
#include "volcengine/clb/model/CreateListenerRequest.h"
#include "volcengine/clb/model/CreateListenerResult.h"
#include "volcengine/clb/model/CreateLoadBalancerRequest.h"
#include "volcengine/clb/model/CreateLoadBalancerResult.h"
#include "volcengine/clb/model/CreateRulesRequest.h"
#include "volcengine/clb/model/CreateRulesResult.h"
#include "volcengine/clb/model/CreateServerGroupRequest.h"
#include "volcengine/clb/model/CreateServerGroupResult.h"
#include "volcengine/clb/model/DeleteAclRequest.h"
#include "volcengine/clb/model/DeleteAclResult.h"
#include "volcengine/clb/model/DeleteCertificateRequest.h"
#include "volcengine/clb/model/DeleteCertificateResult.h"
#include "volcengine/clb/model/DeleteHealthCheckLogProjectRequest.h"
#include "volcengine/clb/model/DeleteHealthCheckLogProjectResult.h"
#include "volcengine/clb/model/DeleteListenerRequest.h"
#include "volcengine/clb/model/DeleteListenerResult.h"
#include "volcengine/clb/model/DeleteLoadBalancerRequest.h"
#include "volcengine/clb/model/DeleteLoadBalancerResult.h"
#include "volcengine/clb/model/DeleteRulesRequest.h"
#include "volcengine/clb/model/DeleteRulesResult.h"
#include "volcengine/clb/model/DeleteServerGroupRequest.h"
#include "volcengine/clb/model/DeleteServerGroupResult.h"
#include "volcengine/clb/model/DescribeAclAttributesRequest.h"
#include "volcengine/clb/model/DescribeAclAttributesResult.h"
#include "volcengine/clb/model/DescribeAclsRequest.h"
#include "volcengine/clb/model/DescribeAclsResult.h"
#include "volcengine/clb/model/DescribeCertificatesRequest.h"
#include "volcengine/clb/model/DescribeCertificatesResult.h"
#include "volcengine/clb/model/DescribeHealthCheckLogProjectAttributesRequest.h"
#include "volcengine/clb/model/DescribeHealthCheckLogProjectAttributesResult.h"
#include "volcengine/clb/model/DescribeHealthCheckLogTopicAttributesRequest.h"
#include "volcengine/clb/model/DescribeHealthCheckLogTopicAttributesResult.h"
#include "volcengine/clb/model/DescribeListenerAttributesRequest.h"
#include "volcengine/clb/model/DescribeListenerAttributesResult.h"
#include "volcengine/clb/model/DescribeListenerHealthRequest.h"
#include "volcengine/clb/model/DescribeListenerHealthResult.h"
#include "volcengine/clb/model/DescribeListenersRequest.h"
#include "volcengine/clb/model/DescribeListenersResult.h"
#include "volcengine/clb/model/DescribeLoadBalancerAttributesRequest.h"
#include "volcengine/clb/model/DescribeLoadBalancerAttributesResult.h"
#include "volcengine/clb/model/DescribeLoadBalancersRequest.h"
#include "volcengine/clb/model/DescribeLoadBalancersResult.h"
#include "volcengine/clb/model/DescribeLoadBalancersBillingRequest.h"
#include "volcengine/clb/model/DescribeLoadBalancersBillingResult.h"
#include "volcengine/clb/model/DescribeRulesRequest.h"
#include "volcengine/clb/model/DescribeRulesResult.h"
#include "volcengine/clb/model/DescribeServerGroupAttributesRequest.h"
#include "volcengine/clb/model/DescribeServerGroupAttributesResult.h"
#include "volcengine/clb/model/DescribeServerGroupsRequest.h"
#include "volcengine/clb/model/DescribeServerGroupsResult.h"
#include "volcengine/clb/model/DescribeZonesRequest.h"
#include "volcengine/clb/model/DescribeZonesResult.h"
#include "volcengine/clb/model/DetachHealthCheckLogTopicRequest.h"
#include "volcengine/clb/model/DetachHealthCheckLogTopicResult.h"
#include "volcengine/clb/model/DisableAccessLogRequest.h"
#include "volcengine/clb/model/DisableAccessLogResult.h"
#include "volcengine/clb/model/EnableAccessLogRequest.h"
#include "volcengine/clb/model/EnableAccessLogResult.h"
#include "volcengine/clb/model/ListTagsForResourcesRequest.h"
#include "volcengine/clb/model/ListTagsForResourcesResult.h"
#include "volcengine/clb/model/ModifyAclAttributesRequest.h"
#include "volcengine/clb/model/ModifyAclAttributesResult.h"
#include "volcengine/clb/model/ModifyCertificateAttributesRequest.h"
#include "volcengine/clb/model/ModifyCertificateAttributesResult.h"
#include "volcengine/clb/model/ModifyListenerAttributesRequest.h"
#include "volcengine/clb/model/ModifyListenerAttributesResult.h"
#include "volcengine/clb/model/ModifyLoadBalancerAttributesRequest.h"
#include "volcengine/clb/model/ModifyLoadBalancerAttributesResult.h"
#include "volcengine/clb/model/ModifyRulesRequest.h"
#include "volcengine/clb/model/ModifyRulesResult.h"
#include "volcengine/clb/model/ModifyServerGroupAttributesRequest.h"
#include "volcengine/clb/model/ModifyServerGroupAttributesResult.h"
#include "volcengine/clb/model/RemoveAclEntriesRequest.h"
#include "volcengine/clb/model/RemoveAclEntriesResult.h"
#include "volcengine/clb/model/RemoveServerGroupBackendServersRequest.h"
#include "volcengine/clb/model/RemoveServerGroupBackendServersResult.h"
#include "volcengine/clb/model/RenewLoadBalancerRequest.h"
#include "volcengine/clb/model/RenewLoadBalancerResult.h"
#include "volcengine/clb/model/SetLoadBalancerRenewalRequest.h"
#include "volcengine/clb/model/SetLoadBalancerRenewalResult.h"
#include "volcengine/clb/model/TagResourcesRequest.h"
#include "volcengine/clb/model/TagResourcesResult.h"
#include "volcengine/clb/model/UntagResourcesRequest.h"
#include "volcengine/clb/model/UntagResourcesResult.h"
#include "volcengine/clb/model/UploadCertificateRequest.h"
#include "volcengine/clb/model/UploadCertificateResult.h"
namespace volcengine{
    namespace clb{
        class ClbClient {
        public:
            explicit ClbClient(const std::shared_ptr<VolcengineClientConfig> &config);

            ~ClbClient() = default;

            ResultData<VolcengineMetadata, AddAclEntriesResult> AddAclEntries(const AddAclEntriesRequest &input) const;

            ResultData<VolcengineMetadata, AddServerGroupBackendServersResult> AddServerGroupBackendServers(const AddServerGroupBackendServersRequest &input) const;

            ResultData<VolcengineMetadata, AttachHealthCheckLogTopicResult> AttachHealthCheckLogTopic(const AttachHealthCheckLogTopicRequest &input) const;

            ResultData<VolcengineMetadata, ConvertLoadBalancerBillingTypeResult> ConvertLoadBalancerBillingType(const ConvertLoadBalancerBillingTypeRequest &input) const;

            ResultData<VolcengineMetadata, CreateAclResult> CreateAcl(const CreateAclRequest &input) const;

            ResultData<VolcengineMetadata, CreateHealthCheckLogProjectResult> CreateHealthCheckLogProject(const CreateHealthCheckLogProjectRequest &input) const;

            ResultData<VolcengineMetadata, CreateListenerResult> CreateListener(const CreateListenerRequest &input) const;

            ResultData<VolcengineMetadata, CreateLoadBalancerResult> CreateLoadBalancer(const CreateLoadBalancerRequest &input) const;

            ResultData<VolcengineMetadata, CreateRulesResult> CreateRules(const CreateRulesRequest &input) const;

            ResultData<VolcengineMetadata, CreateServerGroupResult> CreateServerGroup(const CreateServerGroupRequest &input) const;

            ResultData<VolcengineMetadata, DeleteAclResult> DeleteAcl(const DeleteAclRequest &input) const;

            ResultData<VolcengineMetadata, DeleteCertificateResult> DeleteCertificate(const DeleteCertificateRequest &input) const;

            ResultData<VolcengineMetadata, DeleteHealthCheckLogProjectResult> DeleteHealthCheckLogProject(const DeleteHealthCheckLogProjectRequest &input) const;

            ResultData<VolcengineMetadata, DeleteListenerResult> DeleteListener(const DeleteListenerRequest &input) const;

            ResultData<VolcengineMetadata, DeleteLoadBalancerResult> DeleteLoadBalancer(const DeleteLoadBalancerRequest &input) const;

            ResultData<VolcengineMetadata, DeleteRulesResult> DeleteRules(const DeleteRulesRequest &input) const;

            ResultData<VolcengineMetadata, DeleteServerGroupResult> DeleteServerGroup(const DeleteServerGroupRequest &input) const;

            ResultData<VolcengineMetadata, DescribeAclAttributesResult> DescribeAclAttributes(const DescribeAclAttributesRequest &input) const;

            ResultData<VolcengineMetadata, DescribeAclsResult> DescribeAcls(const DescribeAclsRequest &input) const;

            ResultData<VolcengineMetadata, DescribeCertificatesResult> DescribeCertificates(const DescribeCertificatesRequest &input) const;

            ResultData<VolcengineMetadata, DescribeHealthCheckLogProjectAttributesResult> DescribeHealthCheckLogProjectAttributes(const DescribeHealthCheckLogProjectAttributesRequest &input) const;

            ResultData<VolcengineMetadata, DescribeHealthCheckLogTopicAttributesResult> DescribeHealthCheckLogTopicAttributes(const DescribeHealthCheckLogTopicAttributesRequest &input) const;

            ResultData<VolcengineMetadata, DescribeListenerAttributesResult> DescribeListenerAttributes(const DescribeListenerAttributesRequest &input) const;

            ResultData<VolcengineMetadata, DescribeListenerHealthResult> DescribeListenerHealth(const DescribeListenerHealthRequest &input) const;

            ResultData<VolcengineMetadata, DescribeListenersResult> DescribeListeners(const DescribeListenersRequest &input) const;

            ResultData<VolcengineMetadata, DescribeLoadBalancerAttributesResult> DescribeLoadBalancerAttributes(const DescribeLoadBalancerAttributesRequest &input) const;

            ResultData<VolcengineMetadata, DescribeLoadBalancersResult> DescribeLoadBalancers(const DescribeLoadBalancersRequest &input) const;

            ResultData<VolcengineMetadata, DescribeLoadBalancersBillingResult> DescribeLoadBalancersBilling(const DescribeLoadBalancersBillingRequest &input) const;

            ResultData<VolcengineMetadata, DescribeRulesResult> DescribeRules(const DescribeRulesRequest &input) const;

            ResultData<VolcengineMetadata, DescribeServerGroupAttributesResult> DescribeServerGroupAttributes(const DescribeServerGroupAttributesRequest &input) const;

            ResultData<VolcengineMetadata, DescribeServerGroupsResult> DescribeServerGroups(const DescribeServerGroupsRequest &input) const;

            ResultData<VolcengineMetadata, DescribeZonesResult> DescribeZones(const DescribeZonesRequest &input) const;

            ResultData<VolcengineMetadata, DetachHealthCheckLogTopicResult> DetachHealthCheckLogTopic(const DetachHealthCheckLogTopicRequest &input) const;

            ResultData<VolcengineMetadata, DisableAccessLogResult> DisableAccessLog(const DisableAccessLogRequest &input) const;

            ResultData<VolcengineMetadata, EnableAccessLogResult> EnableAccessLog(const EnableAccessLogRequest &input) const;

            ResultData<VolcengineMetadata, ListTagsForResourcesResult> ListTagsForResources(const ListTagsForResourcesRequest &input) const;

            ResultData<VolcengineMetadata, ModifyAclAttributesResult> ModifyAclAttributes(const ModifyAclAttributesRequest &input) const;

            ResultData<VolcengineMetadata, ModifyCertificateAttributesResult> ModifyCertificateAttributes(const ModifyCertificateAttributesRequest &input) const;

            ResultData<VolcengineMetadata, ModifyListenerAttributesResult> ModifyListenerAttributes(const ModifyListenerAttributesRequest &input) const;

            ResultData<VolcengineMetadata, ModifyLoadBalancerAttributesResult> ModifyLoadBalancerAttributes(const ModifyLoadBalancerAttributesRequest &input) const;

            ResultData<VolcengineMetadata, ModifyRulesResult> ModifyRules(const ModifyRulesRequest &input) const;

            ResultData<VolcengineMetadata, ModifyServerGroupAttributesResult> ModifyServerGroupAttributes(const ModifyServerGroupAttributesRequest &input) const;

            ResultData<VolcengineMetadata, RemoveAclEntriesResult> RemoveAclEntries(const RemoveAclEntriesRequest &input) const;

            ResultData<VolcengineMetadata, RemoveServerGroupBackendServersResult> RemoveServerGroupBackendServers(const RemoveServerGroupBackendServersRequest &input) const;

            ResultData<VolcengineMetadata, RenewLoadBalancerResult> RenewLoadBalancer(const RenewLoadBalancerRequest &input) const;

            ResultData<VolcengineMetadata, SetLoadBalancerRenewalResult> SetLoadBalancerRenewal(const SetLoadBalancerRenewalRequest &input) const;

            ResultData<VolcengineMetadata, TagResourcesResult> TagResources(const TagResourcesRequest &input) const;

            ResultData<VolcengineMetadata, UntagResourcesResult> UntagResources(const UntagResourcesRequest &input) const;

            ResultData<VolcengineMetadata, UploadCertificateResult> UploadCertificate(const UploadCertificateRequest &input) const;

        private:
            std::shared_ptr<VolcengineClient> client_;
            std::string svc_ = "clb";
        };
    }
}
#endif // !VOLCENGINE_CLB_CLBCLIENT_H