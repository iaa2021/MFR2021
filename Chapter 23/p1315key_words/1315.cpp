#include <iostream>
using std::cout;
using std::endl;
using std::boolalpha;
#include <iso646.h>

int main()
{
    bool a = true;
    bool b = false;
    int c = 2;
    int d = 3;
    cout << boolalpha;
    cout << "Logical operator keywords:\n";
    cout << "a and a " << ( a and a ) << endl;
    cout << "a and b " << ( a and b ) << endl;
    cout << "a or b " << ( a or b ) << endl;
    cout << "a or b " << ( a or b ) << endl;
    cout << " not a " << ( not a ) << endl;
    cout << " not b " << ( not b ) << endl;
    cout << "a not_eq b " << ( a not_eq b ) << endl;
    cout << "Bitwize operator keywords:\n";
    cout << "c bitand d " << ( c bitand d ) << endl;
    cout << "c bitor d " << ( c bitor d ) << endl;
    cout << "c xor d " << ( c xor d ) << endl;
    cout << "compl c " << ( compl c ) << endl;
    cout << "c end_eq d " << ( c and_eq d ) << endl;
    cout << "c or_eq d " << ( c or_eq d ) << endl;
    cout << "c xor_eq d " << ( c xor_eq d ) << endl;
    return 0;
}