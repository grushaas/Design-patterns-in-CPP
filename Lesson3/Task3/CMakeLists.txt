cmake_minimum_required(VERSION 3.1)
project(ChainOFResponsibilityPattern VERSION 1.0)

set(SRC src/main.cpp src/LogMessage.cpp)
include_directories(includes)

add_executable(ChainOFResponsibilityPattern ${SRC})
add_subdirectory(handlers)

target_link_libraries(ChainOFResponsibilityPattern PUBLIC handlers)
target_include_directories(ChainOFResponsibilityPattern PUBLIC
                            "${PROJECT_BINARY_DIR}"
                            "${PROJECT_SOURCE_DIR}/handlers/includes")