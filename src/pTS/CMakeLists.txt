cmake_minimum_required(VERSION 3.10)

project(pTS)

# C++ standard version
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(core)
add_subdirectory(support)

file(GLOB_RECURSE SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

add_library(pTS ${SOURCES})

target_include_directories(pTS PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
