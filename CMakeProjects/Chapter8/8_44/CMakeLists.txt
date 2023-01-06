cmake_minimum_required( VERSION 3.5 )

project( 8_44 VERSION 1.5.9 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/../config.h )

add_executable( 8_44 8_44.cpp )

set_target_properties( 8_44 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( 8_44 PRIVATE . )