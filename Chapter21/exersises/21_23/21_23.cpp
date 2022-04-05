#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <cstring>
using std::strstr;
#include <string>
using std::string;
int main()
{
    string line;
    string line1;
    cout << "Input content:\n";
    getline( cin, line );
    cout << "Input part of text, you'd like to find.\n";
    getline( cin, line1 );
    size_t n = line.size();
    cout << "Line's size is " << n << endl;
    const char *chLine = line.c_str();
    const char *chLine1 = line1.c_str();
    cout << "The result of first search is:\n" << strstr( chLine, chLine1 ) << endl;
    const char *searchPtr = strstr( chLine, chLine1 );
    cout << "The result of second search is:\n" << strstr( searchPtr + 1, chLine1 ) << endl;

    return 0;
}