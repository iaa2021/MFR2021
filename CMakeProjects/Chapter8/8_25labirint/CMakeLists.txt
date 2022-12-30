cmake_minimum_required( VERSION 3.5 )

project( 8_25 VERSION 4.7.9 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/../config.h )

add_executable( 8_25 8_25.cpp )

set_target_properties( 8_25 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( 8_25 PRIVATE . )