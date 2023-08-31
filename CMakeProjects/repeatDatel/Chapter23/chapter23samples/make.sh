echo [*] make debug configuration via cmake ninja
cd debugNinja
cmake -DCMAKE_BUILD_TYPE=Debug .. -G "Ninja"
cmake --build .
cd ..
echo [*] make release configuration via cmake MinGW Makefiles
cd releaseMinGW
cmake -DCMAKE_BUILD_TYPE=Release .. -G "MinGW Makefiles"
cmake --build .
cd ..