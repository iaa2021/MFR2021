#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <stack>
using std::stack;
#include <cmath>
using std::pow;
#include <string>
using std::string;
struct peg
{
    stack <int>st;
    string name;
    int number;
};
void khanoi( int, peg, peg, peg );

int main()
{
    peg a, b, c;
    a.name = "a"; b.name = "b"; c.name = "c";
    a.number = 0; b.number = 0; c.number = 0;
    int number;
    cout << "Input number: ";
    cin >> number;
    if( number > 0 )
    {
        for (int i = 1; i <= number; i++)
        {
            a.st.push( i );
        }
        a.number = number;
    }
    khanoi( number, a, b, c );
    return 0;
}
void khanoi( int number, peg a, peg b, peg c )
{
    number = a.number;
    if( number == 1 )
    {
        b.st.push( a.st.top() );
        a.st.pop();
        a.number--; b.number++;
        cout << a.name << " -> " << b.name << endl;
    }
    while( number > 1 )
    {
        if( number % 2 == 0 )
        c.st.push( a.st.top() );
        a.st.pop();
        a.number--; c.number++;
        cout << a.name << " -> " << c.name << endl;
        b.st.push( a.st.top() );
        a.st.pop();
        a.number--; b.number++;
        cout << a.name << " -> " << b.name << endl;
    }
}