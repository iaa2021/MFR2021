#include "DeskOfCards1.h"
#include "config.h"
DeskOfCards1::DeskOfCards1()
{
    for ( int i = 0; i < 52; i++)
    {
        desk[ i ].suit = i / 13;
        desk[ i ].face = i % 13;
        desk[ i ].colour = i % 26;
    }
    srand( time( 0 ) );
}
void DeskOfCards1::shuffle()
{
    for ( int i = 0; i < 52; i++)
    {
        int j = rand()% 52;
        BitCard temp = desk[ j ];
        desk[ j ] = desk[ i ];
        desk[ i ] = temp; 
    }
}
void DeskOfCards1::deal()
{
    static string sSuit[ 4 ] = { "Hearts", "Diamonds", "Clubs", "Spades" };
    static string sFace[ 13 ] = { "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };
    static string sColour[ 2 ] = { "Red", "Black" };
    for ( int i = 0; i < 52; i++)
    {
        cout << setw( 6 ) << left << sFace[ desk[ i ].face ] << " of ";
        cout << setw( 6 ) << right << sSuit[ desk[ i ].suit ] << ",  ";
        cout << setw( 6 ) << right << sColour[ desk[ i ].colour] << "; ";
        if( ( i + 1 ) % 4 == 0 )
        cout << endl;
    }
}
void DeskOfCards1::printVersion() 
{
    cout << "\nLibrary's version is " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
}