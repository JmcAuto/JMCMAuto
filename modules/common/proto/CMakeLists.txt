include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(error_code_proto
  error_code.pb.cc)
target_link_libraries(error_code
  protobuf)

add_library(header_proto
  header.pb.cc)
target_link_libraries(header_proto
  error_code_proto
  protobuf)

add_library(vehicle_signal_proto
  vehicle_signal.pb.cc)
target_link_libraries(vehicle_signal_proto
  protobuf)
    
add_library(common_proto
  geometry.pb.cc)
target_link_libraries(common_proto
  error_code_proto
  header_proto
  protobuf)

add_library(pnc_point_proto
  pnc_point.pb.cc)
target_link_libraries(pnc_point_proto
  protobuf)

add_library(drive_event_proto
  drive_event.pb.cc)
target_link_libraries(drive_event_proto
  header_proto
  /modules/localization/proto:pose_proto
  protobuf)


add_library(drive_state_proto
drive_state.pb.cc)
target_link_libraries(drive_state_proto
  protobuf)

add_library(record_proto
record.pb.cc)
target_link_libraries(record_proto
  protobuf)


add_library(proto_desc_proto
proto_desc.pb.cc)
target_link_libraries(proto_desc_proto
protobuf)