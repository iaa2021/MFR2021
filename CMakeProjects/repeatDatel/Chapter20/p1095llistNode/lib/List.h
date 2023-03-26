#pragma once
#include "ListNode.h"
#include <iostream>
using std::cout;
using std::endl;
#include "config.h"
template < class NodeType >
class List
{
public:
    List();
    ~List();
    void insertAtFront( const NodeType & );
    void insertAtBack( const NodeType & );
    bool removeFromFront( NodeType & );
    bool removeFromBack();
    bool isEmpty() const;
    void print() const;
    void printVersion();
private:
    ListNode<NodeType> *first;
    ListNode<NodeType> *last;
    ListNode<NodeType> *getNewNode( const NodeType & );
};
template < class NodeType >
List<NodeType>::List()
    : first( 0 ), last( 0 )
{}
template < class NodeType >
List<NodeType>::~List()
{
    if( !isEmpty() )
    {
        cout << "Destroing nodes:\n";
        ListNode<NodeType> *currentPtr = first;
        ListNode<NodeType> *tempPtr;
        while( currentPtr != 0 )
        {
            tempPtr = currentPtr;
            cout << tempPtr -> data << endl;
            currentPtr = currentPtr -> nextPtr;
            delete tempPtr;
        }
    }
    cout << "All nodes destroyed\n\n";
}
template < class NodeType >
void List<NodeType>::insertAtFront( const NodeType &value )
{
    ListNode<NodeType> *newPtr = getNewNode( value );
    if ( isEmpty() )
    first = last = newPtr;
    else
    {
        newPtr ->nextPtr = first;
        first = newPtr;
    }
}
template < class NodeType >
void List<NodeType>::insertAtBack( const NodeType &value )
{
    ListNode<NodeType> *newPtr = getNewNode( value );
    if ( isEmpty() )
    first = last = newPtr;
    else
    {
        last -> nextPtr = newPtr;
        last = newPtr;
    }
}
template < class NodeType >
bool List<NodeType>::removeFromFront( NodeType &value )
{
    if ( isEmpty() )
    return false;
    else
    {
        ListNode< NodeType > *temp = first;
        if( first == last )
        first = last = 0;
        else
        first = first -> nextPtr;

        value = temp -> data;
        delete temp;
        return true;
    }
}
template < class NodeType >
bool List<NodeType>::removeFromBack()
{
    if ( isEmpty() )
    return false;
    else
    {
        ListNode< NodeType > *temp = last;
        
        if ( first = last )
        first = last = 0;
        else
        {
            ListNode< NodeType > *current = first;
            while ( current -> nextPtr != last )
                {
                    current = current -> nextPtr;
                }
            last = current;
            current -> nextPtr = 0;
        }  
        delete temp;
        return true;
    }
}
template < class NodeType >
ListNode<NodeType> *List<NodeType>::getNewNode( const NodeType &value )
{
    return new ListNode<NodeType>( value );
}
template < class NodeType >
bool List<NodeType>::isEmpty() const
{
    return first == 0;
}
template < class NodeType >
void List<NodeType>::print() const
{
    if ( isEmpty() )
    {
        cout << "\nList is empty.\n";
        return;
    }
    else
    {
        ListNode<NodeType> *current = first;
        cout << "The list is:\n";
        while ( current != 0 )
        {
            cout << current -> data << ", ";
            current = current -> nextPtr;
        }
        cout << endl;
    }
}
template< class NodeType >
void List<NodeType>::printVersion() 
{
    cout << "\nLibrary's version is " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
}