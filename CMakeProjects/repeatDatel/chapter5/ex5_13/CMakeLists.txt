cmake_minimum_required( VERSION 3.5 )

project( 5_13 VERSION 3.4.5 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/../config.h )

add_executable( 5_13 5_13.cpp )

target_include_directories( 5_13 PRIVATE . )

set_target_properties( 5_13 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)