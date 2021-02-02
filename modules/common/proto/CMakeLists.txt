include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(error_code_proto
  error_code.pb.cc
  error_code.pb.h)
target_link_libraries(error_code_proto
${COMMON_LIB}
  protobuf)

add_library(header_proto
  header.pb.cc
  header.pb.h)
target_link_libraries(header_proto
${COMMON_LIB}
  error_code_proto
  protobuf)

add_library(vehicle_signal_proto
  vehicle_signal.pb.cc
  vehicle_signal.pb.h)
target_link_libraries(vehicle_signal_proto
${COMMON_LIB}
  protobuf)
    
add_library(common_proto
  geometry.pb.cc
  geometry.pb.h)
target_link_libraries(common_proto
${COMMON_LIB}
  error_code_proto
  header_proto
  protobuf)

add_library(pnc_point_proto
  pnc_point.pb.cc
  pnc_point.pb.h)
target_link_libraries(pnc_point_proto
${COMMON_LIB}
  protobuf)

add_library(drive_event_proto
  drive_event.pb.cc
  drive_event.pb.h)
target_link_libraries(drive_event_proto
${COMMON_LIB}
  header_proto
  #pose_proto
  protobuf)


add_library(drive_state_proto
drive_state.pb.cc
drive_state.pb.h)
target_link_libraries(drive_state_proto
${COMMON_LIB}
  protobuf)

add_library(record_proto
record.pb.cc
record.pb.h)
target_link_libraries(record_proto
${COMMON_LIB}
  protobuf)


add_library(proto_desc_proto
proto_desc.pb.cc
proto_desc.pb.h)
target_link_libraries(proto_desc_proto
${COMMON_LIB}
protobuf)