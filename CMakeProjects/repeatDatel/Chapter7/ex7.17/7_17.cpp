#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std:: fixed;
#include <cstdlib>
using std::rand;
using std::srand;
#include <ctime>
using std::time;
#include <iomanip>
using std::setprecision;
using std::setw;
#include "config.h"
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.' << (PROJECT_VERSION_MINOR) << '.';
    cout << (PROJECT_VERSION_PATCH) << '.' << endl;
    srand( time( 0 ) );
    int array[ 13 ] = { 0 };
    int a, b, count;
    double frequency;
    cout << "Input, how many times you'd like to drop bones ";
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        a = rand()%6 + 1; b = rand()%6 + 1;
        array[ a + b ]++;
    }
    cout << "\nBones have been dropped " << count << " times.\n";
    cout << "\nFrequences of bones sums are:\n";
    for (int i = 2; i < 13; i++)
    {
        cout << "Sum is " << setw( 2 ) << i << " quantity is " << setw( 4 ) << array[ i ];
        frequency = static_cast<double> (array[ i ]) / static_cast<double> ( count );
        cout << " frequency is ";
        cout << setw( 4 ) << fixed << setprecision( 2 ) << frequency * 100 << "%" << endl;
    }
    return 0;
}