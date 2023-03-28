cmake_minimum_required( VERSION 3.5 )

project( 1122 VERSION 3.4.5 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_executable( 1122 1122.cpp )

set_target_properties( 1122 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( 1122 PRIVATE ${CMAKE_CURRENT_BINARY_DIR} 
    PRIVATE ../lib PRIVATE .
)

target_link_libraries( 1122 myLib )