cmake_minimum_required( VERSION 3.5 )

project( 8_17 VERSION 3.5.7 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/../config.h )

add_executable( 8_17 8_17.cpp )

target_include_directories( 8_17 PRIVATE . )

set_target_properties( 8_17 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)