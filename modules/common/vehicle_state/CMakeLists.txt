# This file was generated from BUILD using tools/make_cmakelists.py.
include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(vehicle_state_provider
  vehicle_state_provider.cc
  vehicle_state_provider.h)
target_link_libraries(vehicle_state_provider
  modules/common/log
  modules/common/macro
  modules/common/configs/config_gflags
  modules/common/math/geometry
  modules/common/math/quaternion
  modules/common/status
  modules/common/vehicle_state/proto/vehicle_state_proto
  modules/localization/common/localization_common
  eigen)