#ifndef TREE_H
#define TREE_H
#include "treeNode.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "config1.h"
#include <map>
using std::map;
using std::make_pair;
#include <iterator>
using std::iterator;
#include <vector>
using std::vector;
template< class NODETYPE >
class tree
{
public:
    tree();
    void insertNode( const NODETYPE &, int );
    void preOrderTraversal() const;
    void inOrderTraversal() const;
    void postOrderTraversal() const;
    bool isEmpty() const
    {
        return root == 0;
    }
    static void printVersion()
    {
        cout << "Library version is " << (PROJECT_VERSION_MAJOR) << '.';
        cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    }
private:
    treeNode<NODETYPE> *root;
    void insertNodeHelper( treeNode<NODETYPE> **, const NODETYPE &, int, treeNode<NODETYPE> * = 0 );
    void preOrderHelper( treeNode<NODETYPE> * ) const;
    void inOrderHelper( treeNode<NODETYPE> * ) const;
    void postOrderHelper( treeNode<NODETYPE> * ) const;
    
};
template< class NODETYPE >
tree<NODETYPE>::tree()
    : root( 0 ){}

template< class NODETYPE >
void tree<NODETYPE>::insertNode( const NODETYPE &value, int l )
{
    insertNodeHelper( &root, value, l );
}
template< class NODETYPE >
void tree<NODETYPE>::insertNodeHelper( treeNode<NODETYPE> **ptr, const NODETYPE &value,  int l, treeNode<NODETYPE> *parent )
{ 
    if( *ptr == 0 )
    {
        if( this ->isEmpty() )
        *ptr = new treeNode<NODETYPE>( value, 0, l );
        else
        {
            l = parent ->level + 1;
            *ptr = new treeNode<NODETYPE>( value, parent, l );
        }
    }
    else
    {
        if( ( (*ptr) ->data ) > value )
        insertNodeHelper( &( (*ptr) -> left ), value, (*ptr) ->level, (*ptr) );
        else
        {
            if( ( (*ptr) ->data ) < value )
            insertNodeHelper( &( (*ptr) -> right ), value, (*ptr) ->level, (*ptr) );
            else
            cout << "This is duplicate.\n";
        }
    }
}
template< class NODETYPE >
void tree<NODETYPE>::preOrderTraversal() const
{
    preOrderHelper( root );
}
template< class NODETYPE >
void tree<NODETYPE>::preOrderHelper( treeNode<NODETYPE> *ptr ) const
{
    if( ptr != 0 )
    {
        cout << ptr ->data << ' ' << ptr -> level << endl;
        preOrderHelper( ptr ->left );
        preOrderHelper( ptr -> right );
    }
}
template< class NODETYPE >
void tree<NODETYPE>::inOrderTraversal() const
{
    inOrderHelper( root );
}
template< class NODETYPE >
void tree<NODETYPE>::inOrderHelper( treeNode<NODETYPE> *ptr ) const
{
    if( ptr != 0 )
    {
        inOrderHelper( ptr ->left );
        cout << ptr ->data << ' ';
        inOrderHelper( ptr -> right );
    }
}
template< class NODETYPE >
void tree<NODETYPE>::postOrderTraversal() const
{
    postOrderHelper( root );
}
template< class NODETYPE >
void tree<NODETYPE>::postOrderHelper( treeNode<NODETYPE> *ptr ) const
{
    if( ptr != 0 )
    {
        postOrderHelper( ptr ->left );
        postOrderHelper( ptr -> right );
        cout << ptr ->data << ' ';
    }
}
#endif