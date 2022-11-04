#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <vector>
using std::vector;
int gcd( int, int );
#include "config.h"
int main()
{
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << "." << (PROJECT_VERSION_MINOR) << ".";
    cout << (PROJECT_VERSION_PATCH) << endl;
    int number, a, b, c, d, revNmb;
    cout << "Input four-digit number: ";
    cin >> number;
    a = number / 1000;
    b = ( number % 1000 ) / 100;
    c = ( number - a * 1000 - b * 100 ) / 10;
    d = ( number - a * 1000 - b * 100 ) % 10;
    cout << "Number " << number << " consists of such integers: " << a << ", " << b << ", " << c << ", " << d << endl;
    revNmb = d * 1000 + c * 100 + b * 10 + a;
    cout << "Reverse number to " << number << " is " << revNmb << endl;
    cout << "Now calculating ex6.32, input two integers in order to find their largest common deleter:\n";
    cin >> a >> b;
    cout << "\nMaximum common deleter of " << a << " and " << b << " is " << gcd( a, b ) << endl;
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << "." << (PROJECT_VERSION_MINOR) << ".";
    cout << (PROJECT_VERSION_PATCH) << endl;
    return 0;
}
int gcd( int a, int b )
{
    int maxDel = 0;
    vector<int>aV, bV, cV;
    for (int i = 2; i <= a / 2; i++)
    {
        if( a % i == 0 )
        aV.push_back( i );
    }
    for (int i = 2; i <= b / 2; i++)
    {
        if( b % i == 0 )
        bV.push_back( i );
    }
    for (size_t i = 0; i < aV.size(); i++)
    {
        for (size_t j = 0; j < bV.size(); j++)
        {
            if( aV.at( i ) == bV.at( j ) )
            cV.push_back( aV.at( i ) );
        }
    }
    cout << "\nCommon deleters of " << a << " and " << b << " are: " << endl;
    for (size_t i = 0; i < cV.size(); i++)
    {
        cout << cV.at( i ) << ", ";
        if( maxDel < cV.at( i ) )
        maxDel = cV.at( i );
    }
    cout << endl;
    cout << "Maximum is ";
    return maxDel;
}