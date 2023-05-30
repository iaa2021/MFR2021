#include "config.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::boolalpha;
#include <iomanip>
using std::setw;
#include <cctype>
using std::tolower;
using std::toupper;
int main()
{
    char array[ 100 ];
    cout << "Input characters into array:\n";
    cin.getline( array, 200, '\n' );
    cout << "\nArray is:\n" << array << endl;
    cout << "\nArray in upper case is:\n";
    for (size_t i = 0; i < sizeof(array)/sizeof(char); i++)
    {
        cout << static_cast<char>( toupper( array[ i ] ) );
    }
    cout << "\nArray in lower case is:\n";
    for (size_t i = 0; i < sizeof(array)/sizeof(char); i++)
    {
        cout << static_cast<char>( tolower( array[ i ] ) );
    }
    cout << endl;
    return 0;
}