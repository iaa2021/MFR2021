set( HEADER_LIB_HEADERS Base.h )

add_library( hLib STATIC ${HEADER_LIB_HEADERS} )

target_include_directories( hLib PUBLIC . )

set_target_properties( hLib PROPERTIES LINKER_LANGUAGE CXX )