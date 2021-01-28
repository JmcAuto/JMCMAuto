include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_subdirectory(
  adapters
  configs
  filters
  kv_db
  math
  monitor_log
  proto
  status
  time
  transform_listener
  util
  vehicle_model
  vehicle_state)

add_library(common INTERFACE)
target_link_libraries(common INTERFACE
  log
  macro
  macros)
add_library(macro
  macro.h)
add_library(macros
  macros.h)
add_library(log
  log.h)
target_link_libraries(log
  glog)
add_library(jmc_auto_app
  jmc_auto_app.cc
  jmc_auto_app.h)
target_link_libraries(jmc_auto_app
  log
  modules/common/status
  modules/common/util/string_util)