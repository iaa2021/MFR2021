cmake_minimum_required( VERSION 3.5 )

project( samples VERSION 3.4.5 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_executable( p1219 p1219.cpp )

set_target_properties( p1219 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( p1219 PRIVATE ${CMAKE_CURRENT_BINARY_DIR} PRIVATE . )