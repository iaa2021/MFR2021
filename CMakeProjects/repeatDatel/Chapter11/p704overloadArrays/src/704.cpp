#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "Array.h"
#include "config.h"
int main()
{
    srand( time( 0 ) );
    Array integers1( 7 );
    Array integers2;
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    integers1.getVersion();
    cout << "\nIntegers1's size is " << integers1.getSize() << endl;
    cout << "After initialization array is:\n" << integers1;
    cout << "\nIntegers2's size is " << integers2.getSize() << endl;
    cout << "After initialization array is:\n" << integers2;
    for (int i = 0; i < 7; i++)
    {
        integers1[ i ] = rand()%100;
    }
    for (int i = 0; i < 10; i++)
    {
        integers2[ i ] = rand()%100;
    }
    cout << "After initialization integers1 is:\n" << integers1;
    cout << "After initialization integers2 is:\n" << integers2;
    cout << "\nEvaluating: integersl != integers2" << endl;
    if( integers1 != integers2 )
    cout << "Arrays are not equal.\n";
    Array integers3( integers1 );
    cout << "\nIntegers3's size is " << integers3.getSize() << endl;
    cout << "After initialization array is:\n" << integers3;
    cout << "\nAssigning integers2 to integersl:" << endl;
    integers1 = integers2;
    cout << "\nIntegers1's size is " << integers1.getSize() << endl;
    cout << "After initialization array is:\n" << integers1;
    cout << "\nEvaluating: integersl == integers2" << endl;
    if( integers1 == integers2 )
    cout << "Arrays are equal.\n";
    cout << "\nintegers1[5] is " << integers1[ 5 ];
    cout << "\n\nAssigning 1000 to integersl[5]" << endl;
    integers1[ 5 ] = 1000;
    cout << "integers1:\n" << integers1;
    return 0;
}