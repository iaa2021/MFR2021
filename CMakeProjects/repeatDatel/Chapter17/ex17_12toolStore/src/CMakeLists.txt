cmake_minimum_required( VERSION 3.5 )

project( create VERSION 3.4.5 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_executable( create create.cpp )

set_target_properties( create PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( create PRIVATE ${CMAKE_CURRENT_BINARY_DIR} 
    PRIVATE . PRIVATE ../lib )

target_link_libraries( create myLib )