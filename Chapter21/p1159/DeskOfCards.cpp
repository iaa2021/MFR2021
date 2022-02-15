#include <iostream>
using std::cout;
using std::endl;
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
    static char *suit[4] = { "Hearts", "Diamonds", "Clubs", "Spades" };
    static char *face[13] = { "Ace", " 2 ", " 3 ", " 4 ", " 5 ", " 6 ", " 7 ", " 8 ", " 9 ", " 10 ", "Jack", "Queen", "King" };
    for( int i = 0; i < 52; i++ )
    {
        desk[i].face = face[ i % 13 ];
        desk[i].suit = suit[ i / 13 ];
        srand( time(0) );
    }   
}
void DeskOfCards::shuffle()
{
    cout << "\nDesk before shuffling:\n";
    for( int i = 0; i < 52; i++ )
    {
        cout << desk[i].face << " of " << desk[i].suit <<  ( ( i + 1 ) % 4 ? '\t' : '\n' );
    }
    cout << "\nDesk after shuffling:\n";
    for( int i = 0; i < 52; i++ )
    {
        Card temp = desk[i];
        int j = rand()%52;
        desk[i] = desk[j];
        desk[j] = temp;
    }
}
void DeskOfCards::deal()
{
    for( int i = 0; i < 52; i++ )
    {
        cout << right << setw( 5 ) << desk[i].face << " of " << left << setw( 8 ) << desk[i].suit << ( ( i + 1 ) % 2 ? '\t' : '\n' );
    }
    cout << "\nThus i % 13 =  i - i * (i / 13)\n";
    cout  << " i " << " face " << "  " << " suit " << endl;
    cout << endl << "[ i % 13 ] " << "  " << "[ i / 13 ]" << endl;
    for( int i = 0; i < 52; i++ )
    {
        cout << setw(5) << i << setw(5) << i % 13  << setw(8) <<  i / 13  << endl;
        if( ( i + 1 ) % 13 == 0 )
        {
            cout << "\nThus i % 13 =  i - i * (i / 13)\n";
            cout  << " i " << " face " << "  " << " suit " << endl;
        }
    }
    
}