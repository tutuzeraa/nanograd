cmake_minimum_required(VERSION 3.11)

project(nanograd LANGUAGES CXX)

# requirements

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -pg -O2")

add_executable(main main.cpp)
