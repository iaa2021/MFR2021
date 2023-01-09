cmake_minimum_required( VERSION 3.5 )

project( ratLib VERSION 7.8.9 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_library( ratLib STATIC Rational.h Rational.cpp )

set_target_properties( ratLib PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
    LINKER_LANGUAGE CXX
)

target_include_directories( ratLib PRIVATE . )

target_include_directories( ratLib PRIVATE ${CMAKE_CURRENT_BINARY_DIR} )