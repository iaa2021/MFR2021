cmake_minimum_required( VERSION 3.5 )

project( 11_11 VERSION 3.4.5 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_executable( 11_11 11_11.cpp )

target_include_directories( 11_11 PRIVATE ${CMAKE_CURRENT_BINARY_DIR} 
    PRIVATE ./../lib
    PRIVATE .
)

set_target_properties( myLib PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_link_libraries( 11_11 myLib )