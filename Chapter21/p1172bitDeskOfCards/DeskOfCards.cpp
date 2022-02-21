#include <iostream>
using std::cout;
using std::endl;
#include <iomanip>
using std::setw;
#include "DeskOfCards.h"
DeskOfCards::DeskOfCards()
{
    for (int i = 0; i < 52; i++)
    {
        desk[i].face = i%13;
        desk[i].suit = i/13;
        desk[i].colour = i/26;
    }
}
void DeskOfCards::deal()
{
    for( int k1 = 0, k2 = k1 + 26; k1 <= 25; k1++, k2++ )
    {
        cout << " card " << setw(3) << desk[k1].face << " suit " << setw(2) << desk[k1].suit;
        cout << " colour " << setw(2) << desk[k1].colour;
        cout << "   card " << setw(3) << desk[k2].face << " suit " << setw(2) << desk[k2].suit;
        cout << " colour " << setw(2) << desk[k2].colour << endl;
    }
}