cmake_minimum_required( VERSION 3.5 )

project( 1358 VERSION 0.0.3 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/../config.h )

add_executable( 1358 1358.cpp )

set_target_properties( 1358 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( 1358 PRIVATE ${CMAKE_CURRENT_BINARY_DIR} )