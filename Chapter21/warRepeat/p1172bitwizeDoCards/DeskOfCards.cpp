#include<iostream>
using std::cout;
using std::endl;
using std::left;
using std::right;
#include<iomanip>
using std::setw;
using std::rand;
using std::srand;
#include<ctime>
using std::time;
#include "DeskOfCards.h"
DeskOfCards::DeskOfCards()
{
    for (int i = 0; i < 52; i++)
    {
        desk[ i ].face = i % 13;
        desk[ i ].suit = i / 13;
        desk[ i ].color = i / 26;
    }
    srand( time( 0 ) );
}
void DeskOfCards::deal()
{
    for ( int i1 = 0, i2 = i1 + 26; i1 <= 25; i1++, i2++ )
    {
        cout << left << setw( 8 ) << face[ desk[ i1 ].face ] << " of " << setw( 8 ) << suit[ desk[ i1 ].suit ];
        cout << "  " << setw( 2 ) << right << colour[ desk[ i1 ].color ];
        cout << "   " << right << setw( 8 ) << face[ desk[ i2 ].face ] << " of " << setw( 8 ) << suit[ desk[ i2 ].suit ];
        cout << "  " << right << setw( 2 ) << colour[ desk[ i2 ].color ] << endl;
    }
}
void DeskOfCards::shuffle()
{
    bitCard hold;
    for( int i = 0; i < 52; i++ )
    {
        int j = rand()%52;
        hold = desk[ i ];
        desk[ i ] = desk[ j ];
        desk[ j ] = hold;
    }
}