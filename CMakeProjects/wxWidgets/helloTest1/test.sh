#!/bin/sh

echo [*] Create test wx-program for linux ...
`wx-config --cxx --cxxflags` -o wxWidgets_test_linux *.cpp `wx-config --libs`

echo [*] Create test wx-program for windows ...
x86_64-w64-mingw32-g++ *.cpp $(/usr/x86_64-w64-mingw32/bin/wx-config --cxxflags --libs) -o wxWidgets_test_win64 -static
echo

echo [*] Run assembled linux program...
./wxWidgets_test_linux
echo

echo [*] Run assembled win64 program...
wine ./wxWidgets_test_win64.exe