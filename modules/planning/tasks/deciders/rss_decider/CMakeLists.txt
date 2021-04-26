include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(rss_decider
  rss_decider.cc
  rss_decider.h)
target_link_libraries(rss_decider
  /modules/common/status
  planning_context
  planning_gflags
  reference_line_info
  planning_proto
  /modules/planning/tasks:task
  ad_rss_lib//:ad_rss)


