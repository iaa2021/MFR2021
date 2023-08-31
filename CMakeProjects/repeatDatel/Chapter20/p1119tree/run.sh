echo[*]Running debug configuration via VS
mkdir build1

cd build1

cmake ..

cmake --build .

cd src
./1122

cd ..