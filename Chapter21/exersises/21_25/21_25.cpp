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
int main()
{
    string line; char a; int i = 0; const char * chLine; 
    cout << "Input text for character's seach.\n";
    getline( cin, line );
    chLine = line.c_str();
    cout << "Input character for seach.\n";
    cin >> a;
    cout << "First entry of character " << a << " is\n" << strchr( chLine, a ) << endl;
    const char *ptr = strchr( chLine, a );
    vector < const char * > v;
    v.push_back( ptr );
    while ( v[ i ] != 0 )
    {
        v.push_back( strchr( v[ i ] + 1 , a ) );
        i++;
    }
    cout << "\nThe number of desired character's entry is " << v.size() << endl;
    return 0;
}
