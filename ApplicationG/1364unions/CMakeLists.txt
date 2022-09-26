cmake_minimum_required( VERSION 3.5)

project( 1364 VERSION 0.0.4 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/../config.h)

add_executable( 1364 1364.cpp )

set_target_properties(1364 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( 1364 PRIVATE ${CMAKE_CURRENT_BINARY_DIR} )