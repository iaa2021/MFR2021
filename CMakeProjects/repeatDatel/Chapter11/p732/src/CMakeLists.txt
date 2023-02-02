cmake_minimum_required( VERSION 3.5 )

project( 732 VERSION 3.4.5 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_executable( 732 732.cpp )

set_target_properties( 732 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( 732 PRIVATE ${CMAKE_CURRENT_BINARY_DIR} )

target_include_directories( 732 PRIVATE ./../lib )

target_include_directories( 732  PRIVATE . )

target_link_libraries( 732 myLib )