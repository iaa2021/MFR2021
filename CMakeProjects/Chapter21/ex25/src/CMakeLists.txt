cmake_minimum_required( VERSION 3.5 )

project( ch21_26  VERSION 3.4.5 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_executable( 21_26 21_26.cpp )

set_target_properties( 21_26 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( 21_26 PRIVATE ${CMAKE_CURRENT_BINARY_DIR} PRIVATE . )