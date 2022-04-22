#include <iostream>
using std::cout;
using std::endl;
#include <stack>
using std::stack;
#include <vector>
using std::vector;
#include <list>
using std::list;
#include <cstdlib>
using std::rand;
using std::srand;
#include <ctime>
using std::time;
template < class T >
void pushElements( T & );
template < class T >
void popElements( T & );
int main()
{
    srand( time( 0 ) );
    stack < int > intDequeStack;
    stack < int, vector < int > > intVectorStack;
    stack < int, list < int > > intListStack;
    cout << "Pushing elements into intDequeStack:\n";
    pushElements( intDequeStack );
    cout << "Pushing elements into intVectorStack:\n";
    pushElements( intVectorStack );
    cout << "Pushing elements into intListStack:\n";
    pushElements( intListStack );
    cout << endl;
    cout << "Poping elements from intDequeStack:\n";
    popElements( intDequeStack );
    cout << "Poping elements into intVectorStack:\n";
    popElements( intVectorStack );
    cout << "Poping elements into intListStack:\n";
    popElements( intListStack );
    return 0;
}
template < class T >
void pushElements( T & tRef)
{
    for (size_t i = 0; i < 10; i++)
    {
        tRef.push( rand()%100 + 1 );
        cout << tRef.top() << ' ';
    }
    cout << endl;
}
template < class T >
void popElements( T & tRef )
{
    while ( !tRef.empty() )
    {
        cout << tRef.top() << ' ';
        tRef.pop();
    }
    cout << endl;
}
