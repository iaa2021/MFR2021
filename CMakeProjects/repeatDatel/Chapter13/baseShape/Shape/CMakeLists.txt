cmake_minimum_required (VERSION 3.8)

project ( Shape VERSION 2.3.4 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_library ( Shape STATIC Shape.cpp Shape.h )

set_target_properties( Shape PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
    LINKER_LANGUAGE CXX
)

target_include_directories( Shape PRIVATE ${CMAKE_CURRENT_BINARY_DIR} 
    PRIVATE . )
