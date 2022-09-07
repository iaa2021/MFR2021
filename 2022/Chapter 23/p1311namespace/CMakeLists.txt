<<<<<<< HEAD
cmake_minimum_required(VERSION 3.5)
=======
cmake_minimum_required( VERSION 3.5 )
>>>>>>> 98e5c0ec1ed949e43b6d116bd031fb224a568a2c

project( 1311 )

add_executable( 1311 1311.cpp )

set_target_properties( 1311 PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)