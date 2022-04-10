#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <cstdlib>
using std::atoi;
#include <string>
using std::string;
int main()
{
    string a;
    cout << "Input string:\n";
    getline( cin, a );
    cout << "This symbols in digital view are:\n";
    size_t b = a.length();
    for( size_t i = 0; i < b; i++ )
    {
        cout <<  a.at(i) << " is " << static_cast<int>( a.at( i ) ) << endl;
    }
    cout << "\nAn integers for converting into ASCII symbols:\n";
    for (size_t i = 0; i < 256; i++)
    {
        cout << i << " is " << static_cast<char>( i ) << ( i + 1 % 8 == 0 ? '\n' : '\t' );
    }
    cout << endl;
    return 0;
}