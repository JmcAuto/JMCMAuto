# This file was generated from BUILD using tools/make_cmakelists.py.

cmake_minimum_required(VERSION 3.1)

if(${CMAKE_VERSION} VERSION_LESS 3.12)
    cmake_policy(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})
else()
    cmake_policy(VERSION 3.12)
endif()

cmake_minimum_required (VERSION 3.0)
cmake_policy(SET CMP0048 NEW)



# Prevent CMake from setting -rdynamic on Linux (!!).
SET(CMAKE_SHARED_LIBRARY_LINK_C_FLAGS "")
SET(CMAKE_SHARED_LIBRARY_LINK_CXX_FLAGS "")

# Set default build type.
if(NOT CMAKE_BUILD_TYPE)
  message(STATUS "Setting build type to 'RelWithDebInfo' as none was specified.")
  set(CMAKE_BUILD_TYPE "RelWithDebInfo" CACHE STRING
      "Choose the type of build, options are: Debug Release RelWithDebInfo MinSizeRel."
      FORCE)
endif()

# When using Ninja, compiler output won't be colorized without this.
include(CheckCXXCompilerFlag)
CHECK_CXX_COMPILER_FLAG(-fdiagnostics-color=always SUPPORTS_COLOR_ALWAYS)
if(SUPPORTS_COLOR_ALWAYS)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fdiagnostics-color=always")
endif()

# Implement ASAN/UBSAN options
if(UPB_ENABLE_ASAN)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address")
  set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fsanitize=address")
  set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -fsanitize=address")
  set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -fsanitize=address")
endif()

if(UPB_ENABLE_UBSAN)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=undefined")
  set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fsanitize=address")
  set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -fsanitize=address")
  set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -fsanitize=address")
endif()

include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

if(APPLE)
  set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -undefined dynamic_lookup -flat_namespace")
elseif(UNIX)
  set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Wl,--build-id")
endif()

enable_testing()

add_library(util
  file.cc
  string_tokenizer.cc
  util.cc
  blocking_queue.h
  file.h
  string_tokenizer.h
  util.h)
target_link_libraries(util
  string_util
  /modules/common/math
  /modules/common/proto:pnc_point_proto
  /modules/common/time
  /modules/perception/proto:perception_proto)
add_library(disjoint_set INTERFACE)
add_library(lru_cache INTERFACE)
add_library(threadpool INTERFACE)
add_library(ctpl_stl INTERFACE)
add_library(color INTERFACE)
add_library(string_util
  string_util.cc
  string_util.h)
target_link_libraries(string_util
  com_google_protobuf//:protobuf)
add_library(map_util INTERFACE)
target_link_libraries(map_util INTERFACE
  com_google_protobuf//:protobuf)
add_library(factory INTERFACE)
target_link_libraries(factory INTERFACE
  /modules/common:log)
add_library(points_downsampler INTERFACE)
target_link_libraries(points_downsampler INTERFACE
  /modules/common:log
  /modules/common/math:geometry)
add_library(json_util
  json_util.cc
  json_util.h)
target_link_libraries(json_util
  /modules/common:log
  /third_party/json
  com_google_protobuf//:protobuf)
add_library(http_client
  http_client.cc
  http_client.h)
target_link_libraries(http_client
  /modules/common:log
  /modules/common/status
  /modules/common/util:string_util
  /third_party/json
  curlpp)
add_library(future INTERFACE)
target_link_libraries(future INTERFACE
  com_google_absl//absl/memory
  com_google_absl//absl/strings
  com_google_absl//absl/types:optional
  com_google_absl//absl/utility)
add_library(message_util INTERFACE)
target_link_libraries(message_util INTERFACE
  /modules/common/time
  com_google_absl//absl/strings
  com_google_protobuf//:protobuf)
add_library(point_factory INTERFACE)
target_link_libraries(point_factory INTERFACE
  /modules/common/math:geometry
  /modules/common/proto:pnc_point_proto)


