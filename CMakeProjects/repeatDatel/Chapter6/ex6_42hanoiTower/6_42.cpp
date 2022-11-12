#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <stack>
using std::stack;

int main()
{
    stack< int > array[ 3 ];// array[ 1 ] - primary store, array[ 2 ] - temporary store, 
    //array[ 3 ] - ultimate store;
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
