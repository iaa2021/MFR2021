cmake_minimum_required( VERSION 3.5 )

project( accounts VERSION 3.4.5 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_executable( read read.cpp )
add_executable( write write.cpp )
add_executable( create create.cpp )

set_target_properties( read PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)
set_target_properties( write PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)
set_target_properties( create PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)
target_include_directories( read PRIVATE ../lib PRIVATE ${CMAKE_CURRENT_BINARY_DIR}
    PRIVATE . )

target_include_directories( write PRIVATE ../lib PRIVATE ${CMAKE_CURRENT_BINARY_DIR}
    PRIVATE . )

target_include_directories( create PRIVATE ../lib PRIVATE ${CMAKE_CURRENT_BINARY_DIR}
    PRIVATE . )
target_link_libraries( read myLib )

target_link_libraries( write myLib )

target_link_libraries( create myLib )