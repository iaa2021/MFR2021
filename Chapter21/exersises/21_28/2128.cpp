#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
void printBegin( string );//prints sentenses, which end on b letter
void printEnd( string );
int main()
{
    string array[ 3 ];
    cout << "Input 3 sentences:\n";
    for (size_t i = 0; i < 3; i++)
    {
        getline( cin, array[ i ] );
    }
    cout << "The sentences, beginning on letter b are:\n";
    for (size_t i = 0; i < 3; i++)
    printBegin( array[ i ] );
    cout << "The sentences, ending on letters \"ED\" are:\n";
    for (size_t i = 0; i < 3; i++)
    printEnd( array[ i ] );
    return 0;
}
void printBegin( string a )
{
    if( a.at( 0 ) == 'b' || a.at( 0 ) == 'B' )
    cout << a << endl;
}
void printEnd( string b )
{
    size_t s = b.length();
    if ( ( b.at( s - 1 ) == 'D' &&  b.at( s - 2 ) == 'E' ) || ( b.at( s - 2 ) == 'D' && b.at( s - 3 ) == 'E' ) )
    {
        cout << b << endl;
    }
    
}