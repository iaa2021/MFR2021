#include <iostream>
using std ::cout;
using std ::cin;
using std ::endl;
bool multiply( unsigned );
int main()
{
    unsigned number, mask = 1;
    for ( int i = 0; i < 10; i++, mask <<= 1)
    {
        cout << mask << endl;
    }
    cout << "\nEnter an integer between 1 and 32000:\n";
    cin >> number;
    if ( multiply( number ) )
    {
        cout << number << " is multiply of X.\n";
    }
    else
    cout << number << " is not a multiply of X.\n";
    //number = 1024 & it's multiply of X, because of 1024 = 00000100 00000000 in binary size
    return 0;
}
bool multiply( unsigned value )
{
    bool mult = true;
    for ( int i = 0, mask = 1; i < 10; i++, mask <<= 1)
    {
        if ( ( value & mask ) != 0 )
        {
            mult = false;
            break;
        }
    }
    return mult;
}