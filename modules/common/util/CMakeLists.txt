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
  ${PROJECT_SOURCE_DIR}/modules/common/math
  ${PROJECT_SOURCE_DIR}/modules/common/proto/pnc_point_proto
  ${PROJECT_SOURCE_DIR}/modules/common/time
  ${PROJECT_SOURCE_DIR}/modules/perception/proto/perception_proto)
add_library(disjoint_set 
  disjoint_set.h)
add_library(lru_cache lru_cache.h)
add_library(threadpool threadpool.h)
add_library(ctpl_stl ctpl_stl.h)
add_library(color color.h)
add_library(string_util
  string_util.cc
  string_util.h)
target_link_libraries(string_util
  protobuf)
add_library(map_util map_util.h)
target_link_libraries(map_util
  protobuf)
add_library(factory factory.h)
target_link_libraries(factory
  ${PROJECT_SOURCE_DIR}/modules/common/log)
add_library(points_downsampler points_downsampler.h)
target_link_libraries(points_downsampler
  ${PROJECT_SOURCE_DIR}/modules/common/log
  ${PROJECT_SOURCE_DIR}/modules/common/math/geometry)
add_library(json_util
  json_util.cc
  json_util.h)
target_link_libraries(json_util
  ${PROJECT_SOURCE_DIR}/modules/common/log
  third_party/json
  protobuf)
add_library(http_client
  http_client.cc
  http_client.h)
target_link_libraries(http_client
  ${PROJECT_SOURCE_DIR}/modules/common/log
  ${PROJECT_SOURCE_DIR}/modules/common/status
  ${PROJECT_SOURCE_DIR}/modules/common/util/string_util
  third_party/json
  curlpp)
add_library(future future.h)
target_link_libraries(future
  absl/memory
  absl/strings
  absl/types/optional
  absl/utility)
add_library(message_util message_util.h)
target_link_libraries(message_util
  ${PROJECT_SOURCE_DIR}/modules/common/time
  absl/strings
  protobuf)
add_library(point_factory point_factory.h)
target_link_libraries(point_factory
  ${PROJECT_SOURCE_DIR}/modules/common/math/geometry
  ${PROJECT_SOURCE_DIR}/modules/common/proto/pnc_point_proto)


