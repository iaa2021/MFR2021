#include "DeskOfCards.h"
#include <iostream>
using std::cin;
int main()
{
    DeskOfCards dok;
    dok.shuffle();
    dok.deal();
    cin.get();
    return 0;
}