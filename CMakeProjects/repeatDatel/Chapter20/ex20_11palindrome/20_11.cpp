#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <stack>
using std::stack;
#include <string>
using std::string;
#include <cctype>
using std::tolower;
int main()
{
    stack <char> checkStack; int check = 0;
    string text;
    text.resize( 1500 );
    cout << "Input text:\n";
    getline( cin, text );
    string::iterator it = text.begin();
    while( it != text.end() )
    {
        if( *it != ' ' && *it != ',' && *it != '.' && *it != '!' && *it != '\'' )
        {
            checkStack.push( tolower(*it) );
        }
        it++;
    }
    it = text.begin();
    while( it != text.end() )
    {
        if( *it != ' ' && *it != ',' && *it != '.' && *it != '!' && *it != '\'' )
        {
            if ( (char)tolower( *it ) != checkStack.top() )
            {
                check++;
            }
            checkStack.pop();
            it++;
        }
        else
        it++;
    }
    if( check == 0 )
    cout << "Text is palindrom.\n";
    else
    cout << "Text is not palindrom.\n";
    return 0;
}