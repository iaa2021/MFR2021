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
    cout << " Stack a contains " << a.number << endl;
    cout << " Stack b contains " << b.number << endl;
    cout << " Stack c contains " << c.number << endl;
    return 0;
}
void khanoi( int number, int odd, peg a, peg b, peg c )
{
            if( c.st.empty() && b.st.empty() )//move 1
            {
                if( ( a.st.top() + odd ) % 2 == 0 )
                {
                    b.st.push( a.st.top() ); a.st.pop(); a.number--; b.number++; number--;
                    cout << a.name << " -> " << b.name << endl;
                    c.st.push( a.st.top() ); a.st.pop(); a.number--; c.number++; number--;//2 move
                    cout << a.name << " -> " << c.name << endl;
                    c.st.push( b.st.top() ); b.st.pop(); b.number--; c.number++;//3 move
                    cout << b.name << " -> " << c.name << endl;
                }
                else
                {
                    c.st.push( a.st.top() ); a.st.pop(); a.number--; c.number++; number--;
                    cout << a.name << " -> " << c.name << endl;
                    b.st.push( a.st.top() ); a.st.pop(); a.number--; b.number++; number--;//2 move
                    cout << a.name << " -> " << b.name << endl;
                    b.st.push( c.st.top() ); c.st.pop(); c.number--; b.number++;//3 move
                    cout << c.name << " -> " << b.name << endl;
                }
            }
            else if( ( a.st.top() + odd ) % 2 != 0 )
            {
                if( c.st.empty() || c.st.top() > a.st.top() )
                {
                    c.st.push( a.st.top() ); a.st.pop(); a.number--; c.number++; number--;
                    cout << a.name << " -> " << c.name << endl;
                    
                }
                
            }
            else if( ( ( a.st.top() + odd ) ) % 2 == 0 )
            {
                if( b.st.empty() || b.st.top() > a.st.top() )
                {
                    b.st.push( a.st.top() ); a.st.pop(); a.number--; b.number++; number--;
                    cout << a.name << " -> " << b.name << endl;
                   
                }
                 if( b.st.top() == 1 )
                    {
                        a.st.push( b.st.top() ); b.st.pop(); b.number--; a.number++; number++;//3 move
                        cout << b.name << " -> " << a.name << endl;
                    }
            }

            else if( b.number > 0 )
            number += b.number;
           
    khanoi( number, odd, a, b, c );
}
