cmake_minimum_required (VERSION 3.8)

project ( Circle VERSION 8.9.10 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_library ( Circle STATIC Circle.h Circle.cpp )

set_target_properties( Circle PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
    LINKER_LANGUAGE CXX
)

target_include_directories( Circle PRIVATE ${CMAKE_CURRENT_BINARY_DIR} 
    PRIVATE ./../Shape
    PRIVATE ./../twoDimShape
    PRIVATE . )

target_link_libraries( Circle Shape )

target_link_libraries( Circle twoDimShape )