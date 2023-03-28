#include <iostream>
using std::cout;
using std::cin;
using std::endl;
struct ListNode
{
    public:
    ListNode( int d )
    : data( d ), next( 0 ){}
    int getData() const
    {
        return data;
    }
    ListNode *next;
    int data;
};
struct List
{
    public:
    List()
    : last( 0 ), first( 0 ){}
    void insert( int d )
    {
        ListNode *ptr = new ListNode( d );
        if( first == 0 )
        first = last = ptr;
        else
        {
            last ->next = ptr;
            last = ptr;
        }
    }
    void concatenate( List & l )
    {
        ListNode *current = l.first;
        while ( current != 0 )
        {
            this ->insert( current -> data );
            current = current ->next;
        }
    }
    void print() const
    {
        ListNode *current = first;
        while ( current != 0 )
        {
            cout << current ->data << ", ";
            current = current ->next;
        }
        
    }
    private:
    ListNode *last;
    ListNode *first;
};
int main()
{
    List l1, l2;
    for (int i = 0; i < 6; i++)
    {
        l1.insert( i );
    }
    cout << "List1 is: ";
    l1.print();
    for (int i = 6; i < 11; i++)
    {
        l2.insert( i );
    }
    cout << "\nList2 is: ";
    l2.print();
    l1.concatenate( l2 );
    cout << "\nAfter concatenation list1 is:\n";
    l1.print();
    return 0;
}