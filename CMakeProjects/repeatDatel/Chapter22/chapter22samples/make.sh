echo [*]Building release configuration with Ninja
cd releaseNinja
cmake .. -G "Ninja"
cmake --build .
cd ..

echo [*]Building debug configuration with MinGW
cd debugMGW
cmake .. -G "MinGW Makefiles"
cmake --build .
cd ..