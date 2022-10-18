cmake_minimum_required( VERSION 3.5 )

project ( 4_35 VERSION 4.5.6 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/../config.h )

add_executable( 4_35 4_35.cpp )

set_target_properties( 4_35 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( 4_35 PRIVATE . )