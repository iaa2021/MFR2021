#include "config.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::boolalpha;
using std::fixed;
#include <iomanip>
using std::setw;
using std::setprecision;
#include <cctype>
using std::tolower;
using std::toupper;
#include <string>
using std::string;
#include <cstdlib>
using std::atoi;
using std::atof;
#include <vector>
using std::vector;
#include <cstring>
using std::strcpy;
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "Exersise 21.21:\n";
    string line;
    vector <char *>v; int sum = 0;
    cout << "\nInput 4 strings, converting C string into an integer:\n";
    for (int i = 0; i < 4; i++)
    {
        cout << "\nInput " << ( i + 1 ) << " string:\n";
        getline( cin , line );
        int lSize = line.size() + 1;
        char *ptr = new char ( lSize );
        strcpy( ptr, line.c_str() );
        v.push_back( ptr );
    }
    for (int i = 0; i < 4; i++)
    {
        int number = atoi( v.at( i ) );
        sum += number;
    }
    cout << "\nSum of integers is: " << sum << endl;
    cout << "Exersise 21.22, converting C string into double:\n";
    v.clear(); double dNumber, dSum = 0.0;
    for (int i = 0; i < 4; i++)
    {
        cout << "\nInput " << ( i + 1 ) << " string:\n";
        getline( cin , line );
        int lSize = line.size() + 1;
        char *ptr = new char ( lSize );
        strcpy( ptr, line.c_str() );
        v.push_back( ptr );
    }
    for (int i = 0; i < 4; i++)
    {
        dNumber = atof( v.at( i ) );
        dSum += dNumber;
    }
    cout << fixed << setprecision( 2 );
    cout << "\nSum of doubles is: " << dSum << endl;
    return 0;
}