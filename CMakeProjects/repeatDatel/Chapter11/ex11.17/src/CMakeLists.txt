cmake_minimum_required( VERSION 3.5 )

project( myLib VERSION 3.4.5 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_executable( 11_17 11_17.cpp )

target_include_directories( 11_17 PRIVATE ${CMAKE_CURRENT_BINARY_DIR} )

target_include_directories( 11_17 PRIVATE . )

target_include_directories( 11_17 PRIVATE ${CMAKE_CURRENT_BINARY_DIR}/../../lib )

set_target_properties( myLib PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_link_libraries( 11_17 myLib )