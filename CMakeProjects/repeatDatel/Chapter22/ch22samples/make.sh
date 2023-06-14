echo [*] Creating debug configuration with ninja
cd debugNinja
cmake -DCMAKE_BUILD_TYPE=Debug .. -G "Ninja"
cmake --build .
cd ..
echo [*] Creating release configuration with unix
cd releaseUnix
cmake -DCMAKE_BUILD_TYPE=Release .. 
cmake --build .
cd ..