#include "DeskOfCards.h"
#include <iostream>
using std::cin;
using std::cout;
int main()
{
    DeskOfCards dok;
    dok.shuffle();
    dok.deal();
    cout << "\nProject with separated dirs for Headers and Sources.\n";
    cin.get();
    return 0;
}