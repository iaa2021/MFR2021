cmake_minimum_required( VERSION 3.5 )

project( p1006 VERSION 3.4.5 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_executable( p1006 p1006.cpp )

set_target_properties( p1006 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( p1006 PRIVATE ../lib PRIVATE ${CMAKE_CURRENT_BINARY_DIR}
    PRIVATE . )

target_link_libraries( p1006 myLib )