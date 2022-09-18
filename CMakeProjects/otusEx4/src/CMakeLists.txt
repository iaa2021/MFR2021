cmake_minimum_required( VERSION 3.5 )

project( hello VERSION 0.0.5 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_executable( hello hello.cpp )

set_target_properties( hello PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( hello PUBLIC ${CURRENT_SOURSE_DIR}/../lib )

target_include_directories( hello PUBLIC ${CURRENT_BINARY_DIR} )

target_link_libraries( hello lib )