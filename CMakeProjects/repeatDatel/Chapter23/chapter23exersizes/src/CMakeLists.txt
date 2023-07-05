cmake_minimum_required( VERSION 3.5 )

project( ch23exersises VERSION 2.4.6 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_executable( ex23_4 ex23_4.cpp )

set( targets ex23_4 )

foreach( target ${targets} )
set_target_properties( ${target} PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( ${target} PRIVATE ${CMAKE_CURRENT_BINARY_DIR} PRIVATE . )    
endforeach()