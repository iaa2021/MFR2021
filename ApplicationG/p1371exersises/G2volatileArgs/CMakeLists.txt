cmake_minimum_required( VERSION 3.5 )

project( 1371 VERSION 0.0.3 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/../config.h )

add_executable( 1371 1371.cpp )

set_target_properties( 1371 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( 1371 PRIVATE ${CMAKE_CURRENT_BINARY_DIR} )