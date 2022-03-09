#include <iostream>
using std::left;
using std::right;
using std::cout;
using std::endl;
#include <cstdlib>
using std::rand;
using std::srand;
#include <ctime>
using std::time;
#include <iomanip>
using std::setw;
#include "DeskOfCards.h"

DeskOfCards::DeskOfCards()
{
    static char *suit[ 4 ] = { "hearts", "diamonds", "clubs", "spades" };
    static char *face[ 13 ] = { "Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King" };
    for (int i = 0; i < 52; i++)
    {
        desk[ i ].face = face [ i % 13 ];
        desk[ i ].suit = suit [ i / 13 ];
    }
    srand( time( 0 ) );
}
void DeskOfCards::shuffle()
{
    Card hold;
    for (int i = 0; i < 52; i++)
    {
        int a = rand()%52;
        hold = desk[ a ];
        desk[ a ] = desk[ i ];
        desk[ i ] = hold;
    }
    
}
void DeskOfCards::deal()
{
    for (int i = 0; i < 52; i++)
    {
        cout << setw( 5 ) << right << desk[ i ].face << " of " << left << setw( 8 ) << desk[ i ].suit << ( ( i + 1 ) % 2 ? '\t' : '\n' );
    }
    
}