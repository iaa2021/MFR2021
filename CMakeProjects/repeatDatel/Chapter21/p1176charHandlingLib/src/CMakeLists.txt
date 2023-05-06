cmake_minimum_required( VERSION 3.5 )

project( charHandleLib VERSION 4.3.2 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

configure_file( config.h.in ${CMAKE_CURRENT_SOURCE_DIR}/config.h )

add_executable( 1176 1176.cpp )

set_target_properties( 1176 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( 1176 PRIVATE ${CMAKE_CURRENT_BINARY_DIR} PRIVATE . )