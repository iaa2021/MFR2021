cmake_minimum_required( VERSION 3.5 )

project( ch21_exe_sub VERSION 4.6.7 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_executable( 21_3 21_3.cpp )

add_executable( 21_5 21_5.cpp )

set( targets 21_3 21_5 )

foreach( target ${targets} )
    set_target_properties( ${target} PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
    )
    target_include_directories( ${target} PRIVATE ${CMAKE_CURRENT_BINARY_DIR} 
    PRIVATE . )
endforeach()