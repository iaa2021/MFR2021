cmake_minimum_required( VERSION 3.5 )

project( hello VERSION 1.2.3 )

find_package( wxWidgets REQUIRED COMPONENTS net core base )

include( ${wxWidgets_USE_FILE} )

add_executable( hello hello.cpp )

add_executable( hello1 hello1.cpp )

target_link_libraries( hello ${wxWidgets_LIBRARIES} )

target_link_libraries( hello1 ${wxWidgets_LIBRARIES} )

target_include_directories( hello1 PRIVATE ${wxWidgets_INCLUDE_DIRS} ) 

target_include_directories( hello PRIVATE ${wxWidgets_INCLUDE_DIRS} )