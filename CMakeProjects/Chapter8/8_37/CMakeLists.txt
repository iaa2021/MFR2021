cmake_minimum_required( VERSION 3.5 )

project( 8_37 VERSION 1.3.5 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/../config.h )

add_executable( 8_37 8_37.cpp )

target_include_directories( 8_37 PRIVATE . )

set_target_properties( 8_37 PROPERTIES 
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)