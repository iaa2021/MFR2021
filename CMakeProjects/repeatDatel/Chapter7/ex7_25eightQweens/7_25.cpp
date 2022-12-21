#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setw;
void access( int [ 8 ][ 8 ] );
void print( int [ 8 ][ 8 ] );
void move( int[ 8 ][ 8 ], int, int, int );
#include "config.h"
int main()
{
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << '.' << (PROJECT_VERSION_MINOR) << '.';
    cout << (PROJECT_VERSION_PATCH) << endl;
    int desk[ 8 ][ 8 ] = { 0 };
    int accessibility[ 8 ][ 8 ] = { 0 };
    access( accessibility );
    print( accessibility );
    cout << "\nPrimary accessibility is:\n";
    int count = 1, row, column, max = 0;
    cout << "Input primary row, than column:\n";
    cin >> row >> column;
    move( desk, row, column, count ); count++;
    for( int a = 22; a <= 28; a += 2 )
    {
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if( desk[ i ][ j ] == 0 && count <= 8 && accessibility[ i ][ j ] == a )
                {
                    move( desk, i, j, count );
                    count++;
                }
            }
        }
    } 
    cout << "\nDesk is:\n";
    for ( int i = 0; i < 8; i++ )
    {
        for ( int j = 0; j < 8; j++ )
        {
            if( desk[ i ][ j ] >= 10 )
            {
                cout << setw( 2 ) << desk[ i ][ j ] / 10 << " ";
                if( max < desk[ i ][ j ] / 10 )
                max = desk[ i ][ j ] / 10;
            }
            else
            cout << setw( 2 ) << 0 << " ";
        }
        cout << endl;
    }
    cout << "There are " << max << " qeens on the desk.\n";
    cout <<  max << "'s qween is on the ";
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < count; j++)
        {
            if( desk[ i ][ j ] == max * 10 )
            {
                cout << i << " row, " << j << " column\n";
            }
        }
        
    }
    cout << endl;
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << '.' << (PROJECT_VERSION_MINOR) << '.';
    cout << (PROJECT_VERSION_PATCH) << endl;
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
    int cR = row, cC = column;
    desk[ row ][ column ] = count * 10;
    for ( int i = 0; i < 8; i++ )
    {
        if( desk[ i ][ column ] == 0 )
        desk[ i ][ column ] = count;
        for ( int j = 0; j < 8; j++ )
        {
            if( desk[ row ][ j ] == 0 )
            desk[ row ][ j ] = count;
        }
    }    
    while( cR >= 0 && cC < 8 )//upper and right sector
    {
        if( desk[ cR ][ cC ] == 0 )
        desk[ cR ][ cC ] = count;

        cR--; cC++;
    }
    cR = row; cC = column;
    while( cR < 8 && cC >= 0 )//lower and left sector
    {
        if( desk[ cR ][ cC ] == 0 )
        desk[ cR ][ cC ] = count;

        cR++; cC--;
    }
    cR = row; cC = column;
    while( cR < 8 && cC < 8 )//lower and right sector
    {
        if( desk[ cR ][ cC ] == 0 )
        desk[ cR ][ cC ] = count;

        cR++; cC++;
    }
    cR = row; cC = column;
    while( cR >= 0 && cC >= 0 )//lower and right sector
    {
        if( desk[ cR ][ cC ] == 0 )
        desk[ cR ][ cC ] = count;

        cR--; cC--;
    }
}