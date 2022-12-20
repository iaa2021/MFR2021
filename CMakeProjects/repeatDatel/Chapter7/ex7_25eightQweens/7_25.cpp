#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setw;
void access( int [ 8 ][ 8 ] );
void print( int [ 8 ][ 8 ] );
void move( int[ 8 ][ 8 ], int, int, int );
int main()
{
    int desk[ 8 ][ 8 ] = { 0 };
    int accessibility[ 8 ][ 8 ] = { 0 };
    access( accessibility );
    print( accessibility );
    cout << "\nPrimary accessibility is:\n";
    int count = 1, row, column;
    cout << "Input initial row, than column:\n";//Plasing first qween
    cin >> row >> column;
    move( desk, row, column, count );
    count++;
    cout << "\nCount is: " << count << ", first move is:\n";
    print( desk );
    return 0;
}
void access( int acc[ 8 ][ 8 ] )
{
    int count = 15;
    for ( int i = 0; i < 8; i++ )
    {
        for ( int j = 0; j < 8; j++ )
        {
            for (int k = 0; k < j; k++)//segment before j up & down
            {
                if( i - j + k >= 0 )
                count++;
                if( i + j - k < 8 )
                count++;
            }
            for (int k = j + 1; k < 8; k++)//segment after j up & down
            {
                if( i - k + j >= 0 )
                count++;
                if( i + k - j < 8 )
                count++;
            }
            acc[ i ][ j ] = count;
            count = 15;
        }
    }
}
void print( int acc[ 8 ][ 8 ] )
{
    for ( int i = 0; i < 8; i++ )
    {
        for ( int j = 0; j < 8; j++ )
        {
            cout << setw( 2 ) << acc[ i ][ j ] << " ";
        }
        cout << endl;
    }
}
void move( int desk[ 8 ][ 8 ], int row, int column, int count )
{
    desk[ row ][ column ] = count;
    for ( int i = 0; i < 8; i++ )
    {
        desk[ i ][ column ] = count;
        for ( int j = 0; j < 8; j++ )
        {
            desk[ row ][ j ] = count;
        }
    }    
    
}