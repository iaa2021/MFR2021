cmake_minimum_required( VERSION 3.5 )

project( p1324 VERSION 2.4.6 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_executable( p1324 p1324.cpp )

set( targets p1324 )
foreach( target ${targets} )
set_target_properties( ${target} PROPERTIES 
CXX_STANDARD 11
CXX_STANDARD_REQUIRED ON
)
target_include_directories( ${target} PRIVATE . PRIVATE ${CMAKE_CURRENT_BINARY_DIR} 
PRIVATE ./../lib ) 
target_link_libraries( ${target} myLib )
endforeach()