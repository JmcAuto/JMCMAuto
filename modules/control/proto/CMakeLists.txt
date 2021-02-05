include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})
find_package(Protobuf REQUIRED)

PROTOBUF_GENERATE_CPP(control_proto_lib PROTO_HDRS
  calibration_table.proto
  control_cmd.proto
  control_conf.proto
  gain_scheduler_conf.proto
  lat_controller_conf.proto
  lon_controller_conf.proto
  pad_msg.proto
  pid_conf.proto
  steer_torque_calibration.proto)
add_library(control_proto
  ${control_proto_lib})
target_link_libraries(control_proto
  ${COMMON_LIB}
  canbus_proto
  common_proto
  drive_state_proto
  header_proto
  vehicle_signal_proto
  protobuf)
