set( ANCLIB_SOURSES Base1.h Base2.h Derived.h Derived.cpp )

add_library( ancLib STATIC ${ANCLIB_SOURSES} )

target_include_directories( ancLib PUBLIC . )