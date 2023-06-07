#!/bin/sh
echo [*] Create program with cmake -unix ...
cd build
cmake ..
cmake --build .
cd ..
echo [*] Create program with cmake -ninja ...
cd buildN
cmake .. -G "Ninja"
cmake --build .
cd ..