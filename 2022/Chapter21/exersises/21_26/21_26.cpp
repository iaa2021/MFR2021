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
    string line; const char * chLine; int j = 0;
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
    vector <const char *> array[ alphabet1.size() ];//array of vectors for letter's entry count
    const char *ptrArray[ alphabet1.size() ];//array for const char * pointers
    for (size_t i = 0; i < alphabet1.size() ; i++)
    {
        ptrArray[ i ] = strchr( chLine, alphabet1.at(i) );
        j = 0;
        if( ptrArray[ i ] != 0 )
        {
            array[ i ].push_back( ptrArray[ i ] );
            while ( array[i][j] != 0 )
            {
                if( strchr( array[i][j] + 1, alphabet1.at(i) ) != 0 )
                {
                    array[i].push_back( strchr( array[i][j] + 1, alphabet1.at(i) ) );
                    j++;
                }
                else
                break;
            }
        }
    }
    cout << "\nThe letter's frequency is:\n";
    for (size_t i = 0; i < alphabet1.size() ; i++)
    cout << alphabet1.at(i) << "   " << static_cast<int>(array[ i ].size()) << endl;
    return 0;
}