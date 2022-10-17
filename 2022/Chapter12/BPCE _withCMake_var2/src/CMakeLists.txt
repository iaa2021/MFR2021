cmake_minimum_required( VERSION 3.5 )

project( p771 VERSION 1.2.3 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_executable( p771 p771.cpp )

set_target_properties( p771 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
    LINKER_LANGUAGES CXX
)

target_include_directories( p771 PUBLIC ./../libCE )

target_include_directories( p771 PUBLIC ./../libBPCE )

target_include_directories( p771 PUBLIC ${CMAKE_CURRENT_BINARY_DIR} )

target_link_libraries( p771 PUBLIC libBPCE )