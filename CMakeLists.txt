cmake_minimum_required(VERSION 3.26.0)
project(krumpatch)

set(CMAKE_CXX_STANDARD 20)

include_directories(${CMAKE_SOURCE_DIR}/src)
link_directories(${CMAKE_BINARY_DIR}/lib)

message(STATUS "CMAKE_SOURCE_DIR: ${CMAKE_SOURCE_DIR}")
message(STATUS "CMAKE_BINARY_DIR: ${CMAKE_BINARY_DIR}")

add_subdirectory(src)
add_subdirectory(examples)

########
# DEPS #
########

# spdlog
add_subdirectory(${CMAKE_SOURCE_DIR}/dependencies/spdlog)
target_include_directories(krumpatch PUBLIC ${CMAKE_SOURCE_DIR}/dependencies/spdlog/include)
message(STATUS "spdlog version: ${spdlog_VERSION}")
