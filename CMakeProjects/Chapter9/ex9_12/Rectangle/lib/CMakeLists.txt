cmake_minimum_required( VERSION 3.5 )

project( lib VERSION 4.5.6 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_library ( lib STATIC Rectangle.cpp Rectangle.h )

set_target_properties( lib PROPERTIES
	CXX_STANDARD 11
	CXX_STANDARD_REQUIRED ON
	LINKER_LANGUAGE CXX
)

target_include_directories( lib PRIVATE ${CMAKE_CURRENT_BINARY_DIR} )

target_include_directories( lib PRIVATE . )