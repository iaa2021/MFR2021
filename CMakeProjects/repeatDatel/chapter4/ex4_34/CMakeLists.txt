cmake_minimum_required( VERSION 3.5 )

project( 4_34 VERSION 1.2.3 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/../config.h )

add_executable( 4_34 4_34.cpp )

set_target_properties( 4_34 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( 4_34 PUBLIC . )