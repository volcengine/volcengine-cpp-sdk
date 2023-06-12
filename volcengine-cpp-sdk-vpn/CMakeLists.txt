cmake_minimum_required(VERSION 3.1)
project(volcengine-cpp-sdk-vpn)

set(CMAKE_CXX_STANDARD 11)


set(VOLCENGINE_SDK_VPN_HEADER
    include/volcengine/vpn/VpnClient.h
)

set(VOLCENGINE_SDK_VPN_HEADER_MODEL
                include/volcengine/vpn/model/CreateCustomerGatewayRequest.h
                include/volcengine/vpn/model/CreateCustomerGatewayResult.h
                include/volcengine/vpn/model/CreateVpnConnectionRequest.h
                include/volcengine/vpn/model/CreateVpnConnectionResult.h
                include/volcengine/vpn/model/CreateVpnGatewayRequest.h
                include/volcengine/vpn/model/CreateVpnGatewayResult.h
                include/volcengine/vpn/model/CreateVpnGatewayRouteRequest.h
                include/volcengine/vpn/model/CreateVpnGatewayRouteResult.h
                include/volcengine/vpn/model/CustomerGatewayForDescribeCustomerGatewaysOutput.h
                include/volcengine/vpn/model/DeleteCustomerGatewayRequest.h
                include/volcengine/vpn/model/DeleteCustomerGatewayResult.h
                include/volcengine/vpn/model/DeleteVpnConnectionRequest.h
                include/volcengine/vpn/model/DeleteVpnConnectionResult.h
                include/volcengine/vpn/model/DeleteVpnGatewayRequest.h
                include/volcengine/vpn/model/DeleteVpnGatewayResult.h
                include/volcengine/vpn/model/DeleteVpnGatewayRouteRequest.h
                include/volcengine/vpn/model/DeleteVpnGatewayRouteResult.h
                include/volcengine/vpn/model/DescribeCustomerGatewayAttributesRequest.h
                include/volcengine/vpn/model/DescribeCustomerGatewayAttributesResult.h
                include/volcengine/vpn/model/DescribeCustomerGatewaysRequest.h
                include/volcengine/vpn/model/DescribeCustomerGatewaysResult.h
                include/volcengine/vpn/model/DescribeVpnConnectionAttributesRequest.h
                include/volcengine/vpn/model/DescribeVpnConnectionAttributesResult.h
                include/volcengine/vpn/model/DescribeVpnConnectionsRequest.h
                include/volcengine/vpn/model/DescribeVpnConnectionsResult.h
                include/volcengine/vpn/model/DescribeVpnGatewayAttributesRequest.h
                include/volcengine/vpn/model/DescribeVpnGatewayAttributesResult.h
                include/volcengine/vpn/model/DescribeVpnGatewayRouteAttributesRequest.h
                include/volcengine/vpn/model/DescribeVpnGatewayRouteAttributesResult.h
                include/volcengine/vpn/model/DescribeVpnGatewayRoutesRequest.h
                include/volcengine/vpn/model/DescribeVpnGatewayRoutesResult.h
                include/volcengine/vpn/model/DescribeVpnGatewaysBillingRequest.h
                include/volcengine/vpn/model/DescribeVpnGatewaysBillingResult.h
                include/volcengine/vpn/model/DescribeVpnGatewaysRequest.h
                include/volcengine/vpn/model/DescribeVpnGatewaysResult.h
                include/volcengine/vpn/model/IkeConfigForDescribeVpnConnectionAttributesOutput.h
                include/volcengine/vpn/model/IkeConfigForDescribeVpnConnectionsOutput.h
                include/volcengine/vpn/model/IpsecConfigForDescribeVpnConnectionAttributesOutput.h
                include/volcengine/vpn/model/IpsecConfigForDescribeVpnConnectionsOutput.h
                include/volcengine/vpn/model/ModifyCustomerGatewayAttributesRequest.h
                include/volcengine/vpn/model/ModifyCustomerGatewayAttributesResult.h
                include/volcengine/vpn/model/ModifyVpnConnectionAttributesRequest.h
                include/volcengine/vpn/model/ModifyVpnConnectionAttributesResult.h
                include/volcengine/vpn/model/ModifyVpnGatewayAttributesRequest.h
                include/volcengine/vpn/model/ModifyVpnGatewayAttributesResult.h
                include/volcengine/vpn/model/RenewVpnGatewayRequest.h
                include/volcengine/vpn/model/RenewVpnGatewayResult.h
                include/volcengine/vpn/model/SetVpnGatewayRenewalRequest.h
                include/volcengine/vpn/model/SetVpnGatewayRenewalResult.h
                include/volcengine/vpn/model/TagFilterForDescribeVpnGatewaysInput.h
                include/volcengine/vpn/model/TagForCreateVpnGatewayInput.h
                include/volcengine/vpn/model/TagForDescribeVpnGatewayAttributesOutput.h
                include/volcengine/vpn/model/TagForDescribeVpnGatewaysOutput.h
                include/volcengine/vpn/model/VpnConnectionForDescribeVpnConnectionsOutput.h
                include/volcengine/vpn/model/VpnGatewayForDescribeVpnGatewaysBillingOutput.h
                include/volcengine/vpn/model/VpnGatewayForDescribeVpnGatewaysOutput.h
                include/volcengine/vpn/model/VpnGatewayRouteForDescribeVpnGatewayRoutesOutput.h
    )

set(VOLCENGINE_SDK_VPN_LIB
    src/VpnClient.cpp
    src/model/vpn/CreateCustomerGatewayRequest.cpp
    src/model/vpn/CreateCustomerGatewayResult.cpp
    src/model/vpn/CreateVpnConnectionRequest.cpp
    src/model/vpn/CreateVpnConnectionResult.cpp
    src/model/vpn/CreateVpnGatewayRequest.cpp
    src/model/vpn/CreateVpnGatewayResult.cpp
    src/model/vpn/CreateVpnGatewayRouteRequest.cpp
    src/model/vpn/CreateVpnGatewayRouteResult.cpp
    src/model/vpn/CustomerGatewayForDescribeCustomerGatewaysOutput.cpp
    src/model/vpn/DeleteCustomerGatewayRequest.cpp
    src/model/vpn/DeleteCustomerGatewayResult.cpp
    src/model/vpn/DeleteVpnConnectionRequest.cpp
    src/model/vpn/DeleteVpnConnectionResult.cpp
    src/model/vpn/DeleteVpnGatewayRequest.cpp
    src/model/vpn/DeleteVpnGatewayResult.cpp
    src/model/vpn/DeleteVpnGatewayRouteRequest.cpp
    src/model/vpn/DeleteVpnGatewayRouteResult.cpp
    src/model/vpn/DescribeCustomerGatewayAttributesRequest.cpp
    src/model/vpn/DescribeCustomerGatewayAttributesResult.cpp
    src/model/vpn/DescribeCustomerGatewaysRequest.cpp
    src/model/vpn/DescribeCustomerGatewaysResult.cpp
    src/model/vpn/DescribeVpnConnectionAttributesRequest.cpp
    src/model/vpn/DescribeVpnConnectionAttributesResult.cpp
    src/model/vpn/DescribeVpnConnectionsRequest.cpp
    src/model/vpn/DescribeVpnConnectionsResult.cpp
    src/model/vpn/DescribeVpnGatewayAttributesRequest.cpp
    src/model/vpn/DescribeVpnGatewayAttributesResult.cpp
    src/model/vpn/DescribeVpnGatewayRouteAttributesRequest.cpp
    src/model/vpn/DescribeVpnGatewayRouteAttributesResult.cpp
    src/model/vpn/DescribeVpnGatewayRoutesRequest.cpp
    src/model/vpn/DescribeVpnGatewayRoutesResult.cpp
    src/model/vpn/DescribeVpnGatewaysBillingRequest.cpp
    src/model/vpn/DescribeVpnGatewaysBillingResult.cpp
    src/model/vpn/DescribeVpnGatewaysRequest.cpp
    src/model/vpn/DescribeVpnGatewaysResult.cpp
    src/model/vpn/IkeConfigForDescribeVpnConnectionAttributesOutput.cpp
    src/model/vpn/IkeConfigForDescribeVpnConnectionsOutput.cpp
    src/model/vpn/IpsecConfigForDescribeVpnConnectionAttributesOutput.cpp
    src/model/vpn/IpsecConfigForDescribeVpnConnectionsOutput.cpp
    src/model/vpn/ModifyCustomerGatewayAttributesRequest.cpp
    src/model/vpn/ModifyCustomerGatewayAttributesResult.cpp
    src/model/vpn/ModifyVpnConnectionAttributesRequest.cpp
    src/model/vpn/ModifyVpnConnectionAttributesResult.cpp
    src/model/vpn/ModifyVpnGatewayAttributesRequest.cpp
    src/model/vpn/ModifyVpnGatewayAttributesResult.cpp
    src/model/vpn/RenewVpnGatewayRequest.cpp
    src/model/vpn/RenewVpnGatewayResult.cpp
    src/model/vpn/SetVpnGatewayRenewalRequest.cpp
    src/model/vpn/SetVpnGatewayRenewalResult.cpp
    src/model/vpn/TagFilterForDescribeVpnGatewaysInput.cpp
    src/model/vpn/TagForCreateVpnGatewayInput.cpp
    src/model/vpn/TagForDescribeVpnGatewayAttributesOutput.cpp
    src/model/vpn/TagForDescribeVpnGatewaysOutput.cpp
    src/model/vpn/VpnConnectionForDescribeVpnConnectionsOutput.cpp
    src/model/vpn/VpnGatewayForDescribeVpnGatewaysBillingOutput.cpp
    src/model/vpn/VpnGatewayForDescribeVpnGatewaysOutput.cpp
    src/model/vpn/VpnGatewayRouteForDescribeVpnGatewayRoutesOutput.cpp
)

add_library(${PROJECT_NAME}
     STATIC ${VOLCENGINE_SDK_VPN_LIB}
     ${VOLCENGINE_SDK_VPN_HEADER}
     ${VOLCENGINE_SDK_VPN_HEADER_MODEL}
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


install(FILES ${VOLCENGINE_SDK_VPN_HEADER}
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/volcengine/vpn)
install(FILES  ${VOLCENGINE_SDK_VPN_HEADER_MODEL}
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/volcengine/vpn/model)
install(TARGETS ${PROJECT_NAME}
       ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
       LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
       RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)