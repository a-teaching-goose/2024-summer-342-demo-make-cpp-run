cmake_minimum_required(VERSION 3.10)
project(my_executable)

set(CMAKE_CXX_STANDARD 17)

SET(CMAKE_CXX_FLAGS  "-DDEBUG -g -O0")

add_executable(${PROJECT_NAME} hello_world.cpp sorter.cpp)

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
