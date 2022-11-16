#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <stack>
using std::stack;
#include <cmath>
using std::pow;
int operationNumber( int );
int main()
{
    stack<int>a; //primary stack
    stack<int>b;// temporary stack
    stack<int>c;//ultimate stack
    int aCount = 0; int bCount = 0; int cCount = 0; int number;
    cout << "Input plate's number: ";
    cin >> number;
    for (int i = 0; i < number; i++)
    {
        a.push( i );
        aCount++;
    }
    unsigned long n = operationNumber( number );
    cout << "Operation's number is " << n << endl;
    return 0;
}
int operationNumber( int number )
{
    if( number == 1 )
    return 1;
    else
    return operationNumber( number - 1 ) + pow( 2, number - 1 );
}