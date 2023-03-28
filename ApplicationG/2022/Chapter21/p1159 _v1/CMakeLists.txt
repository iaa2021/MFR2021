cmake_minimum_required(VERSION 3.5)

project( dok )

set( SOURCES
    1159.cpp
    DeskOfCards.cpp
)
set( HEADERS
    DeskOfCards.h
)

add_executable( dok ${SOURCES} ${HEADERS} )

set_target_properties(
    dok PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)