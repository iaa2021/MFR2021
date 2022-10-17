#include <iostream>
using std::cout;
using std::endl;
using std :: left;
#include <iomanip>
using std::setw;
#include <cstdlib>
using std::rand;
using std::srand;
#include <ctime>
using std::time;
#include "DeskOfCards.h"
DeskOfCards::DeskOfCards()
{
    for (int i = 0; i < 52; i++)
    {
        desk[i].face = i%13;
        desk[i].suit = i/13;
        desk[i].colour = i/26;
    }
    srand( time( 0 ) );
}
void DeskOfCards::deal()
{
    for( int k1 = 0; k1 < 52; k1++ )
    {
        char *suit[4] = { "spades", "clubs", "diamonds", "hearts"  };
        char *face[13] = { "Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King" };
        char *colour[2] = { "black", "red" };
        cout << setw(6) << left << face[desk[k1].face] << " of " << setw(10) << suit[desk[k1].suit];
        cout << " " << setw(5) << colour[desk[k1].colour] << ( ( k1 + 1 ) % 4 == 0 ? '\n' : '\t' );
    }
}
void DeskOfCards::shuffle()
{
    bitCard temp;
    for (size_t i = 0; i < 52; i++)
    {
        int j = rand()%52;
        temp = desk[j];
        desk[j] = desk[i];
        desk[i] = temp;
    }
    
}