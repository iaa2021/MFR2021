#include <iostream>
using std::cout;
using std::cin;
using std::endl;
unsigned long fibo( unsigned long );
unsigned long factorial( unsigned long );
#include "config.h"
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << "." << (PROJECT_VERSION_MINOR) << ".";
    cout << (PROJECT_VERSION_PATCH) << endl;
    int number;
    cout << "Input fibo's number, -1 to end input: ";
    cin >> number;
    while ( number != -1 )
    {
        cout << "Fibonacci's " << number << " is " << fibo( number ) << endl;
        cout << "Input fibo's number, -1 to end input: ";
        cin >> number;
    }
    cout << "\nIput the range of fibo's row: ";
    cin >> number;
    cout << endl;
    for (int i = 0; i <= number; i++)
    {
        cout << "Fibo of " << i << " is " << fibo( i ) << endl;
    }
    cout << "Input factorial's number, -1 to end input: ";
    cin >> number;
    while ( number != -1 )
    {
        cout << "Factorial of " << number << " is " << factorial( number ) << endl;
        cout << "Input factorial's number, -1 to end input: ";
        cin >> number;
    }
    cout << "\nIput the range of factorial's row: ";
    cin >> number;
    for (int i = 0; i <= number; i++)
    {
        cout << "Factorial of " << i << " is " << factorial( i ) << endl;
    }
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << "." << (PROJECT_VERSION_MINOR) << ".";
    cout << (PROJECT_VERSION_PATCH) << endl;
    return 0;
}
unsigned long fibo( unsigned long number )
{
    if( number == 0 || number == 1 )
    return number;
    else
    return fibo( number - 1 ) + fibo( number - 2 );
}
unsigned long factorial( unsigned long number )
{
    if(( number == 0 ) || ( number == 1 ))
    return 1;
    else
    return number * factorial( number - 1 );
}