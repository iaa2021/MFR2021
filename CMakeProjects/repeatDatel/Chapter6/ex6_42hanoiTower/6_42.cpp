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
    void popTale()
    {
        st.pop(); number--;
    }
    void pushTale( int top )
    {
        st.push( top ); number++;
    }
};
peg *hanoi( peg *, int, int );
int main()
{
    peg array[ 3 ];
    array[ 0 ].name = 'a'; array[ 0 ].number = 0;// array[0] - primary store
    array[ 1 ].name = 'b'; array[ 1 ].number = 0;// array[1] - temporary store
    array[ 2 ].name = 'c'; array[ 2 ].number = 0;// array[2] - ultimate store
    int n, odd;//tale's number, odd number
    cout << "Input tail's number: ";
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        array[ 0 ].st.push( i );
        array[ 0 ].number++;
    }
    if ( n % 2 == 0 )
        odd = 1;
    else
    odd = 0;

    cout << "\nOdd is " << odd << endl;
    hanoi( array, odd, n );
    cout << "Tail's number in a stack after one move is: " << array[ 0 ].number << endl;
    cout << "in b stask is: " << array[ 1 ].number << endl;
    cout << "in c stask is: " << array[ 2 ].number << endl;
    cout << "general number is " << n << endl;
    return 0;
}
peg *hanoi( peg *array, int odd, int number )
{
    if( array[ 1 ].st.empty() || array[ 2 ].st.empty() )
    {
        if( ( array[ 0 ].st.top() + odd ) % 2 == 0 )
        {
            array[ 1 ].pushTale( array[ 0 ].st.top() ); array[ 0 ].popTale(); 
            cout << array[ 0 ].name << " -> " << array[ 1 ].name << endl; number--;
        }
        else if( ( array[ 0 ].st.top() + odd ) % 2 != 0  )
        {
            array[ 2 ].pushTale( array[ 0 ].st.top() ); array[ 0 ].popTale(); 
            cout << array[ 0 ].name << " -> " << array[ 2 ].name << endl; number--;
        }
    }
    else return hanoi( array, odd, array[ 0 ].number-- );
}
