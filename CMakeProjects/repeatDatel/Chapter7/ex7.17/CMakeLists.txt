cmake_minimum_required( VERSION 3.5 )

project( 7_17 VERSION 8.6.3 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/../config.h )

add_executable( 7_17 7_17.cpp )

target_include_directories( 7_17 PRIVATE . )

set_target_properties( 7_17 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)