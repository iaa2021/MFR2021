cmake_minimum_required (VERSION 3.8)

project ( Triangle VERSION 6.7.8 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_library ( Triangle STATIC Triangle.h Triangle.cpp )

set_target_properties( Triangle PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
    LINKER_LANGUAGE CXX
)

target_include_directories( Triangle PRIVATE ${CMAKE_CURRENT_BINARY_DIR} 
    PRIVATE ./../Shape
    PRIVATE ./../twoDimShape
    PRIVATE . )

target_link_libraries( Triangle Shape )

target_link_libraries( Triangle twoDimShape )