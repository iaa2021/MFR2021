#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::left;
using std::right;
#include <vector>
using std::vector;
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
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << "." << (PROJECT_VERSION_MINOR);
    cout << "." << (PROJECT_VERSION_PATCH) << endl;
    srand( time( 0 ) );
    cout << "Painting a gistogram.\n";
    int a;
    int s = rand()% 15 + 5;
    vector<int> v;
    for (int i = 0; i < s; i++)
    {
        a = rand()%10 + 1;
        v.push_back( a );
    }
    for (int i = 0; i < s; i++)
    {
        cout << setw( 2 ) << v.at( i ) << "  "; 
        for ( int j = 0; j < v.at( i ); j++ )
        {
            cout << '*';
        }
        cout << endl;
    }
    cout << "\nMaking an exersize 5.14.\n";
    double array [5][4] = { 0 };
    for( int i = 0; i < 5; i++ )
       {
        for (int j = 0; j < 4; j++)
        {
            array[ i ][ 0 ] = i + 1; array[ i ][ 1 ] = 0; array[ i ][ 2 ] = 0; array[ i ][ 4 ] = 0;
        }
       }
    for( int i = 0; i < 5; i++ )
       {
        for (int j = 0; j < 4; j++)
        {
            cout << array[ i ][ j ] << "  ";
        }
        cout << endl;
       }
    cout << "Input good's identifier, -1 to end input: ";
    int identifier, number; double total = 0;
    cin >> identifier;
    while ( identifier != -1 )
    {
        switch ( identifier )
        {
        case 1: 
            {
                cout << "\nGood1's price is 2.98. Input it's number: ";
                cin >> number;
                total += 2.98 * number;
                array[ 0 ][ 1 ] = 2.98;
                array[ 0 ][ 2 ] += number;
                array[ 0 ][ 3 ] += 2.98 * number;
            }
            break;
        case 2: 
            {
                cout << "\nGood2's price is 4.50. Input it's number: ";
                cin >> number;
                total += 4.50 * number;
                array[ 1 ][ 1 ] = 4.50;
                array[ 1 ][ 2 ] += number;
                array[ 1 ][ 3 ] += 4.50 * number;
            }
            break;
        case 3: 
            {
                cout << "\nGood3's price is 9.98. Input it's number: ";
                cin >> number;
                total += 9.98 * number;
                array[ 2 ][ 1 ] = 9.98;
                array[ 2 ][ 2 ] += number;
                array[ 2 ][ 3 ] += 9.98 * number;
            }
        case 4: 
            {
                cout << "\nGood4's price is 4.49. Input it's number: ";
                cin >> number;
                total += 4.49 * number;
                array[ 3 ][ 1 ] = 4.49;
                array[ 3 ][ 2 ] += number;
                array[ 3 ][ 3 ] += 4.49 * number;
            }
        case 5: 
            {
                cout << "\nGood5's price is 6.87. Input it's number: ";
                cin >> number;
                total += 6.87 * number;
                array[ 4 ][ 1 ] = 6.87;
                array[ 4 ][ 2 ] += number;
                array[ 4 ][ 3 ] += 6.87 * number;
            }
        default:
            cout << "\nYou've written wrong identifier.\n"; 
            break;
        }
        cout << "\nInput good's identifier: ";
        cin >> identifier;
    }
    cout << "Total sum of sold goods for week is " << total << endl;
    cout << "Verbose report of week trade:\n" << fixed;
    cout << setw( 15 ) << left << " Good's code " << setw( 7 ) << left << "Price"; 
    cout << setw( 8 ) << left << "Number" << setw( 15 ) << "Good's total" << endl;
    for( int i = 0; i < 5; i++ )
    {
        cout << left << setw( 15 ) << setprecision( 0 ) << array[ i ][ 0 ];
        cout << setw( 7 ) << setprecision( 2 ) << array[ i ][ 1 ];
        cout << setw( 8 ) << array[ i ][ 2 ]  << setw( 15 ) << left << array[ i ][ 3 ] << endl;
    }
    return 0;
}
