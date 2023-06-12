#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <vector>
using std::vector;
#include <iterator>
using std::ostream_iterator;
#include <stdexcept>
#include "config.h"
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "Sample on page 1219, using ostream_iterator:\n";
    vector<int> v; int sum = 0, number; size_t place;
    for (int i = 0; i < 10; i++)
    {
        v.push_back( i + 1 );
    }
    for( auto it : v )
    { cout << it << ", "; }
    ostream_iterator< int > intIt( cout );
    for( auto it : v )
    { sum += it; }
    cout << "\nThe sum of vector's integers is: " << endl;
    *intIt = sum;
    cout << "\nReverse vector's output" << endl;
    vector<int>::const_reverse_iterator constIt = v.rbegin();
    for( constIt; constIt != v.rend(); ++constIt )
    { cout << *constIt << ", "; }
    cout << endl;
    cout << "\nInserting value ";
    cin >> number; cout << "\nin vector to the position "; 
    cin >> place;
    v.insert( v.begin() + place, number );
    cout << "\nNow vector is: ";
    for( auto it : v )
    { cout << it << ", "; }
    cout << endl;
    cout << "Trying to apply to the vector out of range:\n";
    try
    {
        v.at( 999 ) = 777;
    }
    catch( std::out_of_range oR )
    {
        cout << "\nExeption is " << oR.what() << endl;
    }
    return 0;
}