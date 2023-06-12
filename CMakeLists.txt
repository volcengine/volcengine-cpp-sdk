cmake_minimum_required(VERSION 3.1)
project(volcengine-cpp-sdk)

set(CMAKE_CXX_STANDARD 11)
add_definitions(-w)

message(STATUS "OS platform: ${OS_PLATFORM}")

message(STATUS "Looking for OpenSSL")

find_package(OpenSSL REQUIRED)
if (NOT OPENSSL_FOUND)
    message(FATAL_ERROR "Could not find openSSL")
endif ()
message(STATUS "OpenSSL version: ${OPENSSL_VERSION}")
message(STATUS "OpenSSL include: ${OPENSSL_INCLUDE_DIR}")
message(STATUS "OpenSSL lib: ${OPENSSL_LIBRARIES}")

set(CLIENT_SSL_LIBS ${OPENSSL_LIBRARIES})
set(CLIENT_SSL_INCLUDE_DIRS ${OPENSSL_INCLUDE_DIR})

find_package(CURL REQUIRED)

message(STATUS "CURL version: ${CURL_VERSION_STRING}")


message(STATUS "CURL include: ${CURL_INCLUDE_DIRS}")
message(STATUS "CURL lib: ${CURL_LIBRARIES}")
set(CLIENT_CURL_LIBS ${CURL_LIBRARIES})
set(CLIENT_CURL_INCLUDE_DIRS ${CURL_INCLUDE_DIRS})

include(GNUInstallDirs)

set(TARGET_OUTPUT_NAME_PREFIX "volcengine-cpp-sdk-" CACHE STRING "The target's output name prefix")

set(BUILD_PRODUCT "" CACHE STRING "Build by lower name of product")
set(SKIP_CORE "" CACHE STRING "Build skip core")

if(BUILD_PRODUCT STREQUAL "")
  add_subdirectory(${TARGET_OUTPUT_NAME_PREFIX}core)
else()
  if(SKIP_CORE STREQUAL "skip")
      add_subdirectory(${TARGET_OUTPUT_NAME_PREFIX}${BUILD_PRODUCT})
  else()
      add_subdirectory(${TARGET_OUTPUT_NAME_PREFIX}core)
      add_subdirectory(${TARGET_OUTPUT_NAME_PREFIX}${BUILD_PRODUCT})
  endif()
endif()



