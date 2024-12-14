# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "RelWithDebInfo")
  file(REMOVE_RECURSE
  "CMakeFiles\\LogicGateSim_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\LogicGateSim_autogen.dir\\ParseCache.txt"
  "LogicGateSim_autogen"
  )
endif()
