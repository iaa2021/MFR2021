cmake_minimum_required( VERSION 3.5 )

project( 1309 )

add_executable( 1309 1309.cpp )

set_target_properties( 1309 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

