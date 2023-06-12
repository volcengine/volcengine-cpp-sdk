cmake_minimum_required(VERSION 3.1)

set(CMAKE_CXX_STANDARD 11)

project(${TARGET_OUTPUT_NAME_PREFIX}core)

set(VOLCENGINE_SDK_HEADER
        include/volcengine/core/VolcengineResponse.h
        include/volcengine/core/VolcengineRequest.h
        include/volcengine/core/VolcengineMetadata.h
        include/volcengine/core/RequestBuilder.h
        include/volcengine/core/Version.h
        include/volcengine/core/ResultData.h
        include/volcengine/core/VolcengineClient.h
        include/volcengine/core/VolcengineClientConfig.h
        include/volcengine/core/VolcengineError.h
        include/volcengine/core/Volcengine.h
        )

set(VOLCENGINE_SDK_HEADER_AUTH
        include/volcengine/core/auth/Credentials.h
        include/volcengine/core/auth/CredentialsProvider.h
        include/volcengine/core/auth/AuthSigner.h
        include/volcengine/core/auth/StaticCredentialsProvider.h
        include/volcengine/core/auth/VolcengineAuthSigner.h
        )
set(VOLCENGINE_SDK_HEADER_COMMON
        include/volcengine/core/common/Common.h
        include/volcengine/core/common/SystemInfo.h
        )
set(VOLCENGINE_SDK_HEADER_MODEL
        include/volcengine/core/model/RequestInfo.h
        )
set(VOLCENGINE_SDK_HEADER_TRANSPORT
        include/volcengine/core/transport/http/HttpClient.h
        include/volcengine/core/transport/http/HttpRequest.h
        include/volcengine/core/transport/http/HttpResponse.h
        include/volcengine/core/transport/http/Url.h
        include/volcengine/core/transport/Transport.h
        include/volcengine/core/transport/TransportConfig.h
        include/volcengine/core/transport/DefaultTransport.h
        )
set(VOLCENGINE_SDK_HEADER_TRANSPORT_HTTP
        include/volcengine/core/transport/http/HttpClient.h
        include/volcengine/core/transport/http/HttpRequest.h
        include/volcengine/core/transport/http/HttpResponse.h
        include/volcengine/core/transport/http/Url.h
        )
set(VOLCENGINE_SDK_HEADER_UTILS
        include/volcengine/core/utils/StringUtils.h
        include/volcengine/core/utils/MapUtils.h
        include/volcengine/core/utils/CryptoUtils.h
        include/volcengine/core/utils/json.hpp
        )

set(VOLCENGINE_SDK_LIB
        src/transport/http/HttpClient.cpp
        src/transport/http/HttpRequest.cpp
        src/transport/http/HttpResponse.cpp
        src/transport/http/Url.cpp
        src/transport/Transport.cpp
        src/transport/TransportConfig.cpp
        src/transport/DefaultTransport.cpp
        src/auth/VolcengineAuthSigner.cpp
        src/auth/StaticCredentialsProvider.cpp
        src/external/json/json.hpp
        src/VolcengineRequest.cpp
        src/RequestBuilder.cpp
        src/VolcengineMetadata.cpp
        src/VolcengineClient.cpp
        src/Volcengine.cpp
        src/utils/CryptoUtils.cpp
        src/utils/MapUtils.cpp
        src/utils/StringUtils.cpp
        )

add_library(${PROJECT_NAME}
        STATIC ${VOLCENGINE_SDK_LIB}
        ${VOLCENGINE_SDK_HEADER}
        ${VOLCENGINE_SDK_HEADER_AUTH}
        ${VOLCENGINE_SDK_HEADER_COMMON}
        ${VOLCENGINE_SDK_HEADER_MODEL}
        ${VOLCENGINE_SDK_HEADER_TRANSPORT}
        ${VOLCENGINE_SDK_HEADER_TRANSPORT_HTTP}
        ${VOLCENGINE_SDK_HEADER_UTILS})

set_target_properties(
        ${PROJECT_NAME}
        PROPERTIES
        LINKER_LANGUAGE CXX
        ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
        LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
        RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
        OUTPUT_NAME ${PROJECT_NAME}
)

target_include_directories(${PROJECT_NAME}
        PRIVATE include
        )

target_link_libraries(${PROJECT_NAME}
        curl
        crypto
        )



target_include_directories(${PROJECT_NAME}
        PRIVATE ${CLIENT_SSL_INCLUDE_DIRS}
        PRIVATE ${CLIENT_CURL_INCLUDE_DIRS}
        )


install(FILES ${VOLCENGINE_SDK_HEADER}
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/volcengine/core)
install(FILES ${VOLCENGINE_SDK_HEADER_COMMON}
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/volcengine/core/common)
install(FILES ${VOLCENGINE_SDK_HEADER_MODEL}
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/volcengine/core/model)
install(FILES ${VOLCENGINE_SDK_HEADER_TRANSPORT}
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/volcengine/core/transport)
install(FILES ${VOLCENGINE_SDK_HEADER_TRANSPORT}
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/volcengine/core/transport/http)
install(FILES ${VOLCENGINE_SDK_HEADER_UTILS}
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/volcengine/core/utils)
install(FILES ${VOLCENGINE_SDK_HEADER_AUTH}
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/volcengine/core/auth)

install(TARGETS ${PROJECT_NAME}
        ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
        )