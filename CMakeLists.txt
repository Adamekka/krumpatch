cmake_minimum_required(VERSION 3.26.0)
project(krumpatch)

set(CMAKE_CXX_STANDARD 20)

include_directories(${CMAKE_SOURCE_DIR}/src)
link_directories(${CMAKE_BINARY_DIR}/lib)

message(STATUS "CMAKE_SOURCE_DIR: ${CMAKE_SOURCE_DIR}")
message(STATUS "CMAKE_BINARY_DIR: ${CMAKE_BINARY_DIR}")

# find_package(glfw3 3.3 REQUIRED)
# find_package(OpenGL REQUIRED)

add_subdirectory(src)
add_subdirectory(examples)

# target_link_libraries(stoneblock glfw)
# target_link_libraries(stoneblock OpenGL::GL)
