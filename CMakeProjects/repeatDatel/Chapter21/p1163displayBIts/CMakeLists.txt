cmake_minimum_required( VERSION 3.5 )

project( display VERSION 3.2.1 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

configure_file( config.h.in ${CMAKE_CURRENT_SOURCE_DIR}/config.h )

add_executable( 1163 1163.cpp )

add_executable( 1169 1169.cpp )

set( targets 1163 1169 )

foreach( target ${targets} )
set_target_properties( ${target} PROPERTIES
CXX_STANDARD 11
CXX_STANDARD_REQUIRED ON
)
target_include_directories( ${target} PRIVATE ${CMAKE_CURRENT_BINARY_DIR} PRIVATE . )
endforeach()