cmake_minimum_required( VERSION 3.5 )

project( 9_12 VERSION 7.8.9 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_executable ( 9_12 9_12.cpp )

set_target_properties( 9_12 PROPERTIES
	CXX_STANDARD 11
	CXX_STANDARD_REQUIRED ON
)

target_include_directories( 9_12 PRIVATE ${CMAKE_CURRENT_BINARY_DIR} )

target_include_directories( 9_12 PRIVATE ./../lib )

target_link_libraries( 9_12 lib )