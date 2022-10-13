cmake_minimum_required( VERSION 3.5 )

project( libCE )

add_library( libCE STATIC ComissionEmployee.cpp ComissionEmployee.h )

set_target_properties( libCE PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
    LINKER_LANGUAGES CXX
)

target_include_directories( libCE PUBLIC . )