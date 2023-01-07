cmake_minimum_required( VERSION 3.5 )

project( ComplexLib VERSION 4.3.1 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_executable( cmpl 9_5.cpp )

set_target_properties( lib PROPERTIES 
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( cmpl PRIVATE ./../lib )


target_link_libraries( cmpl lib )

target_include_directories( cmpl PRIVATE . )