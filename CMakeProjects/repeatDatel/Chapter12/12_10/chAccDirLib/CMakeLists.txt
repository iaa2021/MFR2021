cmake_minimum_required( VERSION 3.5 )

project( chAccDirLib VERSION 4.5.6 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_library( chAccDirLib CheckingAccount.h CheckingAccount.cpp )

set_target_properties( chAccDirLib PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
    LINKER_LANGUAGE CXX
)

target_include_directories( chAccDirLib PRIVATE ${CMAKE_CURRENT_BINARY_DIR} 
    PRIVATE .
    PRIVATE ./../baseDirLib 
    PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}" )

target_link_libraries( chAccDirLib baseDirLib )