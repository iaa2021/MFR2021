cmake_minimum_required( VERSION 3.5 )

project( ch22samples VERSION 2.5.7 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )


add_executable( p1261 p1261remove.cpp )
add_executable( p1264 p1264replace.cpp )

set( targets p1261 p1264 )

foreach( target ${targets} )
set_target_properties( ${target} PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( ${target} PRIVATE ${CMAKE_CURRENT_BINARY_DIR} PRIVATE . )    
endforeach()