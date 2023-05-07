cmake_minimum_required( VERSION 3.5 )

project( charHandleLib VERSION 4.3.2 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

configure_file( config.h.in ${CMAKE_CURRENT_SOURCE_DIR}/config.h )

add_executable( 1176 1176.cpp )

add_executable( 1178 1178.cpp )

add_executable( 1180 1180.cpp )

set( targets 1176 1178 1180 )

foreach( target ${targets} )
  
set_target_properties( ${target} PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( ${target} PRIVATE ${CMAKE_CURRENT_BINARY_DIR} PRIVATE . )

endforeach()