#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::left;
using std::right;
using std::fixed;
#include <cstdlib>
using std::rand;
using std::srand;
#include <ctime>
using std::time;
#include <iomanip>
using std::setw;
using std::setprecision;
#include "config.h"
int main()
{
    srand( time( 0 ) );
    int array[ 5 ][ 6 ] = { 0 };//rows - sellers, columns - goods, last row - seller's sum, 
    // last column - good's sum
    int count = 0;
    double price[ 5 ] = { 11.25, 13.47, 9.75, 8.33, 1.21 };
    double revenue[ 4 ] = { 0 };
    for( int i = 0; i < 4; i++ )//initialisation of daily sails made by sellers
    {
        for (int j = 0; j < 5; j++)
        {
            array[ i ][ j ] = rand()%10 + 1;
        }
    }
    count = 0;
    for( int j = 0; j < 5; j++ )
    {
        for (int i = 0; i < 4; i++)
        {
            array[ 4 ][ count ] += array[ i ][ count ];
        }
        count++;
    }
    cout << setw( 12 ) << left << "Goods";
    cout << fixed << setprecision( 2 );
    for (int j = 0; j < 5; j++)
        {
            cout  << "#" << j + 1 << " x " << setw( 4 ) << price[ j ] << ' ';
        }
    cout << endl;
    for( int i = 0; i < 5; i++ )
    {
        if( i == 4 )
        cout << "Good's sum" << "  ";
        else
        cout << "Seller #" << i + 1 << "  "; 
        for (int j = 0; j < 5; j++)
        {
            cout << setw( 8 ) << right << array[ i ][ j ] << "  ";
        }
        cout  << endl;
    }
    for( int i = 0; i < 4; i++ )
    {
        for (int j = 0; j < 5; j++)
        {
            revenue[ i ] += static_cast<double>( array[ i ][ j ] ) * price[ i ];
        }
    }
    cout << "Daily seller's revenue:\n";
    for (int i = 0; i < 4; i++)
    {
        cout << "Seller #" << i + 1 << "  " << revenue[ i ] << endl;
    }
    cout << "\nProject version " << (PROJECT_VERSION_MAJOR) << '.' << (PROJECT_VERSION_MINOR) << '.';
    cout << (PROJECT_VERSION_PATCH) << endl;
    return 0;
}