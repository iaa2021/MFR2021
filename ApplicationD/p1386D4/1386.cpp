#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#define PI 3.14159
#define VOLUME(x) ( PI * ( 4 / 3 ) * ( x ) * ( x ) * ( x )  )
#define SUM( x, y ) ( x + y )
int main()
{
    cout << "List of sphere's volumes with radius from 1 till 10:\n";
    for (size_t i = 1; i < 11; i++)
    {
        cout << "radius: " << i << "sm, volume: ";
        cout << VOLUME( i ) << "sm2 or " << VOLUME( i ) / 10000 << "m2" << endl;
    }
    int a, b;
    cout << "\nInput two integers for summing: ";
    cin >> a >> b;
    cout << "\nSum of " << a << " and " << b << " is " << SUM( a, b ) << endl;
    return 0;
}