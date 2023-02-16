# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\TravelUI_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\TravelUI_autogen.dir\\ParseCache.txt"
  "TravelUI_autogen"
  )
endif()
