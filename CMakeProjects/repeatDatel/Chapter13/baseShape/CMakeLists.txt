cmake_minimum_required (VERSION 3.8)

project ( baseShape VERSION 1.2.3 )

#making list of directories
file( GLOB dir_list Circle Rectangle Shape src threeDimShape twoDimShape Triangle
    Sphere )

# Iterate over the list of directories
foreach( directory ${dir_list} )

if( IS_DIRECTORY ${directory} )
add_subdirectory ( ${directory} )
endif()

endforeach()