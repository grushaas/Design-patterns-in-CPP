cmake_minimum_required(VERSION 3.2)
project(Builder2 VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCE src/Main.cpp src/SqlSelectQuery.cpp)
set(HEADER include/SqlSelectQuery.h)

add_executable(${PROJECT_NAME} ${SOURCE} ${HEADER})
