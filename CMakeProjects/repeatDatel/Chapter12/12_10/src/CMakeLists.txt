cmake_minimum_required( VERSION 3.5 )

project( 12_10 VERSION 7.8.9 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_executable( 12_10 12_10.cpp )

set_target_properties( 12_10 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( 12_10 PRIVATE ${CMAKE_CURRENT_BINARY_DIR} 
    PRIVATE ./../baseDirLib 
    PRIVATE ./../chAccDirLib
    PRIVATE ./../savAccDirLib
    PRIVATE . )

target_link_libraries( 12_10 baseDirLib )

target_link_libraries( 12_10 chAccDirLib )

target_link_libraries( 12_10 savAccDirLib )