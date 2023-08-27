file(GLOB src "*.cpp" ".hpp" ".c" ".h")

add_library(krumpatch SHARED ${src})

set_target_properties(krumpatch
    PROPERTIES
        LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/$<CONFIG>/lib
        RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/$<CONFIG>/bin
)

target_compile_options(krumpatch PUBLIC -Wall -Wextra -pedantic -fdeclspec)
