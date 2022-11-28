cmake_minimum_required( VERSION 3.5 )

project( 6_45 VERSION 3.4.7 )

configure_file( config.h.in {CMAKE_BINARY_DIR}/../config.h )

add_executable( 6_45 6_45.cpp )

set_target_properties( 6_45 PROPERTIES 
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( 6_45 PRIVATE . )