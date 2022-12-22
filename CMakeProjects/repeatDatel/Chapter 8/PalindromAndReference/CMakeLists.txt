cmake_minimum_required( VERSION 3.5 )

project( pal VERSION 2.3.8 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/../config.h )

add_executable( pal pal.cpp )

target_include_directories( pal PRIVATE . )

set_target_properties( pal PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)