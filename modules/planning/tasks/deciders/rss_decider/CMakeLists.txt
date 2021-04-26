include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(rss_decider
  rss_decider.cc
  rss_decider.h)
target_link_libraries(rss_decider
  /modules/common/status
  /modules/planning/common:planning_context
  /modules/planning/common:planning_gflags
  /modules/planning/common:reference_line_info
  /modules/planning/proto:planning_proto
  /modules/planning/tasks:task
  ad_rss_lib//:ad_rss)


