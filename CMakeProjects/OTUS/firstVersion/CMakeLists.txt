cmake_minimum_required( VERSION 3.5 )

project( hello VERSION 0.0.1 )

set( HELLO_SOURCES hello.cpp )

add_subdirectory( myLib )

add_executable( hello ${HELLO_SOURSES} )

set_target_properties( hello PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

configure_file( configure.h.in ${CURRENT_BINARY_DIR}/configure.h )

target_link_libraries( hello myLib )

target_include_directories( hello PUBLIC ${CURRENT_BINARY_DIR} )
