cmake_minimum_required(VERSION 3.10)

project(support)

file(GLOB_RECURSE SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

add_library(support ${SOURCES})

target_include_directories(support PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
