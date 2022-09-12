cmake_minimum_required( VERSION 3.5 )

project( 1322 LANGUAGES CXX )

set( 1322_SOURSES 1322.cpp )  

add_subdirectory( Ancestors ) #when library is present

add_executable( 1322 ${1322_SOURSES} )

target_link_libraries( 1322 ancLib ) #when library is present

set_target_properties( 1322 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

add_compile_options( std = c++ 11 )