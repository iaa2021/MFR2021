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
using std::string;
#include <queue>
using std::queue;
using std::priority_queue;
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
    cout << "\nSample on page 1254, queue STL container:\n";
    queue<int> intQ;
    cout << "Pushing elements into queue:\n";
    for (int i = 0; i < 10; i++)
    {
        intQ.push( i * 3 );
    }
    cout << "Popping elements from queue:\n";
    for (int i = 0; i < 10; i++)
    {
        cout << intQ.front() << '\t';
        intQ.pop();
    }
    cout << "\nSample on page 1255, priority_queue STL container:\n";
    priority_queue<int> pQueue;
    srand( time( 0 ) );
    cout << "Pushing elements into queue:\n";
    for (int i = 0; i < 10; i++)
    {
        pQueue.push( rand()%50 + 1 );
    }
    cout << "Popping elements from priority_queue:\n";
    while ( !pQueue.empty() )
    {
        cout << pQueue.top() << ", ";
        pQueue.pop();
    }
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