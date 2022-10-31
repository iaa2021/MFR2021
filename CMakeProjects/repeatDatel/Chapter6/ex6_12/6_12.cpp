#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
#include <iomanip>
using std::setprecision;

double calculateCharges( double );
int main()
{
    cout << fixed << setprecision( 2 );
    double array[ 3 ][ 3 ];
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            array[ i ][ j ] = 0;
        }
    }
    cout << "\nStart position of 3 drivers:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << array[ i ][ j ] << "  ";
        }
        cout << endl;
    }
    double interval;
    cout << "Input time, every driver left his car for in parking:\n";
    for (int  i = 0; i < 3; i++)
    {
        array[ i ][ 0 ] = i + 1;
        cout << "\nInput time of " << i + 1 << " driver: ";
        cin >> interval;
        array[ i ][ 1 ] = interval;
        array[ i ][ 2 ] = calculateCharges( interval );
    }
    cout << "\nParking calculation for 3 drivers:\n";
    cout << fixed << setprecision( 2 );
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if( j == 0 )
            cout << setprecision( 0 ) << array[ i ][ j ] << "  ";
            else if( j == 1 )
            cout << setprecision( 2 ) << array[ i ][ j ] << " hours ";
            else
            cout << setprecision( 2 ) << array[ i ][ j ] << "$";
        }
        cout << endl;
    }
    return 0;
}
double calculateCharges( double interval )
{
    if ( interval <= 3 )
    return 2;
    else if ( interval > 3 && interval <= 19 )
    return 2 + ( interval - 3 ) * 0.5;
    else 
    return 10;  
}