cmake_minimum_required( VERSION 3.5 )

project( 10_21 VERSION 7.8.9 )

configure_file( configure.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h)

add_executable (10_21 10_21.cpp)

set_target_properties( 10_21 PROPERTIES
	CXX_STANDARD 11
	CXX_STANDARD_REQUIRED ON
)

target_include_directories( 10_21 PRIVATE ${CMAKE_CURRENT_BINARY_DIR} )

target_include_directories( 10_21 PRIVATE ./../lib )

target_include_directories( 10_21 PRIVATE . )

target_link_libraries( 10_21 myLib )