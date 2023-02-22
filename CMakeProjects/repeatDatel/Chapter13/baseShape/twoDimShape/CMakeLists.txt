cmake_minimum_required (VERSION 3.8)

project ( twoDimShape VERSION 3.4.5 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_library ( twoDimShape STATIC twoDimShape.cpp twoDimShape.h )

set_target_properties( twoDimShape PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
    LINKER_LANGUAGE CXX
)

target_include_directories( twoDimShape PRIVATE ${CMAKE_CURRENT_BINARY_DIR} 
    PRIVATE ./../Shape
    PRIVATE . )

target_link_libraries( twoDimShape Shape)