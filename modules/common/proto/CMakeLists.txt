include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})
find_package(Protobuf REQUIRED)

PROTOBUF_GENERATE_CPP(error_code_proto_lib PROTO_HDRS
  error_code.proto)
add_library(error_code_proto
  ${error_code_proto_lib})
target_link_libraries(error_code_proto
  ${COMMON_LIB}
  protobuf)

PROTOBUF_GENERATE_CPP(header_proto_lib PROTO_HDRS
  header.proto)
add_library(header_proto
  ${header_proto_lib})
target_link_libraries(header_proto
  ${COMMON_LIB}
  error_code_proto
  protobuf)

PROTOBUF_GENERATE_CPP(vehicle_signal_proto_lib PROTO_HDRS
  vehicle_signal.proto)
add_library(vehicle_signal_proto
  ${vehicle_signal_proto_lib})
target_link_libraries(vehicle_signal_proto
  ${COMMON_LIB}
  protobuf)

PROTOBUF_GENERATE_CPP(common_proto_lib PROTO_HDRS
  geometry.proto)
add_library(common_proto
  ${common_proto_lib})
target_link_libraries(common_proto
  ${COMMON_LIB}
  error_code_proto
  header_proto
  protobuf)

PROTOBUF_GENERATE_CPP(pnc_point_proto_lib PROTO_HDRS
  pnc_point.proto)
add_library(pnc_point_proto
  ${pnc_point_proto_lib})
target_link_libraries(pnc_point_proto
  ${COMMON_LIB}
  protobuf)

PROTOBUF_GENERATE_CPP(drive_event_proto_lib PROTO_HDRS
  drive_event.proto)
add_library(drive_event_proto
  ${drive_event_proto_lib})
target_link_libraries(drive_event_proto
  ${COMMON_LIB}
  header_proto
  #pose_proto
  protobuf)

PROTOBUF_GENERATE_CPP(drive_state_proto_lib PROTO_HDRS
  drive_state.proto)
add_library(drive_state_proto
  ${drive_state_proto_lib})
target_link_libraries(drive_state_proto
  ${COMMON_LIB}
  protobuf)

PROTOBUF_GENERATE_CPP(record_proto_lib PROTO_HDRS
  record.proto)
add_library(record_proto
  ${record_proto_lib})
target_link_libraries(record_proto
  ${COMMON_LIB}
  protobuf)

PROTOBUF_GENERATE_CPP(proto_desc_proto_lib PROTO_HDRS
  proto_desc.proto)
add_library(proto_desc_proto
  ${proto_desc_proto_lib})
target_link_libraries(proto_desc_proto
  ${COMMON_LIB}
  protobuf)
