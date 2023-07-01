cmake_minimum_required( VERSION 3.5 )

project( ch23samples VERSION 3.7.9 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )


add_executable( p1318 p1318mutable.cpp )


set( targets p1318 )

foreach( target ${targets} )
set_target_properties( ${target} PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( ${target} PRIVATE ${CMAKE_CURRENT_BINARY_DIR} PRIVATE . )    
endforeach()