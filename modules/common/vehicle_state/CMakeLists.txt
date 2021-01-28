# This file was generated from BUILD using tools/make_cmakelists.py.
include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(vehicle_state_provider
  vehicle_state_provider.cc
  vehicle_state_provider.h)
target_link_libraries(vehicle_state_provider
  ${PROJECT_SOURCE_DIR}/modules/common/log
  ${PROJECT_SOURCE_DIR}/modules/common/macro
  ${PROJECT_SOURCE_DIR}/modules/common/configs/config_gflags
  ${PROJECT_SOURCE_DIR}/modules/common/math/geometry
  ${PROJECT_SOURCE_DIR}/modules/common/math/quaternion
  ${PROJECT_SOURCE_DIR}/modules/common/status
  ${PROJECT_SOURCE_DIR}/modules/common/vehicle_state/proto/vehicle_state_proto
  ${PROJECT_SOURCE_DIR}/modules/localization/common/localization_common
  eigen)