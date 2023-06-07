#include "config.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::boolalpha;
using std::fixed;
#include <string>
using std::string;
#include <cstring>
using std::strstr;
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "Exersise 21.23, search in string:\n";
    string text, seekText;
    cout << "text's capacity is: " << text.capacity() << endl;
    text.reserve( 500 );
    cout << "\ntext's capacity after increasing is: " << text.capacity() << endl;
    cout << "Input text for search in:\n";
    getline( cin, text );
    cout << "Input seeking part for search in text:\n";
    getline( cin, seekText );
    cout << "\nText is:\n" << text << endl;
    cout << "Seeking part for search in text is:\n" << seekText << endl;
    const char *text1 = text.c_str();
    cout << "\nText's pointer is:\n" << text1 << endl;
    const char *seekText1 = seekText.c_str();
    cout << "\nPart's pointer is:\n" << seekText1 << endl;
    cout << "The remainder of text beginning with first occurence of " << seekText1 << " is:\n";
    cout << strstr( text1, seekText1 ) << endl;
    cout << "Exersise 21.24, finding out quantity of occurense our seeking part:\n";
    const char *result = text1;
    int number = 0;
    while ( (result = strstr( result, seekText1 )) != nullptr )
    {
        cout << "Seeking part was found at " << (result - text1) << " index.\n";
        number++; 
        result += strlen( seekText1 );
    }
    cout << "\nCommon occurence's number is " << number << endl;
    
    return 0;
}