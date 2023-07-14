cmake_minimum_required( VERSION 3.5 )

project( appDsamples VERSION 3.5.8 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_executable( d2 d2.cpp )
add_executable( d3 d3.cpp )
add_executable( d8 d8.cpp )

set( targets d2 d3 d8 )

foreach( target ${targets} )
set_target_properties( ${target} PROPERTIES
CXX_STANDARD 11
CXX_STANDARD_REQUIRED ON
)

target_include_directories( ${target} PRIVATE ${CMAKE_CURRENT_BINARY_DIR} PRIVATE . ) 
endforeach()