cmake_minimum_required(VERSION 3.5)

project( doc )

set( HEADERS DeskOfCards.h  )

set( SOURSES DeskOfCards.cpp doc.cpp )

add_executable ( doc ${SOURSES} ${HEADERS} )

set_target_properties(doc PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)