cmake_minimum_required( VERSION 3.5 )

project( stringSearch VERSION 6.5.4 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_executable( 1187 1187.cpp )

add_executable( 1188 1188.cpp )

add_executable( 1189 1189.cpp )

set( targets 1187 1188 1189 )

foreach( target ${targets} )
set_target_properties( ${target} PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( ${target} PRIVATE ${CMAKE_CURRENT_BINARY_DIR} PRIVATE . )    
endforeach()