cmake_minimum_required( VERSION 3.5 )

project( 1329 LANGUAGES CXX )

set( 1329_SOURSES 1329.cpp )

add_subdirectory( headerLib )

add_compile_options( --std=c++11 )

add_executable( 1329 ${1329_SOURSES} )

set_target_properties( 1329 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_link_libraries( 1329 hLib )