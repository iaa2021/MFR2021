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
struct Card
{
    string suit;
    string face;
};
class DeskOfCards
{
public:
    DeskOfCards();
    void shuffle();
    void deal();
    static void printVersion();
private:
    Card desk[ 52 ];
};