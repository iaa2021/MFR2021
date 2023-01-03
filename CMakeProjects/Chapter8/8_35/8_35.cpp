#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
#include <cstring>
using std::strtok;
using std::strcpy;
#include <vector>
using std::vector;
#include <iterator>
using std::ostream_iterator;
#include <algorithm>
using std::copy;
int main()
{
    string text, text1, strNumber; vector< string >v; int code; long number;
    cout << "Input phone number in format (XXX)XXX-XXXX\n";
    getline(cin, text);
    char *ptr = new char[ text.size() ];
    strcpy( ptr, text.data() );
    char *sPtr = strtok( ptr, " ,.()-" );
    while ( sPtr != NULL )
    {
        v.push_back( sPtr );
        sPtr = strtok( NULL, " ,.()-" );
    }
    code = stoi( v.at( 0 ) );
    strNumber.append( v.at( 1 ) );
    strNumber.append( v.at( 2 ) );
    number = stol( strNumber );
    delete [] ptr; delete sPtr; v.clear();
    cout << "\nPhone number is: " << code << "  " << number << endl;
    cout << "Now completing ex8.36.\n";
    cout << "Input text:\n";
    getline( cin, text1 );
    char *ptr1 = new char[ text1.size() ];
    strcpy( ptr1, text1.data() );
    cout << "\nPtr1 is:\n";
    for (size_t i = 0; i < text1.size(); i++)
    {
        cout << ptr1[ i ];
    }
    char *sPtr1 = strtok( ptr1, " ,." );
    while( sPtr1 != NULL )
    {
        v.push_back( sPtr1 );
        sPtr1 = strtok( NULL, " ,." );
    }
    ostream_iterator<string> output( cout, " " );
    cout << "\nVector in reverse order is:";
    for (size_t i = v.size() - 1; i >= 0; i--)
    {
        cout << v.at( i ) << " ";
    }
    
    return 0;
}