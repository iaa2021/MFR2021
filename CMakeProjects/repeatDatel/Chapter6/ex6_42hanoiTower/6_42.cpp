#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <stack>
using std::stack;
void hanoi( stack <int> *, int );
int main()
{
    stack< int > array[ 3 ];// array[ 0 ] - primary store, array[ 1 ] - temporary store, 
    //array[ 2 ] - ultimate store;
    int n;
    cout << "Input tail's number: ";
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        array[ 1 ].push( i );
    }
    cout << "\narray[ 1 ].top() = " << array[ 1 ].top() << endl;
    cout << "\narray[ 1 ] contains :\n";
    while ( !array[1].empty() )
    {
        cout << array[ 1 ].top() << endl;
        array[ 1 ].pop();
    }
    
    return 0;
}
void hanoi( stack <int> *ptr, int number )
{
    if( number == 1 && ptr[ 2 ].empty() )
    {
        ptr[ 2 ].push( ptr[ 0 ].top() );
        ptr[ 0 ].pop();
        number--;
        cout << " 1 -> 3 " << " (" << ptr[ 2 ].top() << ") " << endl;
    }
    else if( number > 1 && ptr[ 1 ].empty() )
    {
        ptr[ 1 ].push( ptr[ 0 ].top() );
        ptr[ 0 ].pop();
        number--;
        cout << " 1 -> 2 " << "( " << ptr[ 1 ].top() << endl;
    }

}