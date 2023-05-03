cmake_minimum_required( VERSION 3.5 )

project( deskOfCards VERSION 3.4.5 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_executable( desk desk.cpp )

add_executable( deskBits deskBits.cpp )

set( targets desk deskBits )

foreach( target ${targets} )
set_target_properties( ${target} PROPERTIES
CXX_STANDARD 11
CXX_STANDARD_REQUIRED ON
)
endforeach()

target_include_directories( desk PRIVATE ${CMAKE_CURRENT_BINARY_DIR}
    PRIVATE ../lib PRIVATE . )

target_include_directories( deskBits PRIVATE ${CMAKE_CURRENT_BINARY_DIR}
    PRIVATE ../libBits PRIVATE . )

target_link_libraries( desk myLib )

target_link_libraries( deskBits myLibBits )