cmake_minimum_required( VERSION 3.5 )

project( samples VERSION 3.4.5 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_executable( p1219 p1219.cpp )
add_executable( p1236 p1236.cpp )
add_executable( p1241 p1241deque.cpp )
add_executable( p1243 p1243multiset.cpp )

set( targets p1219 p1236 p1241 p1243 )

foreach( target ${targets} )
set_target_properties( ${target} PROPERTIES
CXX_STANDARD 11
CXX_STANDARD_REQUIRED ON
)

target_include_directories( ${target} PRIVATE ${CMAKE_CURRENT_BINARY_DIR} PRIVATE . ) 
endforeach()