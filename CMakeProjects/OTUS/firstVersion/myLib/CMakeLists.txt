set( MYLIB_SOURSES version.cpp version.h )

add_library( myLib STATIC ${MYLIB_SOURSES} )

target_include_directories( myLib PUBLIC ${CMAKE_CURRENT_BINARY_DIR} )