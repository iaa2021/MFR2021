cmake_minimum_required( VERSION 3.5 )

project( 262 VERSION 1.2.3 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/../config.h )

add_executable( 262 262.cpp )

set_target_properties( 262 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( 262 PRIVATE . )