cmake_minimum_required( VERSION 3.5 )

project( 699 VERSION 4.5.6 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_executable( 699 p699.cpp )

set_target_properties( 699 PROPERTIES 
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( 699 PRIVATE ${CMAKE_CURRENT_BINARY_DIR} )

target_include_directories( 699 PRIVATE ./../lib )

target_include_directories( 699 PRIVATE . )

target_link_libraries( 699 myLib )