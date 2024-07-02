
cmake_minimum_required(VERSION 3.10)

project(pTSDLGame)

# C++ standard version
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find SDL2 Packages
find_package(SDL2 CONFIG REQUIRED)
include_directories(${SDL2_DIR})

# Add the subdirectory
add_subdirectory(src/pTS)

# Add the main executable
add_executable(pTSDLGame src/main.cpp)

# Link SDL2 to pTSDLGame
target_link_libraries(pTSDLGame PRIVATE SDL2::SDL2 SDL2::SDL2main SDL2::SDL2-static pTS)
