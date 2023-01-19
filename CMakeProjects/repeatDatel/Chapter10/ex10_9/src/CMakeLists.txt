cmake_minimum_required( VERSION 3.5 )

project( 10_9 VERSION 6.7.8 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_executable( 10_9 10_9.cpp )

set_target_properties( 10_9 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( 10_9 PRIVATE ${CMAKE_CURRENT_BINARY_DIR} )

target_include_directories( 10_9 PRIVATE ./../lib )

target_include_directories( 10_9 PRIVATE . )

target_link_libraries( 10_9 myLib )