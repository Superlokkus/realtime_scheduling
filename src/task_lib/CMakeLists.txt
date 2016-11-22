cmake_minimum_required (VERSION 3.3)
project (task_lib VERSION 1.0)

set (task_lib_source_files INTERFACE
        task.hpp
        task_set.hpp
        )

add_library(task_lib INTERFACE)

target_include_directories(task_lib INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

