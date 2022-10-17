cmake_minimum_required( VERSION 3.5 )

project( 1349 VERSION 0.0.11 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_executable( 1349 1349.cpp )

set_target_properties( 1349 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( 1349 PRIVATE ${CMAKE_CURRENT_BINARY_DIR} )

