cmake_minimum_required( VERSION 3.5 )

project( hello VERSION 1.2.3 )

set( wxWidgets_ROOT_DIR "C:/wxWidgets" )

set( wxWidgets_LIB_DIR "C:/wxWidgets/lib/vc_x64_dll" )

set( wxWidgets_INCLUDE_DIRS "C:/wxWidgets/include" )

find_package(wxWidgets  COMPONENTS REQUIRED net core base )

include(${wxWidgets_USE_FILE})

add_executable(hello hello.cpp)

set_target_properties( hello PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
    LINKER_LANGUAGE CXX
)

target_link_libraries(myapp ${wxWidgets_LIBRARIES})

target_include_directories( hello PRIVATE ${wxWidgets_INCLUDE_DIRS} )