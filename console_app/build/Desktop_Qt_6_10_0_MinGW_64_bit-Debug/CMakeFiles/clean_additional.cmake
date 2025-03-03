# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\console_app_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\console_app_autogen.dir\\ParseCache.txt"
  "console_app_autogen"
  )
endif()
