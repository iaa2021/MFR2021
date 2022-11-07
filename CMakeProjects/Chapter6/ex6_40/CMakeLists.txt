cmake_minimum_required( VERSION 3.5 )

project( 6_40 VERSION 5.6.7 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/../config.h )

add_executable( 6_40 6_40.cpp )

set_target_properties( 6_40 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( 6_40 PRIVATE . )