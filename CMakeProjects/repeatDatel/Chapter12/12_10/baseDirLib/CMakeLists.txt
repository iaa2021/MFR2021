cmake_minimum_required( VERSION 3.5 )

project( baseDirLib VERSION 2.3.4 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_library( baseDirLib STATIC Account.cpp Account.h )

set_target_properties( baseDirLib PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
    LINKER_LANGUAGE CXX
)

target_include_directories( baseDirLib PRIVATE ${CMAKE_CURRENT_BINARY_DIR} )

target_link_directories( baseDirLib . )