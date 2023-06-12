cmake_minimum_required(VERSION 3.1)
project(volcengine-cpp-sdk-clb)

set(CMAKE_CXX_STANDARD 11)


set(VOLCENGINE_SDK_CLB_HEADER
    include/volcengine/clb/ClbClient.h
)

set(VOLCENGINE_SDK_CLB_HEADER_MODEL
                include/volcengine/clb/model/AccessLogForDescribeLoadBalancerAttributesOutput.h
                include/volcengine/clb/model/AclEntryForAddAclEntriesInput.h
                include/volcengine/clb/model/AclEntryForDescribeAclAttributesOutput.h
                include/volcengine/clb/model/AclForDescribeAclsOutput.h
                include/volcengine/clb/model/AddAclEntriesRequest.h
                include/volcengine/clb/model/AddAclEntriesResult.h
                include/volcengine/clb/model/AddServerGroupBackendServersRequest.h
                include/volcengine/clb/model/AddServerGroupBackendServersResult.h
                include/volcengine/clb/model/AttachHealthCheckLogTopicRequest.h
                include/volcengine/clb/model/AttachHealthCheckLogTopicResult.h
                include/volcengine/clb/model/CertificateForDescribeCertificatesOutput.h
                include/volcengine/clb/model/ConvertLoadBalancerBillingTypeRequest.h
                include/volcengine/clb/model/ConvertLoadBalancerBillingTypeResult.h
                include/volcengine/clb/model/CreateAclRequest.h
                include/volcengine/clb/model/CreateAclResult.h
                include/volcengine/clb/model/CreateHealthCheckLogProjectRequest.h
                include/volcengine/clb/model/CreateHealthCheckLogProjectResult.h
                include/volcengine/clb/model/CreateListenerRequest.h
                include/volcengine/clb/model/CreateListenerResult.h
                include/volcengine/clb/model/CreateLoadBalancerRequest.h
                include/volcengine/clb/model/CreateLoadBalancerResult.h
                include/volcengine/clb/model/CreateRulesRequest.h
                include/volcengine/clb/model/CreateRulesResult.h
                include/volcengine/clb/model/CreateServerGroupRequest.h
                include/volcengine/clb/model/CreateServerGroupResult.h
                include/volcengine/clb/model/DeleteAclRequest.h
                include/volcengine/clb/model/DeleteAclResult.h
                include/volcengine/clb/model/DeleteCertificateRequest.h
                include/volcengine/clb/model/DeleteCertificateResult.h
                include/volcengine/clb/model/DeleteHealthCheckLogProjectRequest.h
                include/volcengine/clb/model/DeleteHealthCheckLogProjectResult.h
                include/volcengine/clb/model/DeleteListenerRequest.h
                include/volcengine/clb/model/DeleteListenerResult.h
                include/volcengine/clb/model/DeleteLoadBalancerRequest.h
                include/volcengine/clb/model/DeleteLoadBalancerResult.h
                include/volcengine/clb/model/DeleteRulesRequest.h
                include/volcengine/clb/model/DeleteRulesResult.h
                include/volcengine/clb/model/DeleteServerGroupRequest.h
                include/volcengine/clb/model/DeleteServerGroupResult.h
                include/volcengine/clb/model/DescribeAclAttributesRequest.h
                include/volcengine/clb/model/DescribeAclAttributesResult.h
                include/volcengine/clb/model/DescribeAclsRequest.h
                include/volcengine/clb/model/DescribeAclsResult.h
                include/volcengine/clb/model/DescribeCertificatesRequest.h
                include/volcengine/clb/model/DescribeCertificatesResult.h
                include/volcengine/clb/model/DescribeHealthCheckLogProjectAttributesRequest.h
                include/volcengine/clb/model/DescribeHealthCheckLogProjectAttributesResult.h
                include/volcengine/clb/model/DescribeHealthCheckLogTopicAttributesRequest.h
                include/volcengine/clb/model/DescribeHealthCheckLogTopicAttributesResult.h
                include/volcengine/clb/model/DescribeListenerAttributesRequest.h
                include/volcengine/clb/model/DescribeListenerAttributesResult.h
                include/volcengine/clb/model/DescribeListenerHealthRequest.h
                include/volcengine/clb/model/DescribeListenerHealthResult.h
                include/volcengine/clb/model/DescribeListenersRequest.h
                include/volcengine/clb/model/DescribeListenersResult.h
                include/volcengine/clb/model/DescribeLoadBalancerAttributesRequest.h
                include/volcengine/clb/model/DescribeLoadBalancerAttributesResult.h
                include/volcengine/clb/model/DescribeLoadBalancersBillingRequest.h
                include/volcengine/clb/model/DescribeLoadBalancersBillingResult.h
                include/volcengine/clb/model/DescribeLoadBalancersRequest.h
                include/volcengine/clb/model/DescribeLoadBalancersResult.h
                include/volcengine/clb/model/DescribeRulesRequest.h
                include/volcengine/clb/model/DescribeRulesResult.h
                include/volcengine/clb/model/DescribeServerGroupAttributesRequest.h
                include/volcengine/clb/model/DescribeServerGroupAttributesResult.h
                include/volcengine/clb/model/DescribeServerGroupsRequest.h
                include/volcengine/clb/model/DescribeServerGroupsResult.h
                include/volcengine/clb/model/DescribeZonesRequest.h
                include/volcengine/clb/model/DescribeZonesResult.h
                include/volcengine/clb/model/DetachHealthCheckLogTopicRequest.h
                include/volcengine/clb/model/DetachHealthCheckLogTopicResult.h
                include/volcengine/clb/model/DisableAccessLogRequest.h
                include/volcengine/clb/model/DisableAccessLogResult.h
                include/volcengine/clb/model/EipBillingConfigForCreateLoadBalancerInput.h
                include/volcengine/clb/model/EipForDescribeLoadBalancerAttributesOutput.h
                include/volcengine/clb/model/EnableAccessLogRequest.h
                include/volcengine/clb/model/EnableAccessLogResult.h
                include/volcengine/clb/model/HealthCheckForCreateListenerInput.h
                include/volcengine/clb/model/HealthCheckForDescribeListenerAttributesOutput.h
                include/volcengine/clb/model/HealthCheckForDescribeListenersOutput.h
                include/volcengine/clb/model/HealthCheckForModifyListenerAttributesInput.h
                include/volcengine/clb/model/Ipv6AddressBandwidthForDescribeLoadBalancerAttributesOutput.h
                include/volcengine/clb/model/ListTagsForResourcesRequest.h
                include/volcengine/clb/model/ListTagsForResourcesResult.h
                include/volcengine/clb/model/ListenerForDescribeAclAttributesOutput.h
                include/volcengine/clb/model/ListenerForDescribeListenersOutput.h
                include/volcengine/clb/model/ListenerForDescribeLoadBalancerAttributesOutput.h
                include/volcengine/clb/model/LoadBalancerBillingConfigForDescribeLoadBalancersBillingOutput.h
                include/volcengine/clb/model/LoadBalancerForDescribeLoadBalancersOutput.h
                include/volcengine/clb/model/MasterZoneForDescribeZonesOutput.h
                include/volcengine/clb/model/ModifyAclAttributesRequest.h
                include/volcengine/clb/model/ModifyAclAttributesResult.h
                include/volcengine/clb/model/ModifyCertificateAttributesRequest.h
                include/volcengine/clb/model/ModifyCertificateAttributesResult.h
                include/volcengine/clb/model/ModifyListenerAttributesRequest.h
                include/volcengine/clb/model/ModifyListenerAttributesResult.h
                include/volcengine/clb/model/ModifyLoadBalancerAttributesRequest.h
                include/volcengine/clb/model/ModifyLoadBalancerAttributesResult.h
                include/volcengine/clb/model/ModifyRulesRequest.h
                include/volcengine/clb/model/ModifyRulesResult.h
                include/volcengine/clb/model/ModifyServerGroupAttributesRequest.h
                include/volcengine/clb/model/ModifyServerGroupAttributesResult.h
                include/volcengine/clb/model/RemoveAclEntriesRequest.h
                include/volcengine/clb/model/RemoveAclEntriesResult.h
                include/volcengine/clb/model/RemoveServerGroupBackendServersRequest.h
                include/volcengine/clb/model/RemoveServerGroupBackendServersResult.h
                include/volcengine/clb/model/RenewLoadBalancerRequest.h
                include/volcengine/clb/model/RenewLoadBalancerResult.h
                include/volcengine/clb/model/ResourceTagForListTagsForResourcesOutput.h
                include/volcengine/clb/model/ResultForDescribeListenerHealthOutput.h
                include/volcengine/clb/model/RuleForCreateRulesInput.h
                include/volcengine/clb/model/RuleForDescribeRulesOutput.h
                include/volcengine/clb/model/RuleForModifyRulesInput.h
                include/volcengine/clb/model/ServerForAddServerGroupBackendServersInput.h
                include/volcengine/clb/model/ServerForCreateServerGroupInput.h
                include/volcengine/clb/model/ServerForDescribeServerGroupAttributesOutput.h
                include/volcengine/clb/model/ServerForModifyServerGroupAttributesInput.h
                include/volcengine/clb/model/ServerGroupForDescribeLoadBalancerAttributesOutput.h
                include/volcengine/clb/model/ServerGroupForDescribeServerGroupsOutput.h
                include/volcengine/clb/model/SetLoadBalancerRenewalRequest.h
                include/volcengine/clb/model/SetLoadBalancerRenewalResult.h
                include/volcengine/clb/model/TagFilterForDescribeAclsInput.h
                include/volcengine/clb/model/TagFilterForDescribeCertificatesInput.h
                include/volcengine/clb/model/TagFilterForDescribeLoadBalancersInput.h
                include/volcengine/clb/model/TagFilterForListTagsForResourcesInput.h
                include/volcengine/clb/model/TagForCreateAclInput.h
                include/volcengine/clb/model/TagForCreateLoadBalancerInput.h
                include/volcengine/clb/model/TagForDescribeAclAttributesOutput.h
                include/volcengine/clb/model/TagForDescribeLoadBalancerAttributesOutput.h
                include/volcengine/clb/model/TagForDescribeLoadBalancersOutput.h
                include/volcengine/clb/model/TagForTagResourcesInput.h
                include/volcengine/clb/model/TagForUploadCertificateInput.h
                include/volcengine/clb/model/TagResourcesRequest.h
                include/volcengine/clb/model/TagResourcesResult.h
                include/volcengine/clb/model/UntagResourcesRequest.h
                include/volcengine/clb/model/UntagResourcesResult.h
                include/volcengine/clb/model/UploadCertificateRequest.h
                include/volcengine/clb/model/UploadCertificateResult.h
    )

set(VOLCENGINE_SDK_CLB_LIB
    src/ClbClient.cpp
    src/model/clb/AccessLogForDescribeLoadBalancerAttributesOutput.cpp
    src/model/clb/AclEntryForAddAclEntriesInput.cpp
    src/model/clb/AclEntryForDescribeAclAttributesOutput.cpp
    src/model/clb/AclForDescribeAclsOutput.cpp
    src/model/clb/AddAclEntriesRequest.cpp
    src/model/clb/AddAclEntriesResult.cpp
    src/model/clb/AddServerGroupBackendServersRequest.cpp
    src/model/clb/AddServerGroupBackendServersResult.cpp
    src/model/clb/AttachHealthCheckLogTopicRequest.cpp
    src/model/clb/AttachHealthCheckLogTopicResult.cpp
    src/model/clb/CertificateForDescribeCertificatesOutput.cpp
    src/model/clb/ConvertLoadBalancerBillingTypeRequest.cpp
    src/model/clb/ConvertLoadBalancerBillingTypeResult.cpp
    src/model/clb/CreateAclRequest.cpp
    src/model/clb/CreateAclResult.cpp
    src/model/clb/CreateHealthCheckLogProjectRequest.cpp
    src/model/clb/CreateHealthCheckLogProjectResult.cpp
    src/model/clb/CreateListenerRequest.cpp
    src/model/clb/CreateListenerResult.cpp
    src/model/clb/CreateLoadBalancerRequest.cpp
    src/model/clb/CreateLoadBalancerResult.cpp
    src/model/clb/CreateRulesRequest.cpp
    src/model/clb/CreateRulesResult.cpp
    src/model/clb/CreateServerGroupRequest.cpp
    src/model/clb/CreateServerGroupResult.cpp
    src/model/clb/DeleteAclRequest.cpp
    src/model/clb/DeleteAclResult.cpp
    src/model/clb/DeleteCertificateRequest.cpp
    src/model/clb/DeleteCertificateResult.cpp
    src/model/clb/DeleteHealthCheckLogProjectRequest.cpp
    src/model/clb/DeleteHealthCheckLogProjectResult.cpp
    src/model/clb/DeleteListenerRequest.cpp
    src/model/clb/DeleteListenerResult.cpp
    src/model/clb/DeleteLoadBalancerRequest.cpp
    src/model/clb/DeleteLoadBalancerResult.cpp
    src/model/clb/DeleteRulesRequest.cpp
    src/model/clb/DeleteRulesResult.cpp
    src/model/clb/DeleteServerGroupRequest.cpp
    src/model/clb/DeleteServerGroupResult.cpp
    src/model/clb/DescribeAclAttributesRequest.cpp
    src/model/clb/DescribeAclAttributesResult.cpp
    src/model/clb/DescribeAclsRequest.cpp
    src/model/clb/DescribeAclsResult.cpp
    src/model/clb/DescribeCertificatesRequest.cpp
    src/model/clb/DescribeCertificatesResult.cpp
    src/model/clb/DescribeHealthCheckLogProjectAttributesRequest.cpp
    src/model/clb/DescribeHealthCheckLogProjectAttributesResult.cpp
    src/model/clb/DescribeHealthCheckLogTopicAttributesRequest.cpp
    src/model/clb/DescribeHealthCheckLogTopicAttributesResult.cpp
    src/model/clb/DescribeListenerAttributesRequest.cpp
    src/model/clb/DescribeListenerAttributesResult.cpp
    src/model/clb/DescribeListenerHealthRequest.cpp
    src/model/clb/DescribeListenerHealthResult.cpp
    src/model/clb/DescribeListenersRequest.cpp
    src/model/clb/DescribeListenersResult.cpp
    src/model/clb/DescribeLoadBalancerAttributesRequest.cpp
    src/model/clb/DescribeLoadBalancerAttributesResult.cpp
    src/model/clb/DescribeLoadBalancersBillingRequest.cpp
    src/model/clb/DescribeLoadBalancersBillingResult.cpp
    src/model/clb/DescribeLoadBalancersRequest.cpp
    src/model/clb/DescribeLoadBalancersResult.cpp
    src/model/clb/DescribeRulesRequest.cpp
    src/model/clb/DescribeRulesResult.cpp
    src/model/clb/DescribeServerGroupAttributesRequest.cpp
    src/model/clb/DescribeServerGroupAttributesResult.cpp
    src/model/clb/DescribeServerGroupsRequest.cpp
    src/model/clb/DescribeServerGroupsResult.cpp
    src/model/clb/DescribeZonesRequest.cpp
    src/model/clb/DescribeZonesResult.cpp
    src/model/clb/DetachHealthCheckLogTopicRequest.cpp
    src/model/clb/DetachHealthCheckLogTopicResult.cpp
    src/model/clb/DisableAccessLogRequest.cpp
    src/model/clb/DisableAccessLogResult.cpp
    src/model/clb/EipBillingConfigForCreateLoadBalancerInput.cpp
    src/model/clb/EipForDescribeLoadBalancerAttributesOutput.cpp
    src/model/clb/EnableAccessLogRequest.cpp
    src/model/clb/EnableAccessLogResult.cpp
    src/model/clb/HealthCheckForCreateListenerInput.cpp
    src/model/clb/HealthCheckForDescribeListenerAttributesOutput.cpp
    src/model/clb/HealthCheckForDescribeListenersOutput.cpp
    src/model/clb/HealthCheckForModifyListenerAttributesInput.cpp
    src/model/clb/Ipv6AddressBandwidthForDescribeLoadBalancerAttributesOutput.cpp
    src/model/clb/ListTagsForResourcesRequest.cpp
    src/model/clb/ListTagsForResourcesResult.cpp
    src/model/clb/ListenerForDescribeAclAttributesOutput.cpp
    src/model/clb/ListenerForDescribeListenersOutput.cpp
    src/model/clb/ListenerForDescribeLoadBalancerAttributesOutput.cpp
    src/model/clb/LoadBalancerBillingConfigForDescribeLoadBalancersBillingOutput.cpp
    src/model/clb/LoadBalancerForDescribeLoadBalancersOutput.cpp
    src/model/clb/MasterZoneForDescribeZonesOutput.cpp
    src/model/clb/ModifyAclAttributesRequest.cpp
    src/model/clb/ModifyAclAttributesResult.cpp
    src/model/clb/ModifyCertificateAttributesRequest.cpp
    src/model/clb/ModifyCertificateAttributesResult.cpp
    src/model/clb/ModifyListenerAttributesRequest.cpp
    src/model/clb/ModifyListenerAttributesResult.cpp
    src/model/clb/ModifyLoadBalancerAttributesRequest.cpp
    src/model/clb/ModifyLoadBalancerAttributesResult.cpp
    src/model/clb/ModifyRulesRequest.cpp
    src/model/clb/ModifyRulesResult.cpp
    src/model/clb/ModifyServerGroupAttributesRequest.cpp
    src/model/clb/ModifyServerGroupAttributesResult.cpp
    src/model/clb/RemoveAclEntriesRequest.cpp
    src/model/clb/RemoveAclEntriesResult.cpp
    src/model/clb/RemoveServerGroupBackendServersRequest.cpp
    src/model/clb/RemoveServerGroupBackendServersResult.cpp
    src/model/clb/RenewLoadBalancerRequest.cpp
    src/model/clb/RenewLoadBalancerResult.cpp
    src/model/clb/ResourceTagForListTagsForResourcesOutput.cpp
    src/model/clb/ResultForDescribeListenerHealthOutput.cpp
    src/model/clb/RuleForCreateRulesInput.cpp
    src/model/clb/RuleForDescribeRulesOutput.cpp
    src/model/clb/RuleForModifyRulesInput.cpp
    src/model/clb/ServerForAddServerGroupBackendServersInput.cpp
    src/model/clb/ServerForCreateServerGroupInput.cpp
    src/model/clb/ServerForDescribeServerGroupAttributesOutput.cpp
    src/model/clb/ServerForModifyServerGroupAttributesInput.cpp
    src/model/clb/ServerGroupForDescribeLoadBalancerAttributesOutput.cpp
    src/model/clb/ServerGroupForDescribeServerGroupsOutput.cpp
    src/model/clb/SetLoadBalancerRenewalRequest.cpp
    src/model/clb/SetLoadBalancerRenewalResult.cpp
    src/model/clb/TagFilterForDescribeAclsInput.cpp
    src/model/clb/TagFilterForDescribeCertificatesInput.cpp
    src/model/clb/TagFilterForDescribeLoadBalancersInput.cpp
    src/model/clb/TagFilterForListTagsForResourcesInput.cpp
    src/model/clb/TagForCreateAclInput.cpp
    src/model/clb/TagForCreateLoadBalancerInput.cpp
    src/model/clb/TagForDescribeAclAttributesOutput.cpp
    src/model/clb/TagForDescribeLoadBalancerAttributesOutput.cpp
    src/model/clb/TagForDescribeLoadBalancersOutput.cpp
    src/model/clb/TagForTagResourcesInput.cpp
    src/model/clb/TagForUploadCertificateInput.cpp
    src/model/clb/TagResourcesRequest.cpp
    src/model/clb/TagResourcesResult.cpp
    src/model/clb/UntagResourcesRequest.cpp
    src/model/clb/UntagResourcesResult.cpp
    src/model/clb/UploadCertificateRequest.cpp
    src/model/clb/UploadCertificateResult.cpp
)

add_library(${PROJECT_NAME}
     STATIC ${VOLCENGINE_SDK_CLB_LIB}
     ${VOLCENGINE_SDK_CLB_HEADER}
     ${VOLCENGINE_SDK_CLB_HEADER_MODEL}
     )

set_target_properties(${PROJECT_NAME}
     PROPERTIES
     LINKER_LANGUAGE CXX
     ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
     LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
     RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
     OUTPUT_NAME ${PROJECT_NAME}
)

target_include_directories(${PROJECT_NAME}
     PRIVATE include
     ${CMAKE_SOURCE_DIR}/${TARGET_OUTPUT_NAME_PREFIX}core/include)

target_link_libraries(${PROJECT_NAME} ${TARGET_OUTPUT_NAME_PREFIX}core)

target_link_libraries(${PROJECT_NAME} ${CLIENT_SSL_LIBS})
target_link_libraries(${PROJECT_NAME} ${CLIENT_CURL_LIBS})


install(FILES ${VOLCENGINE_SDK_CLB_HEADER}
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/volcengine/clb)
install(FILES  ${VOLCENGINE_SDK_CLB_HEADER_MODEL}
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/volcengine/clb/model)
install(TARGETS ${PROJECT_NAME}
       ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
       LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
       RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)