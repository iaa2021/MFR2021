#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
#include <cstring>
using std::strchr;
#include <vector>
using std::vector;
#include <cctype>
using std::tolower;
#include <algorithm>
using std::transform;
#include <map>
using std::map;
int main()
{
    string line; const char * chLine; 
    const char *alphabet = "abcdefghijklmnopqrstuvwxyz";
    string alphabet1 = "abcdefghijklmnopqrstuvwxyz";
    cout << "Input text for character's seach.\n";
    getline( cin, line );
    string line1;//string in lower case
    for( size_t i = 0; i < line.size(); i++ )
    line1 += tolower( line.at(i) );

    chLine = line1.c_str();
    cout << "\nThe size of chLine is " << strlen( chLine ) << endl;
    cout << "\nThe text in lower case is:\n";
    cout << line1 << endl;
    const char *array[ 2 ][ strlen( alphabet ) ];// 0  - const char *ptr
   
        
    map< const char *, int > result;// 0 - letter, 1 - number of it's entry in the text
    return 0;
}