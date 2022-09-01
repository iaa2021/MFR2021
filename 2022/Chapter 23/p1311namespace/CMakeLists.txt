cmake_minimum_required( VERSION 3.5 )

project( 1311 )

add_executable( 1311 1311.cpp )

set_target_properties( 1311 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)