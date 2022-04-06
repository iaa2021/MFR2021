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
    const char *chLine = line.c_str();
    const char *chLine1 = line1.c_str();
    const char *searchPtr = strstr( chLine, chLine1 );
    cout << "The result of first search is:\n" << searchPtr << endl;
    cout << "The result of second search is:\n" << strstr( searchPtr +1, chLine1 ) << endl;
    cout << "\nLine's size is:\n" << n << endl;
    cout << "Now we count the entry of desired fragment:\n";
    int i = 0, count = 0;
    const char *sPtr = new const char();
    sPtr = strstr( searchPtr +1, chLine1 );
    cout << "The result of third search is:\n" << strstr( sPtr + 1, chLine1 ) << endl;
    

    return 0;
}