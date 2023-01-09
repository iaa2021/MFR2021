cmake_minimum_required( VERSION 3.5 )

project( rat VERSION 4.5.6 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_executable( rat 9_6.cpp )

set_target_properties( rat PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
    LINKER_LANGUAGE CXX
)

target_include_directories( rat PRIVATE ./../lib  . )

target_include_directories( rat PRIVATE ${CMAKE_CURRENT_BINARY_DIR} )

target_link_libraries( rat ratLib )