cmake_minimum_required( VERSION 3.5 )

project( 1361 VERSION 0.0.4 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/../config.h )

add_executable( 1361 1361.cpp )

set_target_properties( 1361 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( 1361 PRIVATE ${CMAKE_CURRENT_BINARY_DIR} )