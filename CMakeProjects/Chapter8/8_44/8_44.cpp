#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
using std::to_string;
#include <sstream>
using std::ostringstream;
#include <vector>
using std::vector;
#include <iomanip>
using std::setprecision;
#include "config.h"
void outputCheck( double );
int main()
{
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    vector <double> v;
    double number;
    cout << "Input salary's sum, -1 to end input:\n";
    cin >> number;
    while( number != -1 )
    {
        v.push_back( number );
        cout << "Input salary's sum, -1 to end input:\n";
        cin >> number;
    }
    cout << "\nDisplaying sum in protected view:\n";
    for (size_t i = 0; i < v.size(); i++)
    {
        outputCheck( v.at( i ) );
    }
    
    return 0;
}
void outputCheck( double n )
{
    ostringstream s;
    string text;
    s << n;
    text = s.str();
    if( text.size() < 9 )
    {
        size_t segm = 9 - text.size();
        for (size_t i = 0; i < segm; i++)
        {
            cout << '*';
        }
        cout << text << endl;
    }
    else
    cout << text << endl;
}