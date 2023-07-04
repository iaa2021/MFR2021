echo [*]Building release configuration with Ninja
cd releaseNinja
cmake .. -DCMAKE_BUILD_TYPE=Release -G "Ninja"
cmake --build .
cd ..

echo [*]Building debug configuration with MinGW
cd debugMinGW
cmake .. -DCMAKE_BUILD_TYPE=Debug -G "MinGW Makefiles"
cmake --build .
cd ..