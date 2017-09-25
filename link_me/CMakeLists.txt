cmake_minimum_required(VERSION 2.8)

project(link_me)

include_directories("${PROJECT_SOURCE_DIR}/include")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
add_executable(linked src/main.cpp src/node.cpp)
