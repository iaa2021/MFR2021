cmake_minimum_required( VERSION 3.5 )

project( 5_12 VERSION 2.3.4 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/../config.h )

add_executable( 5_12 5_12.cpp )

target_include_directories( 5_12 PRIVATE . )

set_target_properties( 5_12 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)