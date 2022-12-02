cmake_minimum_required( VERSION 3.5 )

project( 7_11 VERSION 6.7.8 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/../config.h  )

add_executable( 7_11 7_11.cpp )

target_include_directories( 7_11 PRIVATE . )

set_target_properties( 7_11 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)