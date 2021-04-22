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

include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

if(APPLE)
  set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -undefined dynamic_lookup -flat_namespace")
elseif(UNIX)
  set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Wl,--build-id")
endif()

enable_testing()

add_library(planning_lib
  planning.cc
  planning.h)
target_link_libraries(planning_lib
  on_lane_planning
  /modules/common/util:util
  /modules/common:jmc_auto_app
  /modules/common/util:message_util
  /modules/common/adapters:adapter_gflags
  /modules/localization/proto:localization_proto
  /modules/map/relative_map/proto:navigation_proto
  /modules/perception/proto:perception_proto
  /modules/planning/common:history
  /modules/planning/proto:planning_proto
  /modules/prediction/proto:prediction_proto
  ros//:ros_common)
add_library(planning_base
  planning_base.cc
  planning_base.h)
target_link_libraries(planning_base
  /modules/common/util:util
  /modules/common:log
  /modules/common/configs:config_gflags
  /modules/common/math:quaternion
  /modules/common/proto:pnc_point_proto
  /modules/common/util:future
  /modules/common/util:message_util
  /modules/common/vehicle_state:vehicle_state_provider
  /modules/localization/proto:localization_proto
  /modules/map/hdmap:hdmap_util
  /modules/perception/proto:perception_proto
  /modules/planning/common:history
  /modules/planning/common:planning_common
  /modules/planning/common:planning_gflags
  /modules/planning/common:trajectory_stitcher
  /modules/planning/common/smoothers:smoother
  /modules/planning/common/util:util_lib
  /modules/planning/planner
  /modules/planning/planner:planner_dispatcher
  /modules/planning/proto:planning_proto
  /modules/planning/proto:traffic_rule_config_proto
  /modules/planning/tasks:task_factory
  /modules/planning/traffic_rules:traffic_decider
  /modules/prediction/proto:prediction_proto)
add_library(on_lane_planning
  on_lane_planning.cc
  on_lane_planning.h)
target_link_libraries(on_lane_planning
  planning_base
  /modules/planning/common:planning_thread_pool)


