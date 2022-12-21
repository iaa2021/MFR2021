cmake_minimum_required( VERSION 3.5 )

project( 7_25 VERSION 3.5.7 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/../config.h )

add_executable( 7_25 7_25.cpp )

target_include_directories( 7_25 PRIVATE . )

set_target_properties( 7_25 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)