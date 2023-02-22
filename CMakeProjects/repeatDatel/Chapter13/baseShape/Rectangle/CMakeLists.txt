cmake_minimum_required (VERSION 3.8)

project ( Rectangle VERSION 4.5.6 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_library ( Rectangle STATIC Rectangle.h Rectangle.cpp )

set_target_properties( Rectangle PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
    LINKER_LANGUAGE CXX
)

target_include_directories( Rectangle PRIVATE ${CMAKE_CURRENT_BINARY_DIR} 
    PRIVATE ./../Shape
    PRIVATE ./../twoDimShape
    PRIVATE . )

target_link_libraries( Rectangle Shape )

target_link_libraries( Rectangle twoDimShape )