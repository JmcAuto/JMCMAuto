include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(opendrive_adapter
  coordinate_convert_tool.cc
  opendrive_adapter.cc
  proto_organizer.cc
  xml_parser/header_xml_parser.cc
  xml_parser/junctions_xml_parser.cc
  xml_parser/lanes_xml_parser.cc
  xml_parser/objects_xml_parser.cc
  xml_parser/roads_xml_parser.cc
  xml_parser/signals_xml_parser.cc
  xml_parser/util_xml_parser.cc
  coordinate_convert_tool.h
  opendrive_adapter.h
  proto_organizer.h
  xml_parser/common_define.h
  xml_parser/header_xml_parser.h
  xml_parser/junctions_xml_parser.h
  xml_parser/lanes_xml_parser.h
  xml_parser/objects_xml_parser.h
  xml_parser/roads_xml_parser.h
  xml_parser/signals_xml_parser.h
  xml_parser/status.h
  xml_parser/util_xml_parser.h)
target_link_libraries(opendrive_adapter
  jmcauto_log
  math
  status
  util
  map_proto
  proj4
  tinyxml2)


