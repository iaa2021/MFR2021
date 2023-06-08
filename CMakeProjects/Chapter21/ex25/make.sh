echo Creating binary target with MinGW ...
cd buildMGW
cmake .. -G "MinGW Makefiles"
cmake --build .
cd ..
echo Creating binary target with Ninja ...
cd buildNinja
cmake .. -G "Ninja"
cmake --build .
cd ..
