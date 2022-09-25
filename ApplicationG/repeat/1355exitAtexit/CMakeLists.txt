cmake_minimum_required( VERSION 3.5 )

project( 1355 VERSION 0.0.2  LANGUAGES CXX )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/../config.h )

add_executable( 1355 1355.cpp )

target_include_directories( 1355 PRIVATE ${CMAKE_CURRENT_BINARY_DIR} )

set_target_properties( 1355 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)