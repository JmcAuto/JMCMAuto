include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})
add_compile_options(-fPIC)

add_subdirectory(common)
add_subdirectory(proto)
add_subdirectory(rtk)

add_executable(localization main.cc)
target_link_libraries(localization
  ${COMMON_LIB}
  localization_lib
  #localization_base
  common)

#add_library(localization_base
#  localization_base.cc
#  localization_base.h)
#target_link_libraries(localization_base
#  ${COMMON_LIB}
#  common
#  config_gflags
#  status
#  localization_common
#  localization_proto)
add_library(localization_lib
  localization.cc
  localization.h)
target_link_libraries(localization_lib
  ${COMMON_LIB}
  jmc_auto_app
  util
  factory
  #localization_base
  #gnss_pnt_result_proto
  measure_proto
  rtk_localization)