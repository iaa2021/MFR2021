cmake_minimum_required( VERSION 3.5 )

project( library VERSION 0.0.2 )

configure_file( configure.h.in ${CMAKE_CURRENT_BINARY_DIR}/configure.h )

add_library( lib STATIC lib.h lib.cpp )

set_target_properties( lib PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( lib PUBLIC ${CMAKE_CURRENT_BINARY_DIR} )