cmake_minimum_required( VERSION 3.5 )

project( accounts VERSION 3.4.5 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_executable( read read.cpp )
add_executable( write write.cpp )
add_executable( create create.cpp )
add_executable( handle handle.cpp )

set( targets read write create handle )

foreach( target ${targets} )
    set_target_properties( ${target} PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON )

    target_include_directories( ${target} PRIVATE ../lib 
    PRIVATE ${CMAKE_CURRENT_BINARY_DIR} PRIVATE . )

    target_link_libraries( ${target} myLib )
endforeach()