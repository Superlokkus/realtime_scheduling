cmake_minimum_required (VERSION 3.3)
project (realtime_scheduling VERSION 0.5)

set (PROJECT_SOURCE_DIR src)

configure_file (
  "${PROJECT_SOURCE_DIR}/realtime_scheduling.hpp.in"
  "${PROJECT_BINARY_DIR}/realtime_scheduling.hpp"
  )
include_directories("${PROJECT_BINARY_DIR}")

add_subdirectory(${PROJECT_SOURCE_DIR}/task_lib)


add_executable(schedule_framesize_cli ${PROJECT_SOURCE_DIR}/schedule_framesize_cli.cpp)
set_property(TARGET schedule_framesize_cli PROPERTY CXX_STANDARD 11)
set_property(TARGET schedule_framesize_cli PROPERTY CXX_STANDARD_REQUIRED TRUE)
target_link_libraries(schedule_framesize_cli task_lib)


#enable_testing()

#add_test( basic pagefault_measure -n --memory 42)
