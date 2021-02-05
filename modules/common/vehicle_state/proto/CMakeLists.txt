include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(vehicle_state_proto
  vehicle_state.pb.cc
  vehicle_state.pb.h)
target_link_libraries(vehicle_state_proto
  ${COMMON_LIB}
  common_proto
  header_proto
  protobuf)