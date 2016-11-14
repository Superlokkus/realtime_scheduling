cmake_minimum_required (VERSION 3.0)
project (schedule_framesize)
# The version number.
set (SCHEDULE_FRAMESIZE_VERSION_MAJOR 0)
set (SCHEDULE_FRAMESIZE_VERSION_MINOR 5)
set (PROJECT_SOURCE_DIR src)


configure_file (
  "${PROJECT_SOURCE_DIR}/schedule_framesize.h.in"
  "${PROJECT_BINARY_DIR}/schedule_framesize.h"
  )
include_directories("${PROJECT_BINARY_DIR}")

set (CORE_SOURCE_FILES
${PROJECT_SOURCE_DIR}/task_set.hpp
${PROJECT_SOURCE_DIR}/task.hpp
)


add_executable(schedule_framesize_cli ${PROJECT_SOURCE_DIR}/schedule_framesize_cli.cpp ${CORE_SOURCE_FILES})
set_property(TARGET schedule_framesize_cli PROPERTY CXX_STANDARD 11)
set_property(TARGET schedule_framesize_cli PROPERTY CXX_STANDARD_REQUIRED TRUE)


#enable_testing()

#add_test( basic pagefault_measure -n --memory 42)
