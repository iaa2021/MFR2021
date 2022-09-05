cmake_minimum_required(VERSION 3.5)

project( dok )

add_executable( dok DeskOfCards.h DeskOfCards.cpp 1159.cpp )

set_target_properties(
    dok PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)