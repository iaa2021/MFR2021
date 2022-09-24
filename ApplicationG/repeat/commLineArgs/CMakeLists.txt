cmake_minimum_required( VERSION 3.5 )

project( 1351 VERSION 0.0.3 )

add_executable( 1351 1351.cpp )

set_target_properties( 1351 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

configure_file( configure.h.in ${CMAKE_CURRENT_BINARY_DIR}/configure.h )

target_include_directories( 1351 PRIVATE ${CMAKE_CURRENT_BINARY_DIR} )