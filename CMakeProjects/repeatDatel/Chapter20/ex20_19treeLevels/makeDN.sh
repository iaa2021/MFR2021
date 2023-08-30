echo[*]build debug configuration with Ninja

cd buildN

cmake -DCMAKE_BUILD_TYPE=Debug .. -G "Ninja"

cmake --build .
