cmake_minimum_required( VERSION 3.5 )

project( p1165 )

add_executable( p1165 p1165.cpp )

set_target_properties(p1165 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)