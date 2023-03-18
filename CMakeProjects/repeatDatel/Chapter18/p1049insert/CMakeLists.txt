cmake_minimum_required( VERSION 3.5 )

project( 1049 VERSION 1.3.5 )

configure_file( config.h.in config.h )

add_executable( 1049 p1049.cpp )

set_target_properties( 1049 PROPERTIES 
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( 1049 PRIVATE . 
    PRIVATE ${CMAKE_CURRENT_BINARY_DIR} )