cmake_minimum_required (VERSION 3.8)

project ( threeDimShape VERSION 7.8.9 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_library ( threeDimShape STATIC threeDimShape.cpp threeDimShape.h )

set_target_properties( threeDimShape PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
    LINKER_LANGUAGE CXX
)

target_include_directories( threeDimShape PRIVATE ${CMAKE_CURRENT_BINARY_DIR} 
    PRIVATE ./../Shape
    PRIVATE . )

target_link_libraries( threeDimShape Shape)