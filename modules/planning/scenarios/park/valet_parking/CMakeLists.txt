include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(valet_parking
  stage_approaching_parking_spot.cc
  stage_parking.cc
  valet_parking_scenario.cc
  stage_approaching_parking_spot.h
  stage_parking.h
  valet_parking_scenario.h)
target_link_libraries(valet_parking
  log
  planning_proto
  /modules/planning/scenarios:scenario)


