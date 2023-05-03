#pragma once
#include <iostream>
using std::cout;
using std::left;
using std::right;
using std::endl;
#include <cstdlib>
using std::rand;
using std::srand;
#include <ctime>
using std::time;
#include <iomanip>
using std::setw;
#include <string>
using std::string;
struct BitCard
{
    unsigned suit :2;
    unsigned face : 4;
    unsigned colour : 1;
};
class DeskOfCards1
{
public:
    DeskOfCards1();
    void shuffle();
    void deal();
    static void printVersion();
private:
    BitCard desk[ 52 ];
};