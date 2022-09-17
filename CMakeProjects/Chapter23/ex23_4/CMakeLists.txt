cmake_minimum_required( VERSION 3.5 )

project( 23_4 )

add_executable( 23_4 23_4.cpp )

set_target_properties( 23_4 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)