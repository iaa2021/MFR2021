cmake_minimum_required( VERSION 3.5 )

project ( 7_24 VERSION 2.3.8 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/../config.h )

add_executable( 7_24 7_24.cpp )

target_include_directories( 7_24 PRIVATE . )

set_target_properties( 7_24 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)