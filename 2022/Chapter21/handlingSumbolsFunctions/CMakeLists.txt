cmake_minimum_required( VERSION 3.5 )

project( 1177 )

add_executable( 1177 1177.cpp )

set_target_properties(1177 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)