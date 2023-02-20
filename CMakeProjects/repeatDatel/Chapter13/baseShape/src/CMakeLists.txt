cmake_minimum_required (VERSION 3.8)

project ( 13_10 VERSION 5.6.7 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_executable ( 13_10 13_10.cpp )

set_target_properties( 13_10 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( 13_10 PRIVATE ${CMAKE_CURRENT_BINARY_DIR} 
    PRIVATE ./../Shape
    PRIVATE ./../Rectangle
    PRIVATE . )

target_link_libraries( 13_10 2Dshape Shape Rectangle )