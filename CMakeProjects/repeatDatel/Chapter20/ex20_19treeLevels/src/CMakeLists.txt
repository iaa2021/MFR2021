cmake_minimum_required( VERSION 3.5 )

project( level VERSION 3.4.5 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_executable( level level.cpp )

set_target_properties( level PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( level PRIVATE ${CMAKE_CURRENT_BINARY_DIR}
    PRIVATE ../lib PRIVATE .
)

target_link_libraries( level myLib )