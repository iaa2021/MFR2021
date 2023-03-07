cmake_minimum_required( VERSION 3.5 )

project( p1000 VERSION 2.3.4 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_executable( p1000 p1000.cpp )

set_target_properties( p1000 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( p1000 PRIVATE ${CMAKE_CURRENT_BINARY_DIR}
    PRIVATE .
)