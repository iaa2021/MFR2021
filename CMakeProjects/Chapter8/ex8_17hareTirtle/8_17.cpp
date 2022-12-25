#ifdef WIN32
#include <windows.h>
using std::sleep;
#else
#include <unistd.h>
#endif
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
    srand( time( 0 ) );
    char line[ 7 ][ 10 ] = { '.' };
    int hCount = 0, tCount = 0;//variables for keeping partner's location
    int tChoice, hChoice;
    for (int i = 0; i < 7; i++)//line's initialisation 
    {
        for (int j = 0; j < 10; j++)
        {
            line[ i ][ j ] = '.';
        }
    }
    cout << "BANG !!!!! AND THE'RE OFF MM!\n";
    tChoice = rand()%9;//first move
    tCount += tirtle( tChoice );
    tCount = ( tCount < 0? 0: tCount );
    hChoice = rand()%9;
    hCount += hare( hChoice );
    hCount = (hCount < 0? 0: hCount );
    if( tCount == hCount )
        line[ tCount / 10 ][ tCount % 10 ] = '!';
        else
        {
            line[ tCount / 10 ][ tCount % 10 ] = 't';
            line[ hCount / 10 ][ hCount % 10 ] = 'h';
        }
    print( line );
    while( tCount < 70 && hCount < 70 )
    {
        for (int i = 0; i < 7; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                line[ i ][ j ] = '.';
            }
        }
        tChoice = rand()%9;
        tCount += tirtle( tChoice );
        tCount = ( tCount < 0? 0: tCount );
        hChoice = rand()%9;
        hCount += hare( hChoice );
        hCount = (hCount < 0? 0: hCount );
        if( tCount == hCount )
        {
            line[ tCount / 10 ][ tCount % 10 ] = '!';
            cout << "OUCH!!!\n";
        }
        
        else
        {
            if( tCount >= 70 )
            line[ 6 ][ 9 ] = 't';
            else
            line[ tCount / 10 ][ tCount % 10 ] = 't';
            if( hCount >= 70 )
            line[ 6 ][ 9 ] = 'h';
            else
            line[ hCount / 10 ][ hCount % 10 ] = 'h';
        }
        print( line );
        usleep( 1500 );// if we need to sleep for miliseconds
        //sleep( 1 ); if we need to sleep for seconds
    }
    if( tCount >= 70 && hCount < 69 )
    cout << "Turtle wins, way! With count " << tCount << endl;
    if( hCount >= 70 && tCount < 69 )
    cout << "Hare wins. Youch. With count " << hCount << endl;
    if( tCount >= 70 && hCount > 70 )
    cout << "It's draw.\n";
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