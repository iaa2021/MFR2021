#include <iostream>
using std::cout;
using std::cin;
using std::left;
using std::right;
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
    static char *suit[ 4 ] = { "Hearts", "Diamonds", "Clubs", "Spades" };
    static char *face[ 13 ] = { "Ace", "Deuse", "Free", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Qween", "King" };
    for (int i = 0; i < 52; i++)
    {
        desk[ i ].face = face [ i % 13 ];
        desk[ i ].suit = suit [ i / 13 ];
    }
    srand( time(0) );
}
void DeskOfCards::shuffle()
{
    for (int i = 0; i < 52; i++)
    {
        int j = rand()%52;
        Card temp = desk[i];
        desk[i] = desk[j];
        desk[j] = temp;
    }
}
void DeskOfCards::deal()
{
    for (int i = 0; i < 52; i++)
    {
        cout << right << setw(5) << desk[i].face << " of " << left << setw(8) << desk[i].suit << ( (i + 1) % 2 == 0? '\n': '\t' );
    }
    
}

