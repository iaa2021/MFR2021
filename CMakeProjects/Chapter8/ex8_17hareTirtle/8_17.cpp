#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <cstdlib>
using std::rand;
using std::srand;
#include <ctime>
using std::time;
int tirtle( int );
int hare( int );
void print( char [ 7 ][ 10 ] );
int main()
{
    char line[ 7 ][ 10 ] = { '.' };
    int hCount = 0, tCount = 0;//variables for keeping partner's location
    int tChoice, hChoice;
    for (int i = 0; i < 7; i++)//line's initialisation 
    {
        for (int j = 0; j < 10; j++)
        {
            line[ i ][ j ] = '.';
            cout << line[ i ][ j ] << ' ';
        }
        cout << endl;
    }
    while( tCount < 70 || hCount < 70 )
    {
        srand( time( 0 ) );
        tChoice = rand()%9; hChoice = rand()%9;
        tChoice = (tChoice < 0? 0: tChoice); hChoice = (hChoice < 0? 0: hChoice);
        tCount += tirtle( tChoice ); hCount += hare( hChoice );
        if( tCount == hCount )
        {
            for (int i = 0; i < 7; i++)
            {
                for (int j = 0; j < 10; j++)
                {
                    if( i == tCount / 10 && j == tCount % 10 )
                    line[ i ][ j ] = '!';
                    else
                    line[ i ][ j ] = '.';
                }
            }
        }
        else
        {
            for (int i = 0; i < 7; i++)
            {
                for (int j = 0; j < 10; j++)
                {
                    if( i == tCount / 10 && j == tCount % 10 )
                    line[ i ][ j ] = 't';
                    if( i == hCount / 10 && j == hCount % 10 )
                    line[ i ][ j ] = 'h';
                    else
                    line[ i ][ j ] = '.';
                }
            }
        }
        cout << "\ntirle's choice " << tChoice << " count " << tCount;
        cout << "\nhare's choice " << hChoice << " count " << hCount << endl;
        print( line );
    }

    cout << "tCount is " << tCount << " hCount is " << hCount << endl;
    return 0;
}
int tirtle( int number )
{
    int choice;
    if( number == ( 0 || 1 || 2 || 3 || 4 ) )
    choice = 3;
    if( number == ( 5 || 6 ) )
    choice = -6;
    if( number == ( 7 || 8 || 9 ) )
    choice = 1;
    return choice;
}
int hare( int number )
{
    int choice;
    if( number == ( 0 || 1 ) )
        choice = 0;
    if( number == ( 2 || 3 ) )
        choice = 9;
    if( number == 4 )
        choice = -12;
    if( number == ( 5 || 6 || 7 ) )
        choice = 2;
    if( number == ( 8 || 9 ) )
        choice = -2;
    
    return choice;
}
void print( char array[ 7 ][ 10 ] )
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << array[ i ][ j ] << ' ';
        }
        cout << endl;
    }
    cout << endl;
}