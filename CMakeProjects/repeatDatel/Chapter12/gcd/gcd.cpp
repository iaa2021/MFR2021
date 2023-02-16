#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int gcd( int, int );
int main()
{
    int a, b;
    cout << "Input integers for search gcd:\n";
    cin >> a >> b;
    cout << "\nGcd is " << gcd(a, b) << endl;
    return 0;
}
int gcd( int a, int b )
{
    if( b == 0 )
    return a;
    else
    return gcd( b, a%b );
}