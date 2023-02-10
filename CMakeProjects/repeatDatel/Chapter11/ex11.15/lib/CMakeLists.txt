cmake_minimum_required( VERSION 3.5 )

project( myLib VERSION 2.3.4 )

configure_file( configure.h.in config.h )

add_library( myLib STATIC RationalNumber.h RationalNumber.cpp )

set_target_properties( myLib PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
    LINKER_LANGUAGE CXX
)

target_include_directories( myLib PRIVATE {CMAKE_CURRENT_BINARY_DIR} )

target_include_directories( myLib PRIVATE . )