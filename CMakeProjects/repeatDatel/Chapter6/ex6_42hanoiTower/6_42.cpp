#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <stack>
using std::stack;
struct peg
{
    stack <int> st;
    int number;
    char name;
};
void hanoi( peg, peg, peg, int );
int main()
{
    peg a; a.name = 'a'; a.number = 0;// a - primary store
    peg b; b.name = 'b'; b.number = 0;//b - temporary store
    peg c; c.name = 'c'; c.number = 0;//c - ultimate store
    int n, odd;//tale's number, odd number
    cout << "Input tail's number: ";
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        a.st.push( i );
        a.number++;
    }
    if ( n % 2 == 0 )
    {
        odd = 1;
    }
    else
    odd = 0;
    hanoi( a, b, c, odd );
    cout << "Tail's number in a stack after one move is: " << a.number << endl;
    cout << "in b stask is: " << b.number << endl;
    cout << "in c stask is: " << c.number << endl;
    return 0;
}
void hanoi( peg a, peg b, peg c, int odd )
{
    if( b.st.empty() && c.st.empty() )
    {
        if( ( a.st.top() + odd ) % 2 == 0 )
        {
            b.st.push( a.st.top() ); a.st.pop(); a.number--; b.number++;
            cout << a.name << " -> " << b.name << endl;
        }
        else
        {
            c.st.push( a.st.top() ); a.st.pop(); a.number--; c.number++;
            cout << a.name << " -> " << c.name << endl;
        }
    }
}
