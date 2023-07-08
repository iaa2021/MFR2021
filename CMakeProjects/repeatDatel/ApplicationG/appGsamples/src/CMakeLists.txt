cmake_minimum_required( VERSION 3.5 )

project( appGsamples VERSION 1.5.9 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )


add_executable( p1349 p1349volatileArgs.cpp )
add_executable( p1351 p1351comLineArgs.cpp )
add_executable( p1355 p1355exit_atexit.cpp ) 
add_executable( p1357 p1357sygnals.cpp )
add_executable( p1364 p1364union.cpp )

set( targets p1349 p1351 p1355 p1357 p1364 )

foreach( target ${targets} )
set_target_properties( ${target} PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( ${target} PRIVATE ${CMAKE_CURRENT_BINARY_DIR} PRIVATE . )    
endforeach()