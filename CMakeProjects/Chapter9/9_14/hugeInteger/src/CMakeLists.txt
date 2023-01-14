cmake_minimum_required( VERSION 3.5 )

project( 9_14 VERSION 7.8.9 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/../../src/config.h )

add_executable( 9_14 9_14.cpp )

set_target_properties( 9_14 PROPERTIES
	CXX_STANDARD 11
	CXX_STANDARD_REQUIRED ON
)

target_include_directories( 9_14 PRIVATE {CMAKE_CURRENT_BINARY_DIR} )

target_include_directories( 9_14 PRIVATE ./../lib )

target_link_libraries( 9_14 myLib )