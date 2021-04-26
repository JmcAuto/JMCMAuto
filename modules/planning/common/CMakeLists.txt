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

add_library(indexed_list INTERFACE)
target_link_libraries(indexed_list INTERFACE
  map_util
  boost)
add_library(indexed_queue INTERFACE)
target_link_libraries(indexed_queue INTERFACE
  map_util)
add_library(obstacle
  obstacle.cc
  obstacle.h)
target_link_libraries(obstacle
  indexed_list
  vehicle_config_helper
  map_util
  st_boundary
  planning_proto
  /modules/planning/reference_line)
add_library(obstacle_blocking_analyzer
  obstacle_blocking_analyzer.cc
  obstacle_blocking_analyzer.h)
target_link_libraries(obstacle_blocking_analyzer
  frame
  vehicle_config_helper
  /modules/planning/reference_line)
add_library(path_boundary
  path_boundary.cc
  path_boundary.h)
add_library(planning_context
  planning_context.cc
  planning_context.h)
target_link_libraries(planning_context
  macros
  path_data
  planning_status_proto
  eigen)
add_library(path_decision
  path_decision.cc
  path_decision.h)
target_link_libraries(path_decision
  obstacle
  /modules/planning/reference_line)
add_library(planning_gflags
  planning_gflags.cc
  planning_gflags.h)
target_link_libraries(planning_gflags
  /external:gflags)
add_library(reference_line_info
  reference_line_info.cc
  reference_line_info.h)
target_link_libraries(reference_line_info
  ego_info
  path_boundary
  path_decision
  planning_gflags
  st_graph_data
  log
  planning_thread_pool
  pnc_point_proto
  point_factory
  vehicle_state_provider
  /modules/map/pnc_map
  /modules/map/proto:map_proto
  path_data
  speed_data
  discretized_trajectory
  publishable_trajectory
  lattice_structure_proto
  /modules/planning/reference_line
  eigen)
add_library(speed_profile_generator
  speed_profile_generator.cc
  speed_profile_generator.h)
target_link_libraries(speed_profile_generator
  frame
  reference_line_info
  pnc_point_proto
  speed_data
  /modules/planning/math/curve1d
  /modules/planning/math/curve1d:polynomial_curve1d
  /modules/planning/math/curve1d:quartic_polynomial_curve1d
  /modules/planning/math/curve1d:quintic_polynomial_curve1d
  /modules/planning/math/piecewise_jerk:piecewise_jerk_speed_problem
  planning_config_proto)
add_library(local_view INTERFACE)
target_link_libraries(local_view INTERFACE
  /modules/localization/proto:localization_proto
  /modules/map/relative_map/proto:navigation_proto
  /modules/perception/proto:perception_proto
  planning_proto
  /modules/prediction/proto:prediction_proto)
add_library(frame
  frame.cc
  frame.h)
target_link_libraries(frame
  indexed_queue
  local_view
  obstacle
  open_space_info
  reference_line_info
  log
  macros
  vehicle_config_helper
  vehicle_state_provider
  /modules/map/hdmap:hdmap_util
  /modules/map/pnc_map
  discretized_trajectory
  publishable_trajectory
  util_lib
  planning_config_proto
  planning_proto
  /modules/planning/reference_line:reference_line_provider
  eigen)
add_library(history
  history.cc
  history.h)
target_link_libraries(history
  planning_gflags
  log
  macros
  decision_proto
  planning_proto
  eigen)
add_library(speed_limit
  speed_limit.cc
  speed_limit.h)
target_link_libraries(speed_limit
  /modules/common/math
  planning_proto)
add_library(ego_info
  ego_info.cc
  ego_info.h)
target_link_libraries(ego_info
  obstacle
  macros
  log
  vehicle_config_helper
  vehicle_config_proto
  geometry
  /modules/common/vehicle_state/proto:vehicle_state_proto
  /modules/planning/reference_line
  eigen)
add_library(planning_common INTERFACE)
target_link_libraries(planning_common INTERFACE
  ego_info
  frame
  planning_gflags
  speed_limit
  st_graph_data
  log
  /modules/localization/common:localization_common
  /modules/localization/proto:localization_proto
  eigen)
add_library(trajectory_stitcher
  trajectory_stitcher.cc
  trajectory_stitcher.h)
target_link_libraries(trajectory_stitcher
  log
  pnc_point_proto
  /modules/common/vehicle_model
  planning_gflags
  publishable_trajectory
  /modules/planning/reference_line)
add_library(open_space_info
  open_space_info.cc
  open_space_info.h)
target_link_libraries(open_space_info
  log
  vehicle_config_helper
  /modules/common/vehicle_state/proto:vehicle_state_proto
  /modules/map/hdmap:hdmap_util
  /modules/map/pnc_map
  indexed_queue
  obstacle
  planning_gflags
  discretized_trajectory
  publishable_trajectory
  eigen)
add_library(st_graph_data
  st_graph_data.cc
  st_graph_data.h)
target_link_libraries(st_graph_data
  planning_gflags
  speed_limit
  st_boundary)
add_library(planning_thread_pool
  planning_thread_pool.cc
  planning_thread_pool.h)
target_link_libraries(planning_thread_pool
  planning_gflags
  macro
  ctpl_stl)


