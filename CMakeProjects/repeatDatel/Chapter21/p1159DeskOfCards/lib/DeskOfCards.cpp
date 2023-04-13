#include "DeskOfCards.h"
#include "config.h"
DeskOfCards::DeskOfCards()
{
    static string suit[ 4 ] = { "Hearts", "Diamonds", "Clubs", "Spades" };
    static string face[ 13 ] = { "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };
    for ( int i = 0; i < 52; i++)
    {
        desk[ i ].suit = suit[ i / 13 ];
        desk[ i ].face = face[ i % 13 ];
    }
    srand( time( 0 ) );
}
void DeskOfCards::shuffle()
{
    for ( int i = 0; i < 52; i++)
    {
        int j = rand()% 52;
        Card temp = desk[ j ];
        desk[ j ] = desk[ i ];
        desk[ i ] = temp; 
    }
}
void DeskOfCards::deal()
{
    for ( int i = 0; i < 52; i++)
    {
        cout << setw( 9 ) << left << desk[ i ].face << " of ";
        cout << setw( 6 ) << right << desk[ i ].suit << ",  ";
        if( ( i + 1 ) % 4 == 0 )
        cout << endl;
    }
}
void DeskOfCards::printVersion() 
{
    cout << "\nLibrary's version is " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
}