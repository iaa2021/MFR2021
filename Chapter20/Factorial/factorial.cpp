
#include <iostream>
using namespace std;
unsigned long int factorial( unsigned long int );
int i = 1;//recursion quantity
int main()
{
    int n;
    cout << "Enter n!: \n";
    cin >> n;
    cout << n <<"! = " << factorial(n) << endl;
    cout << "Result was counted in " << i << " steps." << endl;
    return 0;
}
unsigned long int factorial( unsigned long int f )
{
    
    unsigned long int result;
    if( f == 1 || f == 0 )
    return 1;
    else
    {
    i++;
    result = f * factorial( f - 1 );
    return result;
    }
    
}