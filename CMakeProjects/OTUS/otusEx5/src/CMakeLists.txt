cmake_minimum_required( VERSION 3.5 )

project( mainLib LANGUAGES CXX VERSION 0.0.7 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_executable( mainLib hello.cpp )

set_target_properties( mainLib PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( mainLib PRIVATE ${CMAKE_CURRENT_BINARY_DIR} )

find_package( sumLib CONFIG REQUIRED )

target_link_libraries( mainLib SumLib::sumLib )