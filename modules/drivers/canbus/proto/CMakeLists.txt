include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})
add_compile_options(-fPIC)

add_library(drivers_canbus_proto
  can_card_parameter.pb.cc
  can_card_parameter.pb.h
  sensor_canbus_conf.pb.cc
  sensor_canbus_conf.pb.h)
target_link_libraries(drivers_canbus_proto
  common_proto
  header_proto
  protobuf)