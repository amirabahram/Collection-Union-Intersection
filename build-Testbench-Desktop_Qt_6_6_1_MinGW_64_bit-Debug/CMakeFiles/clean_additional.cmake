# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Testbench_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Testbench_autogen.dir\\ParseCache.txt"
  "Testbench_autogen"
  )
endif()
