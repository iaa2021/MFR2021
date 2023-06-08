cmake_minimum_required( VERSION 3.5 )

project( ex24 VERSION 2.3.4 )

configure_file( configure.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_executable( 21_24 21_24.cpp )

set_target_properties( 21_24 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( 21_24 PRIVATE ${CMAKE_CURRENT_BINARY_DIR}
    PRIVATE .
)