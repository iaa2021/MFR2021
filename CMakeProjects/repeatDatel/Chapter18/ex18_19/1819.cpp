#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
int main()
{
    string text; text.reserve( 200 );
    cout << "Input text:\n";
    getline( cin, text );
    cout << "Text's length is: " << text.size() << endl;
    size_t ln = text.size() / 2;
    text.insert( ln, "*****" );
    cout << text << endl;
    cout << "Exersize 18.20.\n";
    size_t position = text.find( "by" );
    while ( position != string::npos )
    {
        text.erase( position, 2 );
        position = text.find( "by", position + 1 );
    }
    position = text.find( "BY" );
    while ( position != string::npos )
    {
        text.erase( position, 2 );
        position = text.find( "BY", position + 1 );
    }
    cout << "New text is:\n" << text << endl;
    return 0;
}