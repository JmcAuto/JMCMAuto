include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_subdirectory(proto)

add_library(vehicle_state_provider
  vehicle_state_provider.cc
  vehicle_state_provider.h)
target_link_libraries(vehicle_state_provider
  jmcauto_log
  macro
  config_gflags
  geometry
  quaternion
  status
  vehicle_state_proto
  localization_common
  )