cmake_minimum_required( VERSION 3.5 )

project( 704 VERSION 7.8.9 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_executable( 704 704.cpp )

set_target_properties( 704 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( 704 PRIVATE .
    PRIVATE ${CMAKE_CURRENT_BINARY_DIR}
    PRIVATE ./../lib
)

target_link_libraries( 704 myLib )