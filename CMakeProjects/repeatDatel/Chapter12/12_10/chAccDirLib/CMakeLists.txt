cmake_minimum_required( VERSION 3.5 )

project( chAccDirLib VERSION 2.3.4 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_library( chAccDirLib STATIC CheckingAccount.cpp CheckingAccount.h )

set_target_properties( chAccDirLib PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
    LINKER_LANGUAGE CXX
)

target_include_directories( chAccDirLib PRIVATE ${CMAKE_CURRENT_BINARY_DIR} )

target_link_directories( chAccDirLib PRIVATE ./../baseDirLib )

target_include_directories( chAccDirLib PRIVATE . )

target_link_libraries( chAccDirLib baseDirLib )