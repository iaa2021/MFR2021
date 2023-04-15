cmake_minimum_required( VERSION 3.5 )

project( hello VERSION 1.2.3 )

find_package( wxWidgets REQUIRED COMPONENTS net core base )

include( ${wxWidgets_USE_FILE} )

add_executable( hello hello.cpp )

target_link_libraries( hello ${wxWidgets_LIBRARIES} )