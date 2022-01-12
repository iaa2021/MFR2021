#include <iostream>
using std::cout;
using std::endl;
#include <vector>
using std::vector;
#include <iterator>
using std::reverse_iterator;
#include "ListNode.h"
template <class LT>
class List
{
private:
    ListNode<LT> *first;
    ListNode<LT> *last;
public:
    List();
    ~List();
    bool isEmpty()const;
    void insertAtFront( const LT & );
    void insertAtBack( const LT & );
    bool removeFromFront();
    bool removeFromBack();
    void print() const;
    void reverse();
};
template <class LT>
List<LT>::List()
    : first(0), last(0)
{
}
template <class LT>
List<LT>::~List()
{
    if( isEmpty() )
    cout << "The list is empty.\n";
    else
    {
        ListNode<LT> *current = first;
        ListNode<LT> *temp;
        while( current != 0 )
        {
            temp = current;
            current = current -> next;
            delete temp;
        }
    }
}
template <class LT>
bool List<LT>::isEmpty() const
{
    return first == 0;
}
template <class LT>
void List<LT>::insertAtFront( const LT&value )
{
    ListNode<LT> *ptr = new ListNode<LT>( value );
    if( isEmpty() )
    first = last = ptr;
    else
    {
        ptr ->next = first;
        first = ptr;
    }
}
template <class LT>
void List<LT>::insertAtBack( const LT&value )
{
    ListNode<LT> *ptr = new ListNode<LT>( value );
    if( isEmpty() )
    first = last = ptr;
    else
    {
      last ->next = ptr;
      last = ptr;
    }
}
template <class LT>
bool List<LT>::removeFromFront()
{
    if( isEmpty() )
    return false;
    else
    {
        ListNode<LT> *ptr = first;
        if( first == last )
        first = last = 0;
        else
        first = first ->next;

        delete ptr;
        return true;
    }
}
template <class LT>
bool List<LT>::removeFromBack()
{
    if( isEmpty() )
    return false;
    else
    {
        ListNode<LT> *temp = last;
        if( first == last )
        first = last = 0;
       
        else
        {
            ListNode<LT> *ptr = first;
            while ( ptr ->next != last )
            ptr = ptr ->next;

            last = ptr;
            last ->next = 0;
        }
        delete temp;
        return true;
    }
}
template <class LT>
void List<LT>::print() const
{
    if( isEmpty() )
    cout << "The list is empty.\n";
    else
    {
        cout << "The list is:\n";
        ListNode<LT> *ptr = first;
        while ( ptr != 0 )
        {
            cout << ptr ->data << ", ";
            ptr = ptr ->next;
        }
    }
    cout << endl;
}
template <class LT>
void List<LT>::reverse()
{
    if( isEmpty() )
    cout << "The list is empty.\n";
    else
    {
        vector<LT>v;
        
        cout << "The reverse list is:\n";
        ListNode<LT> *ptr = first;
        while ( ptr != 0 ) 
        {
            v.push_back( ptr ->data );
            ptr = ptr ->next;
        }
        for( auto iterator = v.rbegin(); iterator != v.rend(); ++iterator )
        cout << *iterator << ", ";
        
    }
    cout << endl;
    
}