cmake_minimum_required( VERSION 3.5 )

project( 1386 VERSION 1.2.8 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/../config.h )

add_executable( 1386 1386.cpp )

set_target_properties( 1386 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

