cmake_minimum_required(VERSION 3.1)
project(volcengine-cpp-sdk-natgateway)

set(CMAKE_CXX_STANDARD 11)


set(VOLCENGINE_SDK_NATGATEWAY_HEADER
    include/volcengine/natgateway/NatgatewayClient.h
)

set(VOLCENGINE_SDK_NATGATEWAY_HEADER_MODEL
                include/volcengine/natgateway/model/CreateDnatEntryRequest.h
                include/volcengine/natgateway/model/CreateDnatEntryResult.h
                include/volcengine/natgateway/model/CreateNatGatewayRequest.h
                include/volcengine/natgateway/model/CreateNatGatewayResult.h
                include/volcengine/natgateway/model/CreateSnatEntryRequest.h
                include/volcengine/natgateway/model/CreateSnatEntryResult.h
                include/volcengine/natgateway/model/DeleteDnatEntryRequest.h
                include/volcengine/natgateway/model/DeleteDnatEntryResult.h
                include/volcengine/natgateway/model/DeleteNatGatewayRequest.h
                include/volcengine/natgateway/model/DeleteNatGatewayResult.h
                include/volcengine/natgateway/model/DeleteSnatEntryRequest.h
                include/volcengine/natgateway/model/DeleteSnatEntryResult.h
                include/volcengine/natgateway/model/DescribeDnatEntriesRequest.h
                include/volcengine/natgateway/model/DescribeDnatEntriesResult.h
                include/volcengine/natgateway/model/DescribeDnatEntryAttributesRequest.h
                include/volcengine/natgateway/model/DescribeDnatEntryAttributesResult.h
                include/volcengine/natgateway/model/DescribeNatGatewayAttributesRequest.h
                include/volcengine/natgateway/model/DescribeNatGatewayAttributesResult.h
                include/volcengine/natgateway/model/DescribeNatGatewaysRequest.h
                include/volcengine/natgateway/model/DescribeNatGatewaysResult.h
                include/volcengine/natgateway/model/DescribeSnatEntriesRequest.h
                include/volcengine/natgateway/model/DescribeSnatEntriesResult.h
                include/volcengine/natgateway/model/DescribeSnatEntryAttributesRequest.h
                include/volcengine/natgateway/model/DescribeSnatEntryAttributesResult.h
                include/volcengine/natgateway/model/DnatEntryForDescribeDnatEntriesOutput.h
                include/volcengine/natgateway/model/EipAddressForDescribeNatGatewayAttributesOutput.h
                include/volcengine/natgateway/model/EipAddressForDescribeNatGatewaysOutput.h
                include/volcengine/natgateway/model/ListNatGatewayAvailableZonesRequest.h
                include/volcengine/natgateway/model/ListNatGatewayAvailableZonesResult.h
                include/volcengine/natgateway/model/ModifyDnatEntryAttributesRequest.h
                include/volcengine/natgateway/model/ModifyDnatEntryAttributesResult.h
                include/volcengine/natgateway/model/ModifyNatGatewayAttributesRequest.h
                include/volcengine/natgateway/model/ModifyNatGatewayAttributesResult.h
                include/volcengine/natgateway/model/ModifySnatEntryAttributesRequest.h
                include/volcengine/natgateway/model/ModifySnatEntryAttributesResult.h
                include/volcengine/natgateway/model/NatGatewayForDescribeNatGatewaysOutput.h
                include/volcengine/natgateway/model/SnatEntryForDescribeSnatEntriesOutput.h
                include/volcengine/natgateway/model/TagFilterForDescribeNatGatewaysInput.h
                include/volcengine/natgateway/model/TagForCreateNatGatewayInput.h
                include/volcengine/natgateway/model/TagForDescribeNatGatewayAttributesOutput.h
                include/volcengine/natgateway/model/TagForDescribeNatGatewaysOutput.h
                include/volcengine/natgateway/model/ZoneForListNatGatewayAvailableZonesOutput.h
    )

set(VOLCENGINE_SDK_NATGATEWAY_LIB
    src/NatgatewayClient.cpp
    src/model/natgateway/CreateDnatEntryRequest.cpp
    src/model/natgateway/CreateDnatEntryResult.cpp
    src/model/natgateway/CreateNatGatewayRequest.cpp
    src/model/natgateway/CreateNatGatewayResult.cpp
    src/model/natgateway/CreateSnatEntryRequest.cpp
    src/model/natgateway/CreateSnatEntryResult.cpp
    src/model/natgateway/DeleteDnatEntryRequest.cpp
    src/model/natgateway/DeleteDnatEntryResult.cpp
    src/model/natgateway/DeleteNatGatewayRequest.cpp
    src/model/natgateway/DeleteNatGatewayResult.cpp
    src/model/natgateway/DeleteSnatEntryRequest.cpp
    src/model/natgateway/DeleteSnatEntryResult.cpp
    src/model/natgateway/DescribeDnatEntriesRequest.cpp
    src/model/natgateway/DescribeDnatEntriesResult.cpp
    src/model/natgateway/DescribeDnatEntryAttributesRequest.cpp
    src/model/natgateway/DescribeDnatEntryAttributesResult.cpp
    src/model/natgateway/DescribeNatGatewayAttributesRequest.cpp
    src/model/natgateway/DescribeNatGatewayAttributesResult.cpp
    src/model/natgateway/DescribeNatGatewaysRequest.cpp
    src/model/natgateway/DescribeNatGatewaysResult.cpp
    src/model/natgateway/DescribeSnatEntriesRequest.cpp
    src/model/natgateway/DescribeSnatEntriesResult.cpp
    src/model/natgateway/DescribeSnatEntryAttributesRequest.cpp
    src/model/natgateway/DescribeSnatEntryAttributesResult.cpp
    src/model/natgateway/DnatEntryForDescribeDnatEntriesOutput.cpp
    src/model/natgateway/EipAddressForDescribeNatGatewayAttributesOutput.cpp
    src/model/natgateway/EipAddressForDescribeNatGatewaysOutput.cpp
    src/model/natgateway/ListNatGatewayAvailableZonesRequest.cpp
    src/model/natgateway/ListNatGatewayAvailableZonesResult.cpp
    src/model/natgateway/ModifyDnatEntryAttributesRequest.cpp
    src/model/natgateway/ModifyDnatEntryAttributesResult.cpp
    src/model/natgateway/ModifyNatGatewayAttributesRequest.cpp
    src/model/natgateway/ModifyNatGatewayAttributesResult.cpp
    src/model/natgateway/ModifySnatEntryAttributesRequest.cpp
    src/model/natgateway/ModifySnatEntryAttributesResult.cpp
    src/model/natgateway/NatGatewayForDescribeNatGatewaysOutput.cpp
    src/model/natgateway/SnatEntryForDescribeSnatEntriesOutput.cpp
    src/model/natgateway/TagFilterForDescribeNatGatewaysInput.cpp
    src/model/natgateway/TagForCreateNatGatewayInput.cpp
    src/model/natgateway/TagForDescribeNatGatewayAttributesOutput.cpp
    src/model/natgateway/TagForDescribeNatGatewaysOutput.cpp
    src/model/natgateway/ZoneForListNatGatewayAvailableZonesOutput.cpp
)

add_library(${PROJECT_NAME}
     STATIC ${VOLCENGINE_SDK_NATGATEWAY_LIB}
     ${VOLCENGINE_SDK_NATGATEWAY_HEADER}
     ${VOLCENGINE_SDK_NATGATEWAY_HEADER_MODEL}
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


install(FILES ${VOLCENGINE_SDK_NATGATEWAY_HEADER}
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/volcengine/natgateway)
install(FILES  ${VOLCENGINE_SDK_NATGATEWAY_HEADER_MODEL}
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/volcengine/natgateway/model)
install(TARGETS ${PROJECT_NAME}
       ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
       LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
       RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)