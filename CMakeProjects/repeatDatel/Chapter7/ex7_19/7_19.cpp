#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::left;
using std::right;
using std::fixed;
#include<cstdlib>
using std::rand;
using std::srand;
#include <ctime>
using std::time;
#include <iomanip>
using std::setprecision;
using std::setw;
#include "config.h"
void crebs( int *, int * );
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    srand( time( 0 ) );
    int wins[ 20 ] = { 0 };
    int loses[ 20 ] = { 0 };
    int array[ 20 ];
    double winFrequency[ 20 ];
    double loseFrequency[ 20 ];
    for (int i = 0; i < 20; i++)
    {
        array[ i ] = i + 1;
    }
    int count, winCount = 0, loseCount = 0;
    cout << "Input game's number: ";
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        crebs( wins, loses );
    }
    cout << count <<  " games've been played.\n";
    cout <<  setw( 7 ) << left << "rolls" << setw( 7 ) << left << "wins" << setw( 7 ) << left << "wins%";
    cout << left << setw( 7 ) << "loses" << left << setw( 7 ) << "loses%"<< endl; 
    cout << fixed << setprecision( 2 );
    for (int i = 0; i < 20; i++)
    {
        winCount += wins[ i ]; loseCount += loses[ i ]; 
    }
     for (int i = 0; i < 20; i++)
    {
        winFrequency[ i ] = static_cast<double>( wins[ i ] ) / static_cast<double>( count );
        loseFrequency[ i ] = static_cast<double>( loses[ i ] ) / static_cast<double> ( count );
    }
    for (int i = 0; i < 20; i++)
    {
        cout << setw( 7 ) << left << array[ i ] << setw( 7 ) << wins[ i ];
        cout << setw( 4 ) << left << winFrequency[ i ] * 100 << "%";
        cout << setw( 7 ) << right << loses[ i ];
        cout << right << setw( 7 ) << loseFrequency[ i ] * 100 << "%" << endl;
    }
    
    cout << "\nRolls ";
    for (int i = 0; i < 20; i++)
    cout << setw( 5 ) << left << array[ i ];

    cout << "\nWins ";
    for (int i = 0; i < 20; i++)
    cout << setw( 5 ) << wins[ i ];

    cout << "\nLoses ";
    for (int i = 0; i < 20; i++)
    cout << setw( 5 ) << loses[ i ];
    
    cout << "\nTotal win's number = " << winCount << endl;
    cout << "Total win's frequency = ";
    cout << ( static_cast<double>( winCount ) / static_cast<double>( count ) ) * 100 << "%\n";
    cout << "Total loses's number = " << loseCount << endl;
    cout << "Total lose's frequency = ";
    cout << ( static_cast<double>( loseCount ) / static_cast<double>( count ) ) * 100 << "%\n";
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    return 0;
}
void crebs( int *wins, int *loses )
{
    enum Status { Continue, Win, Lost };
    int due1 = rand()%6 + 1;
    int due2 = rand()%6 + 1;
    int sum = due1 + due2;
    Status gameStatus;
    int sumOfDice = sum;
    int myPoint, count = 1;
    switch( sumOfDice )
    {
        case 7:
        case 11: gameStatus = Win;
        break;
        case 2:
        case 3:
        case 12: gameStatus = Lost;
        break;
        default:
        gameStatus = Continue;
        myPoint = sumOfDice;
        break;
    }
    while ( gameStatus == Continue )
    {
        count++;
        due1 = rand()%6 + 1;
        due2 = rand()%6 + 1;
        sumOfDice = due1 + due2;
        if ( sumOfDice == myPoint )
        gameStatus = Win;

        else if( sumOfDice == 7 )    
        gameStatus = Lost;
    }
    if( gameStatus == Win )
    {
        if( count >= 20 )
        wins[ 19 ]++;
        else
        wins[ count - 1 ]++;
    }
    
    else if( gameStatus == Lost )
    {
        if( count >= 20 )
        loses[ 19 ]++;
        else
        loses[ count - 1 ]++;
    }
}