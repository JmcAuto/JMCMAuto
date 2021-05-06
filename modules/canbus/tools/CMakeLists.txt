include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_executable(teleop
  main.cc)
target_link_libraries(teleop
  ${COMMON_LIB}
  teleop_lib
  -lpthread)

add_library(teleop_lib
  teleop.cc
  teleop.h)
target_link_libraries(teleop_lib
  teleop_common
  common
  jmc_auto_app
  adapter_manager)

add_library(teleop_common
  teleop_gflags.cc
  teleop_gflags.h)
target_link_libraries(teleop_lib
  gflags)
