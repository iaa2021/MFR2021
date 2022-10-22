cmake_minimum_required( VERSION 3.5 )

project( 5_19 VERSION 3.4.5 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/../config.h )

add_executable( 5_19 5_19.cpp )

target_include_directories( 5_19 PRIVATE . )

set_target_properties( 5_19 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)
