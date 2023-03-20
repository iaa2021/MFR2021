#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::right;
#include <string>
using std::string;
#include <iomanip>
using std::setw;
int main()
{
    string alphabet( "abcdefghijklnmopqrstuvwxyz{" );
    for (size_t i = 0; i < 14; i++)
    {
        for (size_t k = 0; k < 14 - ( i + 1); k++)
        {
            cout << " ";
        }
        for (size_t j = i; j < ( i * 2 ) + 1; j++)
        {
            cout << alphabet.at( j );
        }
        if( i > 0 )
        {
            for (size_t l = ( i * 2 ) - 1 ; l >= i; l-- )
            {
                cout << alphabet.at( l );
            }
        }
        cout << endl;
    }
    return 0;
}