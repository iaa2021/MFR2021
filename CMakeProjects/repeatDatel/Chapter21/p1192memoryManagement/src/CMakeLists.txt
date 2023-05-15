cmake_minimum_required( VERSION 3.5 )

project( memManageInBytes VERSION 6.5.7 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

configure_file( config.h.in ${CMAKE_CURRENT_SOURCE_DIR}/config.h )

add_executable( 1192 1192.cpp )

add_executable( 1194 1194.cpp )

set( targets 1192 1194 )

foreach( target ${targets} )
  
set_target_properties( ${target} PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( ${target} PRIVATE ${CMAKE_CURRENT_BINARY_DIR} PRIVATE . )

endforeach()