cmake_minimum_required( VERSION 3.5 )

project( read VERSION 4.5.6 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_executable( read read.cpp )

set_target_properties( read PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( read PRIVATE ../lib PRIVATE ${CMAKE_CURRENT_BINARY_DIR}
    PRIVATE . )

target_link_libraries( read myLib )