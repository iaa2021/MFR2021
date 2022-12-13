#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setw;
#include "config.h"
void print( int [20][20], char [ 20 ][ 20 ] );
int main()
{
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << '.' << (PROJECT_VERSION_MINOR);
    cout << '.' << (PROJECT_VERSION_PATCH) << endl;
    int floor[ 20 ][ 20 ] = { 0 };
    char watch[ 20 ][ 20 ] = { ' ' };
    int commands[ 11 ][ 2 ] = {
    { 2,  0 },
    { 5, 12 },
    { 3, 0  },
    { 5, 12 },
    { 3, 0  },
    { 5, 12 },
    { 3, 0  },
    { 5, 12 },
    { 1, 0  },
    { 6, 0  },
    { 9, 0  }
};
    int direction = 1, pen = 1, row = 5, column = 5, current;
    cout << "Commands are next:\n";
    for (int i = 0; i < 11; i++)
    {
        for( int j = 0; j < 2; j++ )
        {
            cout << commands[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;;
    for (int i = 0; i < 11; i++)
    {
       switch( commands[ i ][ 0 ] )
       {
        case 1:
        pen = 1;
        break;
        case 2:
        {
            pen = 2;//pointing the tortle's situation
            floor[ row ][ column ] = 1;
        }
        
        break;
        case 3:
        {
            direction++;
            if( direction > 3 )
            direction = 0;
        }
        break;
        case 4:
        {
            direction--;
            if( direction < 0 )
            direction = 3;
        }
        break;
        case 5:
            switch (direction)
            {
            case 0://north
            current = row - commands[ i ][ 1 ];
            if( pen == 2 )
            {
                for ( int i = current; i <= row; i++ )
                floor[ i ][ column ] = 1;
            }
            row -= commands[ i ][ 1 ];
            break;
            case 1://east
            current = column + commands[ i ][ 1 ];
            if( pen == 2 )
            {
                for ( int i = column; i <= current; i++ )
                floor[ row ][ i ] = 1;
            }
            column += commands[ i ][ 1 ];
            break;
            case 2://south
            current = row + commands[ i ][ 1 ];
            if( pen == 2 )
            {
                for ( int i = row; i <= current; i++ )
                floor[ i ][ column ] = 1;
            }
            row += commands[ i ][ 1 ];
            break;
            case 3://west
            current = column - commands[ i ][ 1 ];
            if( pen == 2 )
            {
                for ( int i = current; i <= column; i++ )
                floor[ row ][ i ] = 1;
            }
            column -= commands[ i ][ 1 ];
            break;
            }
        break;
        case 6:
        print( floor, watch );
        break;
        case 9:
        exit( 1 );
        break;
       }
        
    }
    cout << "\nProject version is " << (PROJECT_VERSION_MAJOR) << '.' << (PROJECT_VERSION_MINOR);
    cout << '.' << (PROJECT_VERSION_PATCH) << endl;
    return 0;
}
void print( int ptr[20][20], char ptr1[ 20 ] [ 20 ] )
{
    for ( int i = 0; i < 20; i++ )
    {
        for (int j = 0; j < 20; j++)
        {
            if( ptr[ i ][ j ] == 1 )
            ptr1[ i ][ j ] = '*';
            else
            ptr1[ i ][ j ] = ' ';
        }
    }
     for ( int i = 0; i < 20; i++ )
    {
        for (int j = 0; j < 20; j++)
        {
           if( ( i == 0 || i == 19 || j == 0 || j == 19 ) && ptr[ i ][ j ] != 1 )
           ptr1[ i ][ j ] = '.';
        }
    }
    for ( int i = 0; i < 20; i++ )
    {
        for (int j = 0; j < 20; j++)
        {
            cout << ptr1[ i ][ j ] << ' ';
        }
        cout << endl;
    }
}