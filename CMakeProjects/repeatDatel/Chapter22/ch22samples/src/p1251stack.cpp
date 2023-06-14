#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
#include <vector>
using std::vector;
#include <iomanip>
using std::setw;
using std::setprecision;
#include <list>
using std::list;
#include <iterator>
using std::ostream_iterator;
#include <cstdlib>
using std::rand;
using std::srand;
#include <algorithm>
using std::copy;
#include <ctime>
using std::time;
#include <stack>
using std::stack;
#include "config.h"
#include <string>
using std:: string;
template<class T> void pushStack( T &, int );
template<class T> void popStack( T & );
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "Sample on page 1251, stack STL container:\n";
    stack<int> dStack;
    stack <int, vector<int>> vStack;
    stack <int, list<int> > lStask;
    cout << "Pushing elements into deque stack:\n";
    pushStack( dStack, 10 );
    cout << "\nPushing elements into vector stack:\n";
    pushStack( vStack, 15 );
    cout << "\nPushing elements into list stack:\n";
    pushStack( lStask, 17 );
    cout << "\nPopping elements from deque stack:\n";
    popStack( dStack );
    cout << "\nPopping elements from vector stack:\n";
    popStack( vStack );
    cout << "\nPopping elements from list stack:\n";
    popStack( lStask );
    cout << endl;
    return 0;
}
template<class T> void pushStack( T &tRef, int value )
{
    for (int i = 0; i < value; i++)
    {
        tRef.push( i + 1 );
        cout << tRef.top() << ", ";
    } 
}
template<class T> void popStack( T &tRef )
{
    while ( !tRef.empty() )
    {
        cout << tRef.top() << ", ";
        tRef.pop();
    }
    
}