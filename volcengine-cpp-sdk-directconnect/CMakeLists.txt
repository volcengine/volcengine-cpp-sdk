cmake_minimum_required(VERSION 3.1)
project(volcengine-cpp-sdk-directconnect)

set(CMAKE_CXX_STANDARD 11)


set(VOLCENGINE_SDK_DIRECTCONNECT_HEADER
    include/volcengine/directconnect/DirectconnectClient.h
)

set(VOLCENGINE_SDK_DIRECTCONNECT_HEADER_MODEL
                include/volcengine/directconnect/model/AssociateCenForDescribeDirectConnectGatewayAttributesOutput.h
                include/volcengine/directconnect/model/AssociateCenForDescribeDirectConnectGatewaysOutput.h
                include/volcengine/directconnect/model/BgpPeerForDescribeBgpPeersOutput.h
                include/volcengine/directconnect/model/CreateBgpPeerRequest.h
                include/volcengine/directconnect/model/CreateBgpPeerResult.h
                include/volcengine/directconnect/model/CreateDirectConnectConnectionOrderRequest.h
                include/volcengine/directconnect/model/CreateDirectConnectConnectionOrderResult.h
                include/volcengine/directconnect/model/CreateDirectConnectConnectionRequest.h
                include/volcengine/directconnect/model/CreateDirectConnectConnectionResult.h
                include/volcengine/directconnect/model/CreateDirectConnectGatewayRequest.h
                include/volcengine/directconnect/model/CreateDirectConnectGatewayResult.h
                include/volcengine/directconnect/model/CreateDirectConnectGatewayRouteRequest.h
                include/volcengine/directconnect/model/CreateDirectConnectGatewayRouteResult.h
                include/volcengine/directconnect/model/CreateDirectConnectVirtualInterfaceRequest.h
                include/volcengine/directconnect/model/CreateDirectConnectVirtualInterfaceResult.h
                include/volcengine/directconnect/model/DeleteBgpPeerRequest.h
                include/volcengine/directconnect/model/DeleteBgpPeerResult.h
                include/volcengine/directconnect/model/DeleteDirectConnectConnectionRequest.h
                include/volcengine/directconnect/model/DeleteDirectConnectConnectionResult.h
                include/volcengine/directconnect/model/DeleteDirectConnectGatewayRequest.h
                include/volcengine/directconnect/model/DeleteDirectConnectGatewayResult.h
                include/volcengine/directconnect/model/DeleteDirectConnectGatewayRouteRequest.h
                include/volcengine/directconnect/model/DeleteDirectConnectGatewayRouteResult.h
                include/volcengine/directconnect/model/DeleteDirectConnectVirtualInterfaceRequest.h
                include/volcengine/directconnect/model/DeleteDirectConnectVirtualInterfaceResult.h
                include/volcengine/directconnect/model/DescribeBgpPeerAttributesRequest.h
                include/volcengine/directconnect/model/DescribeBgpPeerAttributesResult.h
                include/volcengine/directconnect/model/DescribeBgpPeersRequest.h
                include/volcengine/directconnect/model/DescribeBgpPeersResult.h
                include/volcengine/directconnect/model/DescribeDirectConnectAccessPointsRequest.h
                include/volcengine/directconnect/model/DescribeDirectConnectAccessPointsResult.h
                include/volcengine/directconnect/model/DescribeDirectConnectConnectionAttributesRequest.h
                include/volcengine/directconnect/model/DescribeDirectConnectConnectionAttributesResult.h
                include/volcengine/directconnect/model/DescribeDirectConnectConnectionsRequest.h
                include/volcengine/directconnect/model/DescribeDirectConnectConnectionsResult.h
                include/volcengine/directconnect/model/DescribeDirectConnectGatewayAttributesRequest.h
                include/volcengine/directconnect/model/DescribeDirectConnectGatewayAttributesResult.h
                include/volcengine/directconnect/model/DescribeDirectConnectGatewayRouteAttributesRequest.h
                include/volcengine/directconnect/model/DescribeDirectConnectGatewayRouteAttributesResult.h
                include/volcengine/directconnect/model/DescribeDirectConnectGatewayRoutesRequest.h
                include/volcengine/directconnect/model/DescribeDirectConnectGatewayRoutesResult.h
                include/volcengine/directconnect/model/DescribeDirectConnectGatewaysRequest.h
                include/volcengine/directconnect/model/DescribeDirectConnectGatewaysResult.h
                include/volcengine/directconnect/model/DescribeDirectConnectVirtualInterfaceAttributesRequest.h
                include/volcengine/directconnect/model/DescribeDirectConnectVirtualInterfaceAttributesResult.h
                include/volcengine/directconnect/model/DescribeDirectConnectVirtualInterfacesRequest.h
                include/volcengine/directconnect/model/DescribeDirectConnectVirtualInterfacesResult.h
                include/volcengine/directconnect/model/DirectConnectAccessPointForDescribeDirectConnectAccessPointsOutput.h
                include/volcengine/directconnect/model/DirectConnectConnectionForDescribeDirectConnectConnectionsOutput.h
                include/volcengine/directconnect/model/DirectConnectGatewayForDescribeDirectConnectGatewaysOutput.h
                include/volcengine/directconnect/model/DirectConnectGatewayRouteForDescribeDirectConnectGatewayRoutesOutput.h
                include/volcengine/directconnect/model/ModifyBgpPeerAttributesRequest.h
                include/volcengine/directconnect/model/ModifyBgpPeerAttributesResult.h
                include/volcengine/directconnect/model/ModifyDirectConnectConnectionAttributesRequest.h
                include/volcengine/directconnect/model/ModifyDirectConnectConnectionAttributesResult.h
                include/volcengine/directconnect/model/ModifyDirectConnectGatewayAttributesRequest.h
                include/volcengine/directconnect/model/ModifyDirectConnectGatewayAttributesResult.h
                include/volcengine/directconnect/model/ModifyDirectConnectVirtualInterfaceAttributesRequest.h
                include/volcengine/directconnect/model/ModifyDirectConnectVirtualInterfaceAttributesResult.h
                include/volcengine/directconnect/model/TagFilterForDescribeDirectConnectConnectionsInput.h
                include/volcengine/directconnect/model/TagFilterForDescribeDirectConnectGatewaysInput.h
                include/volcengine/directconnect/model/TagFilterForDescribeDirectConnectVirtualInterfacesInput.h
                include/volcengine/directconnect/model/TagForCreateDirectConnectConnectionInput.h
                include/volcengine/directconnect/model/TagForCreateDirectConnectGatewayInput.h
                include/volcengine/directconnect/model/TagForCreateDirectConnectVirtualInterfaceInput.h
                include/volcengine/directconnect/model/TagForDescribeDirectConnectConnectionAttributesOutput.h
                include/volcengine/directconnect/model/TagForDescribeDirectConnectConnectionsOutput.h
                include/volcengine/directconnect/model/TagForDescribeDirectConnectGatewayAttributesOutput.h
                include/volcengine/directconnect/model/TagForDescribeDirectConnectGatewaysOutput.h
                include/volcengine/directconnect/model/TagForDescribeDirectConnectVirtualInterfaceAttributesOutput.h
                include/volcengine/directconnect/model/TagForDescribeDirectConnectVirtualInterfacesOutput.h
                include/volcengine/directconnect/model/VirtualInterfaceForDescribeDirectConnectVirtualInterfacesOutput.h
    )

set(VOLCENGINE_SDK_DIRECTCONNECT_LIB
    src/DirectconnectClient.cpp
    src/model/directconnect/AssociateCenForDescribeDirectConnectGatewayAttributesOutput.cpp
    src/model/directconnect/AssociateCenForDescribeDirectConnectGatewaysOutput.cpp
    src/model/directconnect/BgpPeerForDescribeBgpPeersOutput.cpp
    src/model/directconnect/CreateBgpPeerRequest.cpp
    src/model/directconnect/CreateBgpPeerResult.cpp
    src/model/directconnect/CreateDirectConnectConnectionOrderRequest.cpp
    src/model/directconnect/CreateDirectConnectConnectionOrderResult.cpp
    src/model/directconnect/CreateDirectConnectConnectionRequest.cpp
    src/model/directconnect/CreateDirectConnectConnectionResult.cpp
    src/model/directconnect/CreateDirectConnectGatewayRequest.cpp
    src/model/directconnect/CreateDirectConnectGatewayResult.cpp
    src/model/directconnect/CreateDirectConnectGatewayRouteRequest.cpp
    src/model/directconnect/CreateDirectConnectGatewayRouteResult.cpp
    src/model/directconnect/CreateDirectConnectVirtualInterfaceRequest.cpp
    src/model/directconnect/CreateDirectConnectVirtualInterfaceResult.cpp
    src/model/directconnect/DeleteBgpPeerRequest.cpp
    src/model/directconnect/DeleteBgpPeerResult.cpp
    src/model/directconnect/DeleteDirectConnectConnectionRequest.cpp
    src/model/directconnect/DeleteDirectConnectConnectionResult.cpp
    src/model/directconnect/DeleteDirectConnectGatewayRequest.cpp
    src/model/directconnect/DeleteDirectConnectGatewayResult.cpp
    src/model/directconnect/DeleteDirectConnectGatewayRouteRequest.cpp
    src/model/directconnect/DeleteDirectConnectGatewayRouteResult.cpp
    src/model/directconnect/DeleteDirectConnectVirtualInterfaceRequest.cpp
    src/model/directconnect/DeleteDirectConnectVirtualInterfaceResult.cpp
    src/model/directconnect/DescribeBgpPeerAttributesRequest.cpp
    src/model/directconnect/DescribeBgpPeerAttributesResult.cpp
    src/model/directconnect/DescribeBgpPeersRequest.cpp
    src/model/directconnect/DescribeBgpPeersResult.cpp
    src/model/directconnect/DescribeDirectConnectAccessPointsRequest.cpp
    src/model/directconnect/DescribeDirectConnectAccessPointsResult.cpp
    src/model/directconnect/DescribeDirectConnectConnectionAttributesRequest.cpp
    src/model/directconnect/DescribeDirectConnectConnectionAttributesResult.cpp
    src/model/directconnect/DescribeDirectConnectConnectionsRequest.cpp
    src/model/directconnect/DescribeDirectConnectConnectionsResult.cpp
    src/model/directconnect/DescribeDirectConnectGatewayAttributesRequest.cpp
    src/model/directconnect/DescribeDirectConnectGatewayAttributesResult.cpp
    src/model/directconnect/DescribeDirectConnectGatewayRouteAttributesRequest.cpp
    src/model/directconnect/DescribeDirectConnectGatewayRouteAttributesResult.cpp
    src/model/directconnect/DescribeDirectConnectGatewayRoutesRequest.cpp
    src/model/directconnect/DescribeDirectConnectGatewayRoutesResult.cpp
    src/model/directconnect/DescribeDirectConnectGatewaysRequest.cpp
    src/model/directconnect/DescribeDirectConnectGatewaysResult.cpp
    src/model/directconnect/DescribeDirectConnectVirtualInterfaceAttributesRequest.cpp
    src/model/directconnect/DescribeDirectConnectVirtualInterfaceAttributesResult.cpp
    src/model/directconnect/DescribeDirectConnectVirtualInterfacesRequest.cpp
    src/model/directconnect/DescribeDirectConnectVirtualInterfacesResult.cpp
    src/model/directconnect/DirectConnectAccessPointForDescribeDirectConnectAccessPointsOutput.cpp
    src/model/directconnect/DirectConnectConnectionForDescribeDirectConnectConnectionsOutput.cpp
    src/model/directconnect/DirectConnectGatewayForDescribeDirectConnectGatewaysOutput.cpp
    src/model/directconnect/DirectConnectGatewayRouteForDescribeDirectConnectGatewayRoutesOutput.cpp
    src/model/directconnect/ModifyBgpPeerAttributesRequest.cpp
    src/model/directconnect/ModifyBgpPeerAttributesResult.cpp
    src/model/directconnect/ModifyDirectConnectConnectionAttributesRequest.cpp
    src/model/directconnect/ModifyDirectConnectConnectionAttributesResult.cpp
    src/model/directconnect/ModifyDirectConnectGatewayAttributesRequest.cpp
    src/model/directconnect/ModifyDirectConnectGatewayAttributesResult.cpp
    src/model/directconnect/ModifyDirectConnectVirtualInterfaceAttributesRequest.cpp
    src/model/directconnect/ModifyDirectConnectVirtualInterfaceAttributesResult.cpp
    src/model/directconnect/TagFilterForDescribeDirectConnectConnectionsInput.cpp
    src/model/directconnect/TagFilterForDescribeDirectConnectGatewaysInput.cpp
    src/model/directconnect/TagFilterForDescribeDirectConnectVirtualInterfacesInput.cpp
    src/model/directconnect/TagForCreateDirectConnectConnectionInput.cpp
    src/model/directconnect/TagForCreateDirectConnectGatewayInput.cpp
    src/model/directconnect/TagForCreateDirectConnectVirtualInterfaceInput.cpp
    src/model/directconnect/TagForDescribeDirectConnectConnectionAttributesOutput.cpp
    src/model/directconnect/TagForDescribeDirectConnectConnectionsOutput.cpp
    src/model/directconnect/TagForDescribeDirectConnectGatewayAttributesOutput.cpp
    src/model/directconnect/TagForDescribeDirectConnectGatewaysOutput.cpp
    src/model/directconnect/TagForDescribeDirectConnectVirtualInterfaceAttributesOutput.cpp
    src/model/directconnect/TagForDescribeDirectConnectVirtualInterfacesOutput.cpp
    src/model/directconnect/VirtualInterfaceForDescribeDirectConnectVirtualInterfacesOutput.cpp
)

add_library(${PROJECT_NAME}
     STATIC ${VOLCENGINE_SDK_DIRECTCONNECT_LIB}
     ${VOLCENGINE_SDK_DIRECTCONNECT_HEADER}
     ${VOLCENGINE_SDK_DIRECTCONNECT_HEADER_MODEL}
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


install(FILES ${VOLCENGINE_SDK_DIRECTCONNECT_HEADER}
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/volcengine/directconnect)
install(FILES  ${VOLCENGINE_SDK_DIRECTCONNECT_HEADER_MODEL}
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/volcengine/directconnect/model)
install(TARGETS ${PROJECT_NAME}
       ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
       LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
       RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)