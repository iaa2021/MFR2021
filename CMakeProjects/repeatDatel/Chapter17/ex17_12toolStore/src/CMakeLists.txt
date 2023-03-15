cmake_minimum_required( VERSION 3.5 )

project( create VERSION 3.4.5 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

set( targets create handle )

add_executable( create create.cpp )

add_executable( handle handle.cpp )

foreach( target ${targets} )
set_target_properties( ${target} PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( ${target} PRIVATE ${CMAKE_CURRENT_BINARY_DIR} 
    PRIVATE . PRIVATE ../lib )

target_link_libraries( ${target} myLib )
    
endforeach()


