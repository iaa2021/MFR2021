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
        for (int i = number; i >= 1; i--)
        {
            a.st.push( i );
        }
        a.number = number;
    }
    if( number % 2 == 0 )
    odd = 1;
    else 
    odd = 0;
    cout << "odd is: " << odd << endl;
    khanoi( number, odd, a, b, c );
    return 0;
}
void khanoi( int number, int odd, peg a, peg b, peg c )
{
            if( ( a.st.top() + odd ) % 2 == 0 && ( b.st.empty() || b.st.top() > a.st.top() ) )
            {
                b.st.push( a.st.top() ); a.st.pop(); b.number++; a.number--; number--;
                cout << a.name << " -> " << b.name << endl;

            }
            else if( ( a.st.top() + odd ) % 2 != 0 && ( c.st.empty() || c.st.top() > a.st.top() ) )
            {
                c.st.push( a.st.top() ); c.number++; a.st.pop(); a.number--; number--;
                cout << a.name << " -> " << c.name << endl;
                
            }
            else if( a.st.top() > b.st.top() && a.st.top() > c.st.top() )
            {
                if( odd == 1 )
                {
                    c.st.push( b.st.top() ); c.number++; b.st.pop(); b.number--; 
                    cout << b.name << " -> " << c.name << endl;
                }
                else if( odd == 0 )
                {
                    b.st.push( c.st.top() ); c.st.pop(); b.number++; c.number--; 
                    cout << c.name << " -> " << b.name << endl;
                }
            }
           
           number += b.number;
   khanoi( number, odd, a, b, c );
}