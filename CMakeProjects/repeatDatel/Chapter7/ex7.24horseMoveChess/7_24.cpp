#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <vector>
using std::vector;
#include <iomanip>
using std::setw;
#include <cstdlib>
using std::rand;
using std::srand;
#include <ctime>
using std::time;
void access( int[ 8 ][ 8 ], int[ 8 ][ 8 ], int, int, int[ 8 ], int[ 8 ] );
void print( int [ 8 ][ 8 ] );
#include "config.h"
int main()
{
    srand( time( 0 ) );
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << '.' << (PROJECT_VERSION_MINOR);
    cout << '.' << (PROJECT_VERSION_PATCH) << endl;
    int accessibility[ 8 ][ 8 ] = { 0 };
    int desk[ 8 ][ 8 ] = { 0 };
    int horizontal[ 8 ] = { 2, 1, -1, -2, -2, -1, 1, 2 };
    int vertical[ 8 ] =  { -1, -2, -2, -1, 1, 2, 2, 1 };
    int currentRow, currentColumn, count = 1, min = 10, desision;
    int stop = 0;//variable for game's continue
    vector< vector<int> > moves( 2 );
    cout << "\nPrimary accessibility for horse move for chess desk via function is:\n";
    access( desk, accessibility, currentRow, currentColumn, vertical, horizontal );
    print( accessibility );
    cout << "\nInput primary point, row, than column:\n";
    cin >> currentRow >> currentColumn;
    desk[ currentRow ][ currentColumn ] = count;
    cout << "\nSecondary accessibility for horse move for chess desk via function is:\n";
    access( desk, accessibility, currentRow, currentColumn, vertical, horizontal );
    print( accessibility );
    while( stop == 0 && count <= 64 )
    {
        int cR = currentRow; int cC = currentColumn;
        for ( int i = 0; i < 8; i++ )
        {
            cR += horizontal[ i ]; cC += vertical[ i ];
            if( cR >= 0 && cC >= 0 && cR < 8 && cC < 8 && desk[ cR ][ cC ] == 0 )
            {
                moves[ 0 ].push_back( i );//keeping move's variant
                moves[ 1 ].push_back( accessibility[ cR ][ cC ] );//keeping accessibility
            }
            cR = currentRow; cC = currentColumn;
        }
        if( moves[ 0 ].empty() && moves[ 1 ].empty() )
        {
            stop = 1;
            cout << "\nVector moves is empty on " << count << " count\n";
        }
        else
        {
            count++; stop = 0;
            for (size_t i = 0; i < moves[ 0 ].size(); i++)
            {
                if( min > moves[ 1 ][ i ] && moves[ 1 ][ i ] > 0 )
                {
                    min = moves[ 1 ][ i ];
                    desision = moves[ 0 ][ i ];
                }
            }
            currentRow += horizontal[ desision ]; currentColumn += vertical[ desision ];
            desk[ currentRow ][ currentColumn ] = count;
            moves[ 0 ].clear(); moves[ 1 ].clear();
            access( desk, accessibility, currentRow, currentColumn, vertical, horizontal );
        }
        
    }   
    
    
    cout << "\nDesk is\n";
    print( desk );
    cout << "\nFinally accessibility for horse move for chess desk via function is:\n";
    access( desk, accessibility, currentRow, currentColumn, vertical, horizontal );
    print( accessibility );
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
            cout << setw( 2 ) << desk[ i ][ j ] << ' ';
        }
        cout << endl;
    }
}
