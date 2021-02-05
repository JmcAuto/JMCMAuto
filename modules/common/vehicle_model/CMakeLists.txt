include_directories(PROJECT_SOURCE_DIR)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_subdirectory(proto)

add_library(vehicle_model
  vehicle_model.cc
  vehicle_model.h)
target_link_libraries(vehicle_model
  ${COMMON_LIB}
  util
  jmcauto_log
  config_gflags
  vehicle_config_helper
  vehicle_model_config_proto
  vehicle_state_proto)