cmake_minimum_required( VERSION 3.5 )

project( 6_34 VERSION 3.4.7 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/../config.h )

add_executable( 6_34 6_34.cpp )

set_target_properties( 6_34 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( 6_34 PRIVATE .)