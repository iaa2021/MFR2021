#include "config.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <cstring>
using std::strchr;
using std::strlen;
#include <string>
using std::string;
int main()
{
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "\nExersise 21.24, function strchr demo:\n";
    string text; text.reserve( 500 );
    cout << "Input text for search in:\n";
    getline( cin, text );
    const char *textPtr = text.c_str(); char c;
    const char *result = textPtr; int number = 0;
    string alphabeth = "abcdefghijklmnopqrstuvwxyz";
    cout << "\nInput letter: "; cin >> c;
       while ( (result = strchr( result, static_cast< int >( c ) ) ) != nullptr )
        { 
            number++;
            result++;
        }
    cout << "\nNumber of " << c << " in text is: " << number << endl;
    return 0;
}