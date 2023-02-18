cmake_minimum_required( VERSION 3.5 )

project( savAccDirLib VERSION 3.4.5 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_library( savAccDirLib STATIC SavingAccount.h SavingAccount.cpp )

set_target_properties( savAccDirLib PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
    LINKER_LANGUAGE CXX
)

target_include_directories( savAccDirLib PRIVATE ${CMAKE_CURRENT_BINARY_DIR} )

target_include_directories( savAccDirLib PRIVATE ./../baseDirLib )

target_include_directories( savAccDirLib PRIVATE . )

target_link_libraries( savAccDirLib baseDirLib )