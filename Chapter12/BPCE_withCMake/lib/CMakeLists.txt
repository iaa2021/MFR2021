cmake_minimum_required( VERSION 3.5 )

set( LIB_SOURSES  BPCE.cpp ComissionEmployee.cpp  )

set( LIB_HEADERS BPCE.h ComissionEmployee.h )

project ( libCE )

add_library( libCE STATIC ${LIB_SOURSES} ${LIB_HEADERS} )

set_target_properties( libCE PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
    LINKER_LANGUAGES CXX
)

target_include_directories( libCE PUBLIC . )