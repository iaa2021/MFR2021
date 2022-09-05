cmake_minimum_required(VERSION 3.5)

project( bits )

add_executable( bits 1165.cpp )

set_target_properties(  
    bits PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)