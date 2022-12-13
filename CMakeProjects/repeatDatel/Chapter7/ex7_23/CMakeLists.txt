cmake_minimum_required( VERSION 3.5 )

project( 7_23 VERSION 4.7.8 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/../config.h )

add_executable( 7_23 7_23.cpp )

set_target_properties( 7_23 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( 7_23 PRIVATE . )