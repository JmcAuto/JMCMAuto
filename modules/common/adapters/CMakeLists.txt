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

add_library(adapter_gflags
  adapter_gflags.cc
  adapter_gflags.h)
target_link_libraries(adapter_gflags
  /external:gflags)
add_library(adapter_manager
  adapter_manager.cc
  adapter_manager.h)
target_link_libraries(adapter_manager
  adapter_gflags
  message_adapters
  /modules/common
  /modules/common/adapters/proto:adapter_config_proto
  /modules/common/monitor_log/proto:monitor_log_proto
  /modules/common/transform_listener
  /modules/common/util
  glog
  ros//:ros_common)
add_library(adapter INTERFACE)
target_link_libraries(adapter INTERFACE
  adapter_gflags
  /modules/common/proto:common_proto
  /modules/common/time
  /modules/common/util
  com_google_protobuf//:protobuf
  glog
  ros//:ros_common)
add_library(message_adapters INTERFACE)
target_link_libraries(message_adapters INTERFACE
  adapter
  /modules/calibration/republish_msg/proto:relative_odometry_proto
  /modules/canbus/proto:canbus_proto
  /modules/common/monitor_log/proto:monitor_log_proto
  /modules/common/proto:drive_event_proto
  /modules/control/proto:control_proto
  /modules/data/proto:static_info_proto
  /modules/dreamview/proto:voice_detection_proto
  /modules/drivers/gnss/proto:gnss_best_pose_proto
  /modules/drivers/gnss/proto:gnss_raw_observation_proto
  /modules/drivers/gnss/proto:gnss_status_proto
  /modules/drivers/gnss/proto:imu_proto
  /modules/drivers/gnss/proto:ins_proto
  /modules/drivers/proto:sensor_proto
  /modules/localization/proto:gps_proto
  /modules/localization/proto:imu_proto
  /modules/drivers/gnss/proto:heading_proto
  /modules/drivers/gnss/proto:gnss_proto
  /modules/localization/proto:localization_proto
  /modules/localization/proto:sins_pva_proto
  /modules/map/relative_map/proto:navigation_proto
  /modules/monitor/proto:system_status_proto
  /modules/perception/proto:perception_proto
  /modules/planning/proto:planning_proto
  /modules/prediction/proto:prediction_proto
  /modules/routing/proto:routing_proto
  /modules/guardian/proto:guardian_proto
  /modules/remotecontrol/proto:remotecontrol_proto
  /modules/localization_dy/proto:localization_proto
  glog)


