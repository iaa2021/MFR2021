#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include<stack>
using std::stack;
#include <string>
using std::string;
int main()
{
    string text, text1;
    text.resize( 1500);
    cout << "text capasity is " << text.capacity() << endl;
    cout << "text length is " << text.size() << endl;
    cout << "Input text:\n";
    getline( cin, text );
    stack<char> charStack;
    string::iterator it = text.begin();
    while ( it != text.end() )
    {
        charStack.push( *it );
        it++;
    }
    while ( !charStack.empty() )
    {
        text1 += charStack.top();
        charStack.pop();
    }
    cout << "Reverse string is:\n" << text1 << endl;
    cout << "\nExersise 20.11:\n" << endl;
    text.clear();
    cout << "Input text to check if it's palindrom or not:\n";
    getline( cin, text ); int ch = 0;
    cout << "Text is " << text << endl;
    it = text.begin();
    while ( it != text.end() )
    {
        charStack.push( *it );
        it++;
    }
    it = text.begin();
    while ( !charStack.empty() )
    {
        if( charStack.top() != *it )
        { ch++; }

        it++;
        charStack.pop();
    }
    if ( ch == 0 )
    cout << text << " is palindrom.\n";
    else
    cout << text << " is not palindrom.\n";
    return 0;
}