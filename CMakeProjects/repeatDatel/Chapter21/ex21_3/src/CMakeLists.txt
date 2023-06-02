cmake_minimum_required( VERSION 3.5 )

project( ch21_exe_sub VERSION 4.6.7 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_executable( 21_3 21_3.cpp )

add_executable( 21_5 21_5.cpp )

add_executable( 21_6 21_6.cpp )

add_executable( 21_11 21_11.cpp )

add_executable( 21_13 21_13.cpp )

add_executable( 21_18 21_18.cpp )

add_executable( 21_20 21_20.cpp )

add_executable( 21_21 21_21.cpp )

set( targets 21_3 21_5 21_6 21_11 21_13 21_18 21_20 21_21 )

foreach( target ${targets} )
    set_target_properties( ${target} PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
    )
    target_include_directories( ${target} PRIVATE ${CMAKE_CURRENT_BINARY_DIR} 
    PRIVATE . )
endforeach()