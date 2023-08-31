echo [*]Building release configuration with MinGW
cd releaseMGW
cmake .. -DCMAKE_BUILD_TYPE=Release -G "MinGW Makefiles"
cmake --build .
cd ..

echo [*]Building debug configuration with Ninja 
cd debugNinja
cmake .. -DCMAKE_BUILD_TYPE=Debug -G "Ninja"
cmake --build .
cd ..