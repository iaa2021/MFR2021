cmake_minimum_required( VERSION 3.5 )

project( 7_22 VERSION 3.5.8 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/../config.h )

add_executable( 7_22 7_22.cpp )

target_include_directories( 7_22 PRIVATE . )

set_target_properties( 7_22 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)