cmake_minimum_required( VERSION 3.5 )

project( libBPCE )

add_library( libBPCE STATIC BPCE.cpp BPCE.h )

set_target_properties( libBPCE PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
    LINKER_LANGUAGES CXX
)

target_include_directories( libBPCE PUBLIC ./../libCE )

target_link_libraries( libBPCE PUBLIC libCE )