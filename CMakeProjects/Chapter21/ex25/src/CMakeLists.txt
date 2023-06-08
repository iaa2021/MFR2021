cmake_minimum_required( VERSION 3.5 )

project( ch21_26  VERSION 3.4.5 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_executable( 21_26 21_26.cpp )
add_executable( 21_30 21_30.cpp )

set( targets 21_26 21_30 )

foreach( target ${targets} )
set_target_properties( ${target} PROPERTIES
CXX_STANDARD 11
CXX_STANDARD_REQUIRED ON
)

target_include_directories( ${target} PRIVATE ${CMAKE_CURRENT_BINARY_DIR} PRIVATE . )
endforeach()