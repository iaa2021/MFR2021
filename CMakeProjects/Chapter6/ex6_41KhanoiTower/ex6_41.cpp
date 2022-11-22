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
void khanoi( int, int, peg, peg, peg );

int main()
{
    peg a, b, c;
    a.name = "a"; b.name = "b"; c.name = "c";
    a.number = 0; b.number = 0; c.number = 0;
    int number, odd;
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
    if( number % 2 == 0 )
    odd = 1;
    else 
    odd = 0;
    khanoi( number, odd, a, b, c );
    return 0;
}
void khanoi( int number, int odd, peg a, peg b, peg c )
{
    while( a.number == 0 && b.number == 0 && c.number == number )
    {
    if( number == 1 && c.st.empty() )
    {
        c.st.push( a.st.top() );
        a.st.pop();
        a.number--; c.number++;
        cout << a.name << " -> " << c.name << endl;
    }
   else
   {
    if( b.st.empty() && c.st.empty() )//first move
    {
        if( a.st.top() % 2 == 0 )
        {
            b.st.push( a.st.top() );
            a.st.pop();
            a.number--; b.number++;
            cout << a.name << " -> " << b.name << endl;
        }
        else
        {
            c.st.push( a.st.top() );
            a.st.pop();
            a.number--; c.number++;
            cout << a.name << " -> " << c.name << endl;
        }
    }
    else if( c.st.empty() && !b.st.empty() )//second move
    {
            c.st.push( a.st.top() );
            a.st.pop();
            a.number--; c.number++;
            cout << a.name << " -> " << c.name << endl;
    }
    else if( !c.st.empty() && b.st.empty() )
    {
            b.st.push( a.st.top() );
            a.st.pop();
            a.number--; b.number++;
            cout << a.name << " -> " << b.name << endl;
    }
    else if ( !c.st.empty() && !b.st.empty() )
    {
        if( b.st.top() < c.st.top() )
        {
            c.st.push( b.st.top() );
            b.st.pop();
            b.number--; c.number++;
            cout << a.name << " -> " << c.name << endl;
        }
    }
    }
    }
}