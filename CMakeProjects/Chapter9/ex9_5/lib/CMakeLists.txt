cmake_minimum_required( VERSION 3.5 )

project( Library VERSION 2.3.5 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_library( lib STATIC Complex.h )

set_target_properties( lib PROPERTIES 
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( lib PRIVATE . )

set_target_properties( lib PROPERTIES
    LINKER_LANGUAGE CXX
)