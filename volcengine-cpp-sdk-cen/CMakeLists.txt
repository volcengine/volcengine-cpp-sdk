cmake_minimum_required(VERSION 3.1)
project(volcengine-cpp-sdk-cen)

set(CMAKE_CXX_STANDARD 11)


set(VOLCENGINE_SDK_CEN_HEADER
    include/volcengine/cen/CenClient.h
)

set(VOLCENGINE_SDK_CEN_HEADER_MODEL
                include/volcengine/cen/model/AssociateCenBandwidthPackageRequest.h
                include/volcengine/cen/model/AssociateCenBandwidthPackageResult.h
                include/volcengine/cen/model/AttachInstanceToCenRequest.h
                include/volcengine/cen/model/AttachInstanceToCenResult.h
                include/volcengine/cen/model/AttachedInstanceForDescribeCenAttachedInstancesOutput.h
                include/volcengine/cen/model/CenBandwidthPackageForDescribeCenBandwidthPackagesOutput.h
                include/volcengine/cen/model/CenForDescribeCensOutput.h
                include/volcengine/cen/model/CenGrantRuleForDescribeGrantRulesToCenOutput.h
                include/volcengine/cen/model/CenGrantRuleForDescribeInstanceGrantedRulesOutput.h
                include/volcengine/cen/model/CenRouteEntryForDescribeCenRouteEntriesOutput.h
                include/volcengine/cen/model/CenSummaryRouteEntryForDescribeCenSummaryRouteEntriesOutput.h
                include/volcengine/cen/model/CreateCenBandwidthPackageRequest.h
                include/volcengine/cen/model/CreateCenBandwidthPackageResult.h
                include/volcengine/cen/model/CreateCenInterRegionBandwidthRequest.h
                include/volcengine/cen/model/CreateCenInterRegionBandwidthResult.h
                include/volcengine/cen/model/CreateCenRequest.h
                include/volcengine/cen/model/CreateCenResult.h
                include/volcengine/cen/model/CreateCenServiceRouteEntryRequest.h
                include/volcengine/cen/model/CreateCenServiceRouteEntryResult.h
                include/volcengine/cen/model/CreateCenSummaryRouteEntryRequest.h
                include/volcengine/cen/model/CreateCenSummaryRouteEntryResult.h
                include/volcengine/cen/model/DeleteCenBandwidthPackageRequest.h
                include/volcengine/cen/model/DeleteCenBandwidthPackageResult.h
                include/volcengine/cen/model/DeleteCenInterRegionBandwidthRequest.h
                include/volcengine/cen/model/DeleteCenInterRegionBandwidthResult.h
                include/volcengine/cen/model/DeleteCenRequest.h
                include/volcengine/cen/model/DeleteCenResult.h
                include/volcengine/cen/model/DeleteCenSummaryRouteEntryRequest.h
                include/volcengine/cen/model/DeleteCenSummaryRouteEntryResult.h
                include/volcengine/cen/model/DescribeCenAttachedInstanceAttributesRequest.h
                include/volcengine/cen/model/DescribeCenAttachedInstanceAttributesResult.h
                include/volcengine/cen/model/DescribeCenAttachedInstancesRequest.h
                include/volcengine/cen/model/DescribeCenAttachedInstancesResult.h
                include/volcengine/cen/model/DescribeCenAttributesRequest.h
                include/volcengine/cen/model/DescribeCenAttributesResult.h
                include/volcengine/cen/model/DescribeCenBandwidthPackageAttributesRequest.h
                include/volcengine/cen/model/DescribeCenBandwidthPackageAttributesResult.h
                include/volcengine/cen/model/DescribeCenBandwidthPackagesRequest.h
                include/volcengine/cen/model/DescribeCenBandwidthPackagesResult.h
                include/volcengine/cen/model/DescribeCenInterRegionBandwidthAttributesRequest.h
                include/volcengine/cen/model/DescribeCenInterRegionBandwidthAttributesResult.h
                include/volcengine/cen/model/DescribeCenInterRegionBandwidthsRequest.h
                include/volcengine/cen/model/DescribeCenInterRegionBandwidthsResult.h
                include/volcengine/cen/model/DescribeCenRouteEntriesRequest.h
                include/volcengine/cen/model/DescribeCenRouteEntriesResult.h
                include/volcengine/cen/model/DescribeCenSummaryRouteEntriesRequest.h
                include/volcengine/cen/model/DescribeCenSummaryRouteEntriesResult.h
                include/volcengine/cen/model/DescribeCensRequest.h
                include/volcengine/cen/model/DescribeCensResult.h
                include/volcengine/cen/model/DescribeGrantRulesToCenRequest.h
                include/volcengine/cen/model/DescribeGrantRulesToCenResult.h
                include/volcengine/cen/model/DescribeInstanceGrantedRulesRequest.h
                include/volcengine/cen/model/DescribeInstanceGrantedRulesResult.h
                include/volcengine/cen/model/DetachInstanceFromCenRequest.h
                include/volcengine/cen/model/DetachInstanceFromCenResult.h
                include/volcengine/cen/model/DisassociateCenBandwidthPackageRequest.h
                include/volcengine/cen/model/DisassociateCenBandwidthPackageResult.h
                include/volcengine/cen/model/GrantInstanceToCenRequest.h
                include/volcengine/cen/model/GrantInstanceToCenResult.h
                include/volcengine/cen/model/InterRegionBandwidthForDescribeCenInterRegionBandwidthsOutput.h
                include/volcengine/cen/model/ListTagsForResourcesRequest.h
                include/volcengine/cen/model/ListTagsForResourcesResult.h
                include/volcengine/cen/model/ModifyCenAttributesRequest.h
                include/volcengine/cen/model/ModifyCenAttributesResult.h
                include/volcengine/cen/model/ModifyCenBandwidthPackageAttributesRequest.h
                include/volcengine/cen/model/ModifyCenBandwidthPackageAttributesResult.h
                include/volcengine/cen/model/ModifyCenInterRegionBandwidthAttributesRequest.h
                include/volcengine/cen/model/ModifyCenInterRegionBandwidthAttributesResult.h
                include/volcengine/cen/model/ResourceTagForListTagsForResourcesOutput.h
                include/volcengine/cen/model/RevokeInstanceFromCenRequest.h
                include/volcengine/cen/model/RevokeInstanceFromCenResult.h
                include/volcengine/cen/model/TagFilterForDescribeCenBandwidthPackagesInput.h
                include/volcengine/cen/model/TagFilterForDescribeCensInput.h
                include/volcengine/cen/model/TagFilterForListTagsForResourcesInput.h
                include/volcengine/cen/model/TagForCreateCenBandwidthPackageInput.h
                include/volcengine/cen/model/TagForCreateCenInput.h
                include/volcengine/cen/model/TagForDescribeCenAttributesOutput.h
                include/volcengine/cen/model/TagForDescribeCenBandwidthPackageAttributesOutput.h
                include/volcengine/cen/model/TagForDescribeCenBandwidthPackagesOutput.h
                include/volcengine/cen/model/TagForDescribeCensOutput.h
                include/volcengine/cen/model/TagForTagResourcesInput.h
                include/volcengine/cen/model/TagResourcesRequest.h
                include/volcengine/cen/model/TagResourcesResult.h
                include/volcengine/cen/model/UntagResourcesRequest.h
                include/volcengine/cen/model/UntagResourcesResult.h
    )

set(VOLCENGINE_SDK_CEN_LIB
    src/CenClient.cpp
    src/model/cen/AssociateCenBandwidthPackageRequest.cpp
    src/model/cen/AssociateCenBandwidthPackageResult.cpp
    src/model/cen/AttachInstanceToCenRequest.cpp
    src/model/cen/AttachInstanceToCenResult.cpp
    src/model/cen/AttachedInstanceForDescribeCenAttachedInstancesOutput.cpp
    src/model/cen/CenBandwidthPackageForDescribeCenBandwidthPackagesOutput.cpp
    src/model/cen/CenForDescribeCensOutput.cpp
    src/model/cen/CenGrantRuleForDescribeGrantRulesToCenOutput.cpp
    src/model/cen/CenGrantRuleForDescribeInstanceGrantedRulesOutput.cpp
    src/model/cen/CenRouteEntryForDescribeCenRouteEntriesOutput.cpp
    src/model/cen/CenSummaryRouteEntryForDescribeCenSummaryRouteEntriesOutput.cpp
    src/model/cen/CreateCenBandwidthPackageRequest.cpp
    src/model/cen/CreateCenBandwidthPackageResult.cpp
    src/model/cen/CreateCenInterRegionBandwidthRequest.cpp
    src/model/cen/CreateCenInterRegionBandwidthResult.cpp
    src/model/cen/CreateCenRequest.cpp
    src/model/cen/CreateCenResult.cpp
    src/model/cen/CreateCenServiceRouteEntryRequest.cpp
    src/model/cen/CreateCenServiceRouteEntryResult.cpp
    src/model/cen/CreateCenSummaryRouteEntryRequest.cpp
    src/model/cen/CreateCenSummaryRouteEntryResult.cpp
    src/model/cen/DeleteCenBandwidthPackageRequest.cpp
    src/model/cen/DeleteCenBandwidthPackageResult.cpp
    src/model/cen/DeleteCenInterRegionBandwidthRequest.cpp
    src/model/cen/DeleteCenInterRegionBandwidthResult.cpp
    src/model/cen/DeleteCenRequest.cpp
    src/model/cen/DeleteCenResult.cpp
    src/model/cen/DeleteCenSummaryRouteEntryRequest.cpp
    src/model/cen/DeleteCenSummaryRouteEntryResult.cpp
    src/model/cen/DescribeCenAttachedInstanceAttributesRequest.cpp
    src/model/cen/DescribeCenAttachedInstanceAttributesResult.cpp
    src/model/cen/DescribeCenAttachedInstancesRequest.cpp
    src/model/cen/DescribeCenAttachedInstancesResult.cpp
    src/model/cen/DescribeCenAttributesRequest.cpp
    src/model/cen/DescribeCenAttributesResult.cpp
    src/model/cen/DescribeCenBandwidthPackageAttributesRequest.cpp
    src/model/cen/DescribeCenBandwidthPackageAttributesResult.cpp
    src/model/cen/DescribeCenBandwidthPackagesRequest.cpp
    src/model/cen/DescribeCenBandwidthPackagesResult.cpp
    src/model/cen/DescribeCenInterRegionBandwidthAttributesRequest.cpp
    src/model/cen/DescribeCenInterRegionBandwidthAttributesResult.cpp
    src/model/cen/DescribeCenInterRegionBandwidthsRequest.cpp
    src/model/cen/DescribeCenInterRegionBandwidthsResult.cpp
    src/model/cen/DescribeCenRouteEntriesRequest.cpp
    src/model/cen/DescribeCenRouteEntriesResult.cpp
    src/model/cen/DescribeCenSummaryRouteEntriesRequest.cpp
    src/model/cen/DescribeCenSummaryRouteEntriesResult.cpp
    src/model/cen/DescribeCensRequest.cpp
    src/model/cen/DescribeCensResult.cpp
    src/model/cen/DescribeGrantRulesToCenRequest.cpp
    src/model/cen/DescribeGrantRulesToCenResult.cpp
    src/model/cen/DescribeInstanceGrantedRulesRequest.cpp
    src/model/cen/DescribeInstanceGrantedRulesResult.cpp
    src/model/cen/DetachInstanceFromCenRequest.cpp
    src/model/cen/DetachInstanceFromCenResult.cpp
    src/model/cen/DisassociateCenBandwidthPackageRequest.cpp
    src/model/cen/DisassociateCenBandwidthPackageResult.cpp
    src/model/cen/GrantInstanceToCenRequest.cpp
    src/model/cen/GrantInstanceToCenResult.cpp
    src/model/cen/InterRegionBandwidthForDescribeCenInterRegionBandwidthsOutput.cpp
    src/model/cen/ListTagsForResourcesRequest.cpp
    src/model/cen/ListTagsForResourcesResult.cpp
    src/model/cen/ModifyCenAttributesRequest.cpp
    src/model/cen/ModifyCenAttributesResult.cpp
    src/model/cen/ModifyCenBandwidthPackageAttributesRequest.cpp
    src/model/cen/ModifyCenBandwidthPackageAttributesResult.cpp
    src/model/cen/ModifyCenInterRegionBandwidthAttributesRequest.cpp
    src/model/cen/ModifyCenInterRegionBandwidthAttributesResult.cpp
    src/model/cen/ResourceTagForListTagsForResourcesOutput.cpp
    src/model/cen/RevokeInstanceFromCenRequest.cpp
    src/model/cen/RevokeInstanceFromCenResult.cpp
    src/model/cen/TagFilterForDescribeCenBandwidthPackagesInput.cpp
    src/model/cen/TagFilterForDescribeCensInput.cpp
    src/model/cen/TagFilterForListTagsForResourcesInput.cpp
    src/model/cen/TagForCreateCenBandwidthPackageInput.cpp
    src/model/cen/TagForCreateCenInput.cpp
    src/model/cen/TagForDescribeCenAttributesOutput.cpp
    src/model/cen/TagForDescribeCenBandwidthPackageAttributesOutput.cpp
    src/model/cen/TagForDescribeCenBandwidthPackagesOutput.cpp
    src/model/cen/TagForDescribeCensOutput.cpp
    src/model/cen/TagForTagResourcesInput.cpp
    src/model/cen/TagResourcesRequest.cpp
    src/model/cen/TagResourcesResult.cpp
    src/model/cen/UntagResourcesRequest.cpp
    src/model/cen/UntagResourcesResult.cpp
)

add_library(${PROJECT_NAME}
     STATIC ${VOLCENGINE_SDK_CEN_LIB}
     ${VOLCENGINE_SDK_CEN_HEADER}
     ${VOLCENGINE_SDK_CEN_HEADER_MODEL}
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


install(FILES ${VOLCENGINE_SDK_CEN_HEADER}
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/volcengine/cen)
install(FILES  ${VOLCENGINE_SDK_CEN_HEADER_MODEL}
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/volcengine/cen/model)
install(TARGETS ${PROJECT_NAME}
       ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
       LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
       RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)