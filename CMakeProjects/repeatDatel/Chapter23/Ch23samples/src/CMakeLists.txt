cmake_minimum_required( VERSION 3.5 )

project( chr23samples VERSION 6.7.8 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_executable( p1309 p1309const_cast.cpp )
add_executable( p1311 p1311namespace.cpp )

set( targets p1309 p1311 )

foreach( target ${targets} )
set_target_properties( ${target} PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)
target_include_directories( ${target} PRIVATE ${CMAKE_CURRENT_BINARY_DIR}
PRIVATE . )
endforeach()