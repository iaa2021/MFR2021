cmake_minimum_required( VERSION 3.5 )

project( myLibBits VERSION 6.7.8 )

configure_file( config.h.in ${CMAKE_CURRENT_SOURCE_DIR}/config.h )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_library( myLibBits STATIC DeskOfCards1.h DeskOfCards1.cpp )

set_target_properties( myLibBits PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
    LINKER_LANGUAGE CXX
)

target_include_directories( myLibBits PRIVATE ${CMAKE_CURRENT_BINARY_DIR}
    PRIVATE . )