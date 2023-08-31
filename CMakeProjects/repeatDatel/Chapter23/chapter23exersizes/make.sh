echo [*] making debug configuration with MinGW Makefiles
cd debugMGW
cmake -DCMAKE_BUILD_TYPE=Debug .. -G "MinGW Makefiles"
cmake --build .
cd ..
echo [*] making release configuration with Ninja
cd releaseNinja
cmake -DCMAKE_BUILD_TYPE=Release .. -G "Ninja"
cmake --build .
cd ..