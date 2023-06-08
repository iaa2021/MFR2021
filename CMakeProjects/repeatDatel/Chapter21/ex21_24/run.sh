#!/bin/sh
echo [*] Create binary target with unix ...
cd build
cmake ..
cmake --build .

cd ..

echo [*] Create binary target with ninja ...
cd buildN
cmake .. -G "Ninja"
cmake --build .
cd ..