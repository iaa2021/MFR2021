#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
#include <vector>
using std::vector;
#include <algorithm>
using std::fill;
using std::fill_n;
using std::generate;
using std::generate_n;
#include <iterator>
using std::ostream_iterator;
#include <ctime>
using std::time;
#include <cstdlib>
using std::rand;
using std::srand;
#include <string>
using std::string;
#include <cctype>
using std::toupper;
#include "config.h"
char rundomLetter();
char rundomLetter1();
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "Sample on page 1257, algorithm STL fill, fill_n, ";
    cout << "generate, generate_n.\n";
    ostream_iterator<char> it( cout, ", " );
    vector<char> chars( 10 );
    fill( chars.begin(), chars.end(), 'b' );
    cout << "Vector chars after fill by \'b\' character:\n";
    for( auto &it1 : chars )
    { cout << it1 << ", "; }
    fill_n( chars.begin(), 5, 'A' );
    cout << "\nVector chars after fill_n it's first 5 elements";
    cout << " by \'A\' character:\n";
    copy( chars.begin(), chars.end(), it );
    cout << endl;
    srand( time( 0 ) );
    cout << "\nVector chars after generate it's content by random letters:\n";
    generate( chars.begin(), chars.end(), rundomLetter );
    copy( chars.begin(), chars.end(), it );
    cout << "\nVector chars after generate_n it's first 5 elements";
    cout << " by random letters:\n";
    generate_n( chars.begin(), 5, rundomLetter1 );
    copy( chars.begin(), chars.end(), it );
    cout << endl;
    return 0;
}
char rundomLetter()
{
    string alphabeth = "abcdefghijklmnopqrstuvwxyz";
    return alphabeth.at( rand()%( alphabeth.size() ) );
}
char rundomLetter1()
{
    string alphabeth = "abcdefghijklmnopqrstuvwxyz";
    return toupper( alphabeth.at( rand()%( alphabeth.size() ) ) );
}