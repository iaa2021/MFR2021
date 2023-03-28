#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
#include <cstdlib>
using std::srand;
using std::rand;
#include <ctime>
using std::time;
#include <iomanip>
using std::setw;
using std::setprecision;
struct ListNode
{
    friend class List;
    public:
    ListNode( int d )
    : data( d ), next( 0 ){}
    int getData() const
    {
        return data;
    }
    private:
    ListNode *next;
    int data;
};
struct List
{
    friend class ListNode;
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
    int sum()
    {
        ListNode *current = first; int value = 0;
        while ( current != 0 )
        {
            value += current ->data;
            current = current ->next;
        }
        return value;
    }
    double average()
    {
        double value; int count = 0;
        ListNode *current = first; 
        while ( current != 0 )
        {
            count++;
            current = current ->next;
        }
        value = static_cast<double>( sum() ) / static_cast<double>( count );
        return value;
    }
    private:
    ListNode *last;
    ListNode *first;
};
int main()
{
    srand( time( 0 ) );
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
    cout << "\nExersise 20.8\n";
    List l3; int c;
    for (size_t i = 0; i < 25; i++)
    {
        c = rand()%100 + 1;
        l3.insert( c );
    }
    cout << "\nList3 is: ";
    l3.print();
    cout << "\nSum of list3's elements is: " << l3.sum() << endl;
    cout << fixed << setprecision( 2 );
    cout << "\nAverage of list3's elements is: " << l3.average() << endl;
    return 0;
}