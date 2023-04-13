cmake_minimum_required( VERSION 3.5 )

project( desk VERSION 3.4.5 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_executable( desk desk.cpp )

set_target_properties( desk PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( desk PRIVATE ${CMAKE_CURRENT_BINARY_DIR}
    PRIVATE ../lib PRIVATE . )

target_link_libraries( desk myLib )