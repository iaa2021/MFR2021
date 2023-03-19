#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
#include <cctype>
using std::toupper;
using std::tolower;
int main()
{
    string text;
    cout << "Input text:\n";
    getline( cin, text );
    cout << "Text in reverse order is:\n";
    string::const_reverse_iterator it = text.rbegin();
    while ( it != text.rend() )
    {
        cout << *it;
        it++;
    }
    cout << "\nOutput text with modified cases:\n";
    for (size_t i = 0; i < text.size(); i++)
    {
        if( text.at( i ) == toupper( text.at( i )) )
        putchar( tolower( text.at( i ) ) );
        else
        putchar( toupper( text.at( i ) ) );
    }
    
    return 0;
}
