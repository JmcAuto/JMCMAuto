include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(vehicle_model
  vehicle_model.cc
  vehicle_model.h)
target_link_libraries(vehicle_model
  /modules/common/util:util
  /modules/common:log
  /modules/common/configs:config_gflags
  /modules/common/configs:vehicle_config_helper
  /modules/common/vehicle_model/proto:vehicle_model_config_proto
  /modules/common/vehicle_state/proto:vehicle_state_proto)