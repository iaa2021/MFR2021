cmake_minimum_required( VERSION 3.5 )

project( 5_24 VERSION 1.4.7 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/../config.h )

add_executable( 5_24 5_24.cpp )

set_target_properties( 5_24 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( 5_24 PRIVATE . )