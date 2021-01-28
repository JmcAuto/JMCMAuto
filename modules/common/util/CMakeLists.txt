include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(util
  file.cc
  string_tokenizer.cc
  util.cc
  blocking_queue.h
  file.h
  string_tokenizer.h
  util.h)
target_link_libraries(util
  string_util
  /modules/common/math
  /modules/common/proto:pnc_point_proto
  /modules/common/time
  /modules/perception/proto:perception_proto)
add_library(disjoint_set 
  disjoint_set.h)
add_library(lru_cache INTERFACE)
add_library(threadpool INTERFACE)
add_library(ctpl_stl INTERFACE)
add_library(color INTERFACE)
add_library(string_util
  string_util.cc
  string_util.h)
target_link_libraries(string_util
  com_google_protobuf//:protobuf)
add_library(map_util INTERFACE)
target_link_libraries(map_util INTERFACE
  protobuf)
add_library(factory INTERFACE)
target_link_libraries(factory INTERFACE
  /modules/common:log)
add_library(points_downsampler INTERFACE)
target_link_libraries(points_downsampler INTERFACE
  /modules/common:log
  /modules/common/math:geometry)
add_library(json_util
  json_util.cc
  json_util.h)
target_link_libraries(json_util
  /modules/common:log
  /third_party/json
  protobuf)
add_library(http_client
  http_client.cc
  http_client.h)
target_link_libraries(http_client
  /modules/common:log
  /modules/common/status
  /modules/common/util:string_util
  /third_party/json
  curlpp)
add_library(future INTERFACE)
target_link_libraries(future INTERFACE
  com_google_absl//absl/memory
  com_google_absl//absl/strings
  com_google_absl//absl/types:optional
  com_google_absl//absl/utility)
add_library(message_util INTERFACE)
target_link_libraries(message_util INTERFACE
  /modules/common/time
  com_google_absl//absl/strings
  protobuf)
add_library(point_factory INTERFACE)
target_link_libraries(point_factory INTERFACE
  /modules/common/math:geometry
  /modules/common/proto:pnc_point_proto)


