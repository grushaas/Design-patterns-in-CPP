cmake_minimum_required(VERSION 3.1)
project(observerPattern VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SRC src/observer.cpp src/observed.cpp)

add_executable(observerPattern ${SRC})