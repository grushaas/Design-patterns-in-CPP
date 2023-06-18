cmake_minimum_required(VERSION 3.1)
project(handlers VERSION 1.0)

set(SRC_HANDLERS
    src/handler.cpp 
    src/fatalErrorHandler.cpp 
    src/errorHandler.cpp 
    src/warningHandler.cpp 
    src/unknownMessageHandler.cpp 
    src/handler.cpp
    src/abstractHandler.cpp)

include_directories(includes)

add_library(handlers ${SRC_HANDLERS})