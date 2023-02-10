cmake_minimum_required( VERSION 3.5 )

project( 11_15 VERSION 3.4.5 )

configure_file( config.h.in {CMAKE_CURRENT_BINARY_DIR}/config.h )

add_executable( 11_15 11_15.cpp )

set_target_properties( 11_15 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( 11_15 PRIVATE {CMAKE_CURRENT_BINARY_DIR}
    PRIVATE ./../lib
    PRIVATE . )

target_link_libraries( 11_15 myLib )