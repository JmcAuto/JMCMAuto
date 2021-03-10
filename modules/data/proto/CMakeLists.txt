include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(static_info_proto
  static_info.pb.cc
  static_info.pb.h)
target_link_libraries(static_info_proto
  canbus_proto
  vehicle_config_proto
  control_proto
  routing_proto
  protobuf)

add_library(recorder_info_proto
  recorder_info.pb.cc
  recorder_info.pb.h)
target_link_libraries(recorder_info_proto
  protobuf)

add_library(task_proto
  task.pb.cc
  task.pb.h)
target_link_libraries(task_proto
  static_info_proto
  protobuf)

add_library(warehouse_query_proto
  warehouse_query.pb.cc
  warehouse_query.pb.h)
target_link_libraries(warehouse_query_proto
  task_proto
  protobuf)