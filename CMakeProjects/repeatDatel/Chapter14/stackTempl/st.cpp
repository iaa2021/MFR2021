#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <stack>
using std::stack;
#include <vector>
using std::vector;
template <class T>
void pushStack( stack< T >, T  );
template <class A>
void printStack( stack< A > );
int main()
{
    stack< double >st;
    vector <double> v; double d;
    cout << "Input values in vector, -1 to end input:\n";
    while ( d != -1 )
    {
        cin >> d;
        st.push( d );
    }
    cout << "\nStack's size is: " << st.size() << endl;
     while( !st.empty() )
    {
        cout << st.top() << ", ";
        st.pop();
    }
    
    return 0;
}
template <class T>
void pushStack( stack< T > st, T value )
{
    st.push( value );
}
template <class A>
void printStack( stack< A > st )
{
    while( !st.empty() )
    {
        cout << st.top() << ", ";
        st.pop();
    }
}