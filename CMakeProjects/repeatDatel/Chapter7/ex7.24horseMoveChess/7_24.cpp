#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <vector>
using std::vector;
void access( int[ 8 ][ 8 ], int[ 8 ][ 8 ], int, int, int[ 8 ], int[ 8 ] );
void print( int [ 8 ][ 8 ] );
#include "config.h"
int main()
{
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << '.' << (PROJECT_VERSION_MINOR);
    cout << '.' << (PROJECT_VERSION_PATCH) << endl;
    int accessibility[ 8 ][ 8 ] = { 0 };
    int desk[ 8 ][ 8 ] = { 0 };
    int horizontal[ 8 ] = { 2, 1, -1, -2, -2, -1, 1, 2 };
    int vertical[ 8 ] =  { -1, -2, -2, -1, 1, 2, 2, 1 };
    int currentRow, currentColumn, count = 1, min;
    bool stop = false;//continue game if false or not if true
    vector< vector<int> > moves;
    cout << "\nPrimary accessibility for horse move for chess desk via function is:\n";
    access( desk, accessibility, currentRow, currentColumn, vertical, horizontal );
    print( accessibility );
    cout << "\nInput primary point, row, than column:\n";
    cin >> currentRow >> currentColumn;
    desk[ currentRow ][ currentColumn ] = count;
    cout << "\nPrimary accessibility for horse move for chess desk via function is:\n";
    access( desk, accessibility, currentRow, currentColumn, vertical, horizontal );
    print( accessibility );
    while( stop != true )
    {
        int cR = currentRow, cC = currentColumn;
        for (int k = 0; k < 8; k++)//seeking for possible moves 
        {
            cR += horizontal[ k ];
            cC += vertical[ k ];
            if( cR < 8 && cC < 8 && cC >= 0 && cR >= 0 && desk[ cR ][ cC ] == 0 )
            {
                min = accessibility[ cR ][ cC ];
                moves[ 0 ].push_back( k );
                moves[ 1 ].push_back( accessibility[ cR ][ cC ] );
                if( min > accessibility[ cR ][ cC ] )
                min = accessibility[ currentRow ][ currentColumn ];
            }  
        }
        if( !moves.empty() )
        {
            count++;
            stop = false;
        }
        else
        stop = true;
        if( stop == false )
        {
            for( size_t i = 0; i < moves[ 1 ]. size(); i++ )//make move
        {
            if( moves[ 1 ].at( i ) == min )
            {
                currentRow += horizontal[ moves[ 0 ].at( i ) ];
                currentColumn += vertical[ moves[ 0 ].at( i ) ];
                desk[ currentRow ][ currentColumn ] = count;
                break;
            }
        }
        for( int i = 0; i < 2; i++ )
        moves[ i ].clear();
        }
        print( desk );
        cout << endl;
    }
    cout << endl;
    print( desk );
    cout << "\nProject version is " << (PROJECT_VERSION_MAJOR) << '.' << (PROJECT_VERSION_MINOR);
    cout << '.' << (PROJECT_VERSION_PATCH) << endl;
    return 0;
}
void access( int desk[ 8 ][ 8 ], int accessibility[ 8 ][ 8 ], int currentRow, int currentColumn, int vertical[ 8 ], int horizontal[ 8 ] )
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        accessibility[ i ][ j ] = 0;
    }
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if( desk[ i ][ j ] == 0 )
            {
                for (int k = 0; k < 8; k++)
                {
                    currentRow = i + horizontal[ k ];
                    currentColumn = j + vertical[ k ];
                    if( currentColumn < 8 && currentRow < 8 && currentColumn >= 0 && currentRow >= 0 && desk[ currentRow ][ currentColumn ] == 0 )
                    accessibility[ i ][ j ]++;
                }
            }
        }
    }
}
void print( int desk [ 8 ][ 8 ] )
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cout << desk[ i ][ j ] << ' ';
        }
        cout << endl;
    }
}
