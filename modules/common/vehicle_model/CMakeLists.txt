include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(vehicle_model
  vehicle_model.cc
  vehicle_model.h)
target_link_libraries(vehicle_model
  ${PROJECT_SOURCE_DIR}/modules/common/util/util
  ${PROJECT_SOURCE_DIR}/modules/common/log
  ${PROJECT_SOURCE_DIR}/modules/common/configs/config_gflags
  ${PROJECT_SOURCE_DIR}/modules/common/configs/vehicle_config_helper
  ${PROJECT_SOURCE_DIR}/modules/common/vehicle_model/proto/vehicle_model_config_proto
  ${PROJECT_SOURCE_DIR}/modules/common/vehicle_state/proto/vehicle_state_proto)