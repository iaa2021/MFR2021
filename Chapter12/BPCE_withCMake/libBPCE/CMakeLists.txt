cmake_minimum_required( VERSION 3.5 )

project( libBPCE VERSION 1.1.2 )

set( BPCE_SOURSES BPCE.h BPCE.cpp )

configure_file( libBPCE ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_library( libBPCE STATIC ${BPCE_SOURSES} )

set_target_properties( libBPCE PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( libBPCE PUBLIC ${CMAKE_CURRENT_BINARY_DIR}
    ./../libCE
)