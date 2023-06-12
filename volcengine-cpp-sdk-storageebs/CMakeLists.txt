cmake_minimum_required(VERSION 3.1)
project(volcengine-cpp-sdk-storageebs)

set(CMAKE_CXX_STANDARD 11)


set(VOLCENGINE_SDK_STORAGEEBS_HEADER
    include/volcengine/storageebs/StorageebsClient.h
)

set(VOLCENGINE_SDK_STORAGEEBS_HEADER_MODEL
                include/volcengine/storageebs/model/AttachVolumeRequest.h
                include/volcengine/storageebs/model/AttachVolumeResult.h
                include/volcengine/storageebs/model/CreateTagsRequest.h
                include/volcengine/storageebs/model/CreateTagsResult.h
                include/volcengine/storageebs/model/CreateVolumeRequest.h
                include/volcengine/storageebs/model/CreateVolumeResult.h
                include/volcengine/storageebs/model/DeleteTagsRequest.h
                include/volcengine/storageebs/model/DeleteTagsResult.h
                include/volcengine/storageebs/model/DeleteVolumeRequest.h
                include/volcengine/storageebs/model/DeleteVolumeResult.h
                include/volcengine/storageebs/model/DescribeTagsRequest.h
                include/volcengine/storageebs/model/DescribeTagsResult.h
                include/volcengine/storageebs/model/DescribeVolumesRequest.h
                include/volcengine/storageebs/model/DescribeVolumesResult.h
                include/volcengine/storageebs/model/DetachVolumeRequest.h
                include/volcengine/storageebs/model/DetachVolumeResult.h
                include/volcengine/storageebs/model/ErrorForCreateTagsOutput.h
                include/volcengine/storageebs/model/ExtendVolumeRequest.h
                include/volcengine/storageebs/model/ExtendVolumeResult.h
                include/volcengine/storageebs/model/ModifyVolumeAttributeRequest.h
                include/volcengine/storageebs/model/ModifyVolumeAttributeResult.h
                include/volcengine/storageebs/model/ModifyVolumeChargeTypeRequest.h
                include/volcengine/storageebs/model/ModifyVolumeChargeTypeResult.h
                include/volcengine/storageebs/model/OperationDetailForCreateTagsOutput.h
                include/volcengine/storageebs/model/TagFilterForDescribeTagsInput.h
                include/volcengine/storageebs/model/TagFilterForDescribeVolumesInput.h
                include/volcengine/storageebs/model/TagForCreateTagsInput.h
                include/volcengine/storageebs/model/TagForCreateVolumeInput.h
                include/volcengine/storageebs/model/TagForDescribeVolumesOutput.h
                include/volcengine/storageebs/model/TagResourceForDescribeTagsOutput.h
                include/volcengine/storageebs/model/TerminateVolumesRequest.h
                include/volcengine/storageebs/model/TerminateVolumesResult.h
                include/volcengine/storageebs/model/VolumeForDescribeVolumesOutput.h
    )

set(VOLCENGINE_SDK_STORAGEEBS_LIB
    src/StorageebsClient.cpp
    src/model/storageebs/AttachVolumeRequest.cpp
    src/model/storageebs/AttachVolumeResult.cpp
    src/model/storageebs/CreateTagsRequest.cpp
    src/model/storageebs/CreateTagsResult.cpp
    src/model/storageebs/CreateVolumeRequest.cpp
    src/model/storageebs/CreateVolumeResult.cpp
    src/model/storageebs/DeleteTagsRequest.cpp
    src/model/storageebs/DeleteTagsResult.cpp
    src/model/storageebs/DeleteVolumeRequest.cpp
    src/model/storageebs/DeleteVolumeResult.cpp
    src/model/storageebs/DescribeTagsRequest.cpp
    src/model/storageebs/DescribeTagsResult.cpp
    src/model/storageebs/DescribeVolumesRequest.cpp
    src/model/storageebs/DescribeVolumesResult.cpp
    src/model/storageebs/DetachVolumeRequest.cpp
    src/model/storageebs/DetachVolumeResult.cpp
    src/model/storageebs/ErrorForCreateTagsOutput.cpp
    src/model/storageebs/ExtendVolumeRequest.cpp
    src/model/storageebs/ExtendVolumeResult.cpp
    src/model/storageebs/ModifyVolumeAttributeRequest.cpp
    src/model/storageebs/ModifyVolumeAttributeResult.cpp
    src/model/storageebs/ModifyVolumeChargeTypeRequest.cpp
    src/model/storageebs/ModifyVolumeChargeTypeResult.cpp
    src/model/storageebs/OperationDetailForCreateTagsOutput.cpp
    src/model/storageebs/TagFilterForDescribeTagsInput.cpp
    src/model/storageebs/TagFilterForDescribeVolumesInput.cpp
    src/model/storageebs/TagForCreateTagsInput.cpp
    src/model/storageebs/TagForCreateVolumeInput.cpp
    src/model/storageebs/TagForDescribeVolumesOutput.cpp
    src/model/storageebs/TagResourceForDescribeTagsOutput.cpp
    src/model/storageebs/TerminateVolumesRequest.cpp
    src/model/storageebs/TerminateVolumesResult.cpp
    src/model/storageebs/VolumeForDescribeVolumesOutput.cpp
)

add_library(${PROJECT_NAME}
     STATIC ${VOLCENGINE_SDK_STORAGEEBS_LIB}
     ${VOLCENGINE_SDK_STORAGEEBS_HEADER}
     ${VOLCENGINE_SDK_STORAGEEBS_HEADER_MODEL}
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


install(FILES ${VOLCENGINE_SDK_STORAGEEBS_HEADER}
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/volcengine/storageebs)
install(FILES  ${VOLCENGINE_SDK_STORAGEEBS_HEADER_MODEL}
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/volcengine/storageebs/model)
install(TARGETS ${PROJECT_NAME}
       ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
       LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
       RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)