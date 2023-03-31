#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <cstdlib>
using std::rand;
using std::srand;
#include <ctime>
using std::time;
#include <stack>
using std::stack;
struct node
{
    int value;
    node *next;
    node( int v )
    : next( 0 ), value( v ){}
    
};
struct List
{
    friend struct node;
    public:
    List()
    : first( 0 ), last( 0 ){}
    void insertAtBack( int data )
    {
        node *ptr = new node( data );
        if( isEmpty() )
        first = last = ptr;
        else
        {
            last ->next = ptr;
            last = ptr;
        }
    }
    void insertAtFront( int data )
    {
        node *ptr = new node( data );
        ptr ->next = first;
        first = ptr;
    }
    bool isEmpty() const
    {
        return first == 0;
    }
    void print() const
    {
        node *ptr = first;
        while( ptr ->next != 0 )
        {
            cout << ptr ->value << ' ';
            ptr = ptr ->next;
        }
        cout << endl;
    }
    void printListBackward() const
    {
        stack<node *> stackNode;
        node *ptr = first;
        while ( ptr ->next != 0 )
        {
            stackNode.push( ptr );
            ptr = ptr ->next;
        }
        while ( !stackNode.empty() )
        {
            cout << stackNode.top() ->value << ' ';
            stackNode.pop();
        }
        cout << endl;
    }
    node *recursiveSearch( int number, node *ptr )
    {
        if( ptr ->value == number )
        return ptr;
        else
        return recursiveSearch( number, ptr ->next );
    }
    node *first;
    node *last;
};
int main()
{
    srand( time( 0 ) );
    List list1; int number;
    for (size_t i = 0; i < 10; i++)
    {
        number = rand()%100 + 1;
        list1.insertAtBack( number );
    }
    cout << "List1, created with insertAtBack is:\n";
    list1.print();
    cout << "List1, printed with printListBackward is:\n";
    list1.printListBackward();
    cout << "Exersize 20.21, recursive search in linked list.\n";
    cout << "Input number, you'd like to find in list:\n";
    cin >> number;
    cout << "\nResult is: " << (list1.recursiveSearch( number, list1.first )) ->value << endl;
    cout << endl;
    return 0;
}