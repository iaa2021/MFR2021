#include<iostream>
using std::cout;
#include <cctype>
using std::islower;
using std::isupper;
using std::tolower;
using std::toupper;
int main()
{
    cout << "According to isupper " << ( isupper( 'D' )?"D is an ": "D is not an " ) << "uppercase letter.\n";
    return 0;
}