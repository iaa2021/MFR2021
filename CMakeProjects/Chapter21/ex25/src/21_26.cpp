#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <map>
using std::map;
using std::make_pair;
#include <string>
using std::string;
#include <cstring>
using std::strchr;
#include <cctype>
using std::isupper;
using std::tolower;
#include "config.h"
int main()
{
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    string text; text.reserve( 1500 );
    cout << "\ntext's capacity is " << text.capacity() << endl;
    cout << "\nInput text for processing:\n";
    getline( cin, text );
    map<char, int> letters;
    for (size_t i = 0; i < alphabet.size(); i++)
    {
        letters.insert( make_pair(alphabet.at( i ), 0)  );
    }
    for( auto &pair : letters )
    {
        for (size_t i = 0; i < text.size(); i++)
        {
            if( text.at( i ) == tolower(pair.first) )
            pair.second++;
        }
    }
    cout << "\nCommon number of letter's occurence:\n";
    for( auto &pair : letters )
    {
        cout << pair.first << ' ' << pair.second << endl;
    }
    return 0;
}