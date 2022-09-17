cmake_minimum_required( VERSION 3.5 )

project( 22_12 )

add_executable( 22_12 22_12.cpp )

set_target_properties( 22_12 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)   