cmake_minimum_required( VERSION 3.5 )

project( appGsamples VERSION 1.5.9 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )


add_executable( p1349 p1349volatileArgs.cpp )
add_executable( p1351 p1351comLineArgs.cpp )

set( targets p1349 p1351 )

foreach( target ${targets} )
set_target_properties( ${target} PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( ${target} PRIVATE ${CMAKE_CURRENT_BINARY_DIR} PRIVATE . )    
endforeach()