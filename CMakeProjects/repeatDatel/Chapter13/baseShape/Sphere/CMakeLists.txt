cmake_minimum_required (VERSION 3.8)

project ( Sphere VERSION 10.11.12 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_library ( Sphere STATIC Sphere.h Sphere.cpp )

set_target_properties( Sphere PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
    LINKER_LANGUAGE CXX
)

target_include_directories( Sphere PRIVATE ${CMAKE_CURRENT_BINARY_DIR} 
    PRIVATE ./../Shape
    PRIVATE ./../threeDimShape
    PRIVATE . )

target_link_libraries( Circle Shape )

target_link_libraries( Circle threeDimShape )