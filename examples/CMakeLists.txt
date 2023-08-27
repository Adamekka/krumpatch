add_executable(basic basic.cpp)
target_link_libraries(basic krumpatch)
target_compile_options(basic PRIVATE -Wall -Wextra -pedantic)
