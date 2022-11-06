#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
#include <cstdlib>
using std::rand;
using std::srand;
#include <ctime>
using std::time;
#include <string>
using std::string;
#include <iomanip>
using std::setprecision;
#include "config.h"
int main()
{
    srand( time( 0 ) );
    int a, b, frequency0 = 0, frequency1 = 0;
    cout << "Input interval, to drop coin, -1 to end input:\n";
    cin >> a;
    while ( a != -1 )
    {
        for ( int i = 0; i < a; i++ )
        {
            b = rand()%2;
            if( b == 0 )
            frequency0++;
            else
            frequency1++;
        }
        cout << "\nFrequency of 0 is : " << frequency0;
        cout << "\nFrequency of 1 is : " << frequency1 << endl;
        cout << "Input interval, to drop coin, -1 to end input:\n";
        cin >> a;
        frequency0 = 0; frequency1 = 0;
    }
    cout << "\nNow completing ex 6.36.\n";
    int a1, b1, c1, answer, wrong = 0, right = 0, j;
    double frequency;
    string array[8] = { "\nVery good!\n", "\nGreat!\n", "\nGreat work!\n", "\nKeep up the good work\n",
        "\nNo, try again, please.\n", "\nNo, try one more time, please\n", "\nDon't give up.\n", "\nNo keep trying.\n"
    };
    cout << "\nMake 10 attempts to multiply numbers:\n";
    for (size_t i = 0; i < 10; i++)
    {
        a1 = rand()%20 + 1; 
        b1 = rand()%20 + 1;
        c1 = a1 * b1;
        cout << a1 << " * " << b1 << " = ";
        cin >> answer;
        if( answer == c1 )
        {
            j = rand()%4;
            cout << array[ j ];
            right++;
        }
        else
        {
            j = rand()%4 + 4;
            cout << array[ j ];
            wrong++;
        }
    }
    cout << "\nRight answers quantity is " << right << endl;
    cout << "\nWrong answers quantity is " << wrong << endl;
    frequency = static_cast<double>( right ) / 10;
    cout << fixed << setprecision( 2 );
    cout << "\nRight answer's frequency is " << frequency << endl;
    cout << fixed << setprecision( 0 );
    cout << "\nRight answer's frequency in percent is " << frequency * 100 << "%" << endl;
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << "." << (PROJECT_VERSION_MINOR) << ".";
    cout << (PROJECT_VERSION_PATCH) << endl;
    return 0;
}
