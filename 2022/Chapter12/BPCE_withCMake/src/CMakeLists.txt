cmake_minimum_required( VERSION 3.5 )

project( runBPCE VERSION 3.3.5 )

configure_filE( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_executable( runBPCE p771.cpp )

target_include_directories( runBPCE PUBLIC ${CMAKE_CURRENT_BINARY_DIR} )

target_include_directories( runBPCE PUBLIC ./../lib )

set_target_properties( runBPCE PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_link_libraries( runBPCE PUBLIC libCE )