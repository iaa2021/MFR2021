cmake_minimum_required (VERSION 3.8)

project ( 13_10 VERSION 5.6.7 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_executable ( 13_10 13_10.cpp )

set_target_properties( 13_10 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)

target_include_directories( 13_10 PRIVATE ${CMAKE_CURRENT_BINARY_DIR} 
    PRIVATE ./../Shape PRIVATE ./../twoDimShape PRIVATE ./../Rectangle
    PRIVATE ./../Triangle PRIVATE ./../threeDimShape PRIVATE ./../Circle 
    PRIVATE ./../Sphere PRIVATE . )
  
    target_link_libraries ( 13_10 Shape )

    target_link_libraries( 13_10 twoDimShape )
    
    target_link_libraries( 13_10 src )
    
    target_link_libraries( 13_10 Rectangle )
    
    target_link_libraries( 13_10 Triangle )
    
    target_link_libraries( 13_10 threeDimShape )
    
    target_link_libraries( 13_10 Circle )
    
    target_link_libraries( 13_10 Sphere )



