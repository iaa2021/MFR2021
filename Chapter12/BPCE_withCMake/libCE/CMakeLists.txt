cmake_minimum_required( VERSION 3.5 )

project ( libCE VERSION 0.0.1 )

set( LIB_CE_SOURSES ComissionEmployee.cpp ComissionEmployee.h )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_library( libCE STATIC ${LIB_CE_SOURSES} )

set_target_properties( libCE PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( libCE PUBLIC ${CMAKE_CURRENT_BINARY_DIR} )