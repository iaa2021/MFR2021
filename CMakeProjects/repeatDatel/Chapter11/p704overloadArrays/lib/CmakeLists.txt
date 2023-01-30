cmake_minimum_required( VERSION 3.5 )

project( myLib VERSION 4.5.6 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_library( myLib STATIC Array.h Array.cpp )

set_target_properties( myLib PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
    LINKER_LANGUAGE CXX
)

target_include_directories( myLib PRIVATE .
    PRIVATE ${CMAKE_CURRENT_BINARY_DIR}
)