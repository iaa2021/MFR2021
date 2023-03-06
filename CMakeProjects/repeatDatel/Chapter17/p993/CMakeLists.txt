cmake_minimum_required( VERSION 3.5 )

project( p993 VERSION 1.2.3 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_executable( p993 p993.cpp )

set_target_properties( p993 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( p993 PRIVATE .
    PRIVATE ${CMAKE_CURRENT_BINARY_DIR} )