#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int seconds( int, int, int );
void quotient( int );
#include <vector>
using std::vector;
#include <cmath>
using std::sqrt;
#include "config.h"
int main()
{
    cout << "\nProject version is " << (PROJECT_VERSION_MAJOR) << "." << (PROJECT_VERSION_MINOR) << ".";
    cout << (PROJECT_VERSION_PATCH) << endl;
    int h, h1, m, m1, s, s1, quot;
    cout << "Input two moments of time in order to fimd quotient among them.\n";
    cout << "First moment, hour, minutes, seconds:\n";
    cin >> h >> m >> s;
    cout << "\nSo, the first moment is: " << h << " hours, " << m << " minutes, " << s << " seconds.\n";
    cout << "Second moment, hour, minutes, seconds:\n";
    cin >> h1 >> m1 >> s1;
    cout << "\nSo, the first moment is: " << h1 << " hours, " << m1 << " minutes, " << s1 << " seconds.\n";
    quot = seconds( h, m, s ) - seconds( h1, m1, s1 );
    if( quot < 0 )
    quot *= -1;
    quotient( quot ); cout << endl;
    cout << "Now calculating exersise 6.29\n";
    vector <int> v; int sum = 0, board;
    cout << "Input interval, you'd like to look for perfect integers: ";
    cin >> board;
    for (int i = 2; i < board; i++)
    {
        for (int j = 1; j <= i/2; j++)
        {
            if( i % j == 0 )
            v.push_back( j );
            sum += j;
        }
        if( i == sum )
        {
            cout << i << " = ";
            for (size_t  k = 0; k < v.size(); k++)
            {
               if( k == v.size() - 1 )
               cout << v.at( k ) << ";\n";
               else 
               cout << v.at( k ) << " + ";
            }
            cout << endl;
        } 
        v.clear();
        sum = 0;
    }
    if( v.empty() )
    cout << "\nVector is empty.\n";
    cout << "Now calculating exersise 6.30\n";
    int a = 0;
    cout << "Input interval for odd numbers search.\n";
    cin >> board;
    for (int i = 3; i <= board; i++)
    {
        for (int j = 2; j <= i / 2; j++)
        {
            if( i % j == 0 )
            a++;
        }
        if( a == 0 )
        v.push_back( i );

        a = 0;
    }
    cout << "There are " << v.size() << " odd numbers in interval from " << "3 to " << board << endl;
    for (size_t i = 0; i < v.size(); i++)
    {
        cout << v.at( i ) << (( ( i + 1 ) % 10 ) ? ' ' : '\n' ); 
    }
    cout << "\nProject version is " << (PROJECT_VERSION_MAJOR) << "." << (PROJECT_VERSION_MINOR) << ".";
    cout << (PROJECT_VERSION_PATCH) << endl;
    return 0;
}
int seconds( int h, int m, int s )
{
    return h * 3600 + m * 60 + s;
}
void quotient( int s )
{
    cout << "\nThe time quotient is: ";
    int h, m, s1;
    h = s / 3600;
    m = ( s - h * 3600 ) / 60;
    s1 = s - h * 3600 - m * 60;
    cout << h << " hours, " << m << " minutes, " << s1 << " seconds.\n";
}
