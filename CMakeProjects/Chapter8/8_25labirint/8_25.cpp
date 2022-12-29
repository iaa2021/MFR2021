#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setw;
#include <vector>
using std::vector;
template< class T >
void print( T [ 12 ][ 12] );
int main()
{
    char lab[ 12 ][ 12 ] = {
        { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' },
        { '#', '.', '.', '.', '#', '.', '.', '.', '.', '.', '.', '#' },
        { '.', '.', '#', '.', '#', '.', '#', '#', '#', '#', '.', '#' },
        { '#', '#', '#', '.', '#', '.', '.', '.', '.', '#', '.', '#' },// 4'th line
        { '#', '.', '.', '.', '.', '#', '#', '#', '.', '#', '.', '.' },
        { '#', '#', '#', '#', '.', '#', '.', '#', '.', '#', '.', '#' },
        { '#', '.', '.', '#', '.', '#', '.', '#', '.', '#', '.', '#' },
        { '#', '#', '.', '#', '.', '#', '.', '#', '.', '#', '.', '#' },// 8'th line
        { '#', '.', '.', '.', '.', '.', '.', '.', '.', '#', '.', '#' },
        { '#', '#', '#', '#', '#', '#', '.', '#', '#', '#', '.', '#' },
        { '#', '.', '.', '.', '.', '.', '.', '#', '.', '.', '.', '#' },
        { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' }
    };
    print( lab );
    int intLab[ 12 ][ 12 ] = { 0 };
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            if( lab[ i ][ j ] == '#' )
            intLab[ i ][ j ] = 10;
            else
            intLab[ i ][ j ] = 0;
        }
    };
    int curRow = 2, curColumn = 0;
    lab[ curRow ][ curColumn ] = '0';
    intLab[ curRow ][ curColumn ] = 1;
    vector< int >moves;//move's variants
    cout << "First move \n";
    print( lab ); print( intLab );
    int horisontal[ 4 ] = { -1, 0, 0, 1 }, vertical[ 4 ] = {  0, -1, 1, 0 };//west, nord, south, east
    int hCorrection[ 4 ] = { 0, 1, -1, 0 }, vCorrection[ 4 ] = { -1, 0, 0, 1 };// right hand's correction
    int cR = curRow, cC = curColumn, count = 1;
        for (int i = 0; i < 4; i++)
        {
            cR += vertical[ i ]; cC += horisontal[ i ];
            if( intLab[ cR ][ cC ] == 0 && lab[ cR ][ cC ] == '.' )
            {
                moves.push_back( i );
            }
            cR = curRow; cC = curColumn;
        }
        cout <<  count << " move is \n";
        print( lab ); print( intLab );
    return 0;
}
template< class T >
void print ( T lab[ 12 ][ 12 ] )
{
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cout << setw( 2 ) << lab[ i ][ j ] << ' ';
        }
        cout << endl;
    }
    cout << endl;
}