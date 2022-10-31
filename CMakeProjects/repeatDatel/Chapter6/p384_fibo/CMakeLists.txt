cmake_minimum_required( VERSION 3.5 )

project( 384 VERSION 2.3.7 )

configure_file(config.h.in ${CMAKE_CURRENT_BINARY_DIR}/../config.h )

add_executable( 384 384.cpp )

target_include_directories( 384 PRIVATE . )

set_target_properties( 384 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)