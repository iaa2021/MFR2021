cmake_minimum_required( VERSION 3.5 )

project( 7_19 VERSION 7.5.8 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/../config.h )

add_executable( 7_19 7_19.cpp )

target_include_directories( 7_19 PRIVATE . )

set_target_properties( 7_19 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)