
cmake_minimum_required(VERSION 3.23)

project(pTSDLGame)

add_executable(pTSDLGame src/main.cpp)

# Find SDL2 Packages
find_package(SDL2 CONFIG REQUIRED)

# Link SDL2 to pTSDLGame
target_link_libraries(pTSDLGame PRIVATE SDL2::SDL2 SDL2::SDL2main SDL2::SDL2-static)
