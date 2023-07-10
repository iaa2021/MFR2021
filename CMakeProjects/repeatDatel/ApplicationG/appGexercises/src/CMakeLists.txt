cmake_minimum_required( VERSION 3.5 )

project( appGsamples VERSION 3.5.7 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_executable( g2 g2.cpp )
add_executable( g3 g3.cpp )
add_executable( g4 g4.cpp )
add_executable( g6 g6.cpp )
add_executable( g7 g7.cpp )

set( targets g2 g3 g4 g6 g7 )

foreach( target ${targets} )
set_target_properties( ${target} PROPERTIES
CXX_STANDARD 11
CXX_STANDARD_REQUIRED ON
)

target_include_directories( ${target} PRIVATE ${CMAKE_CURRENT_BINARY_DIR} PRIVATE . ) 
endforeach()