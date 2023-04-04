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
    void insertNode( const NODETYPE & );
    void preOrderTraversal() const;
    void inOrderTraversal() const;
    void postOrderTraversal() const;
    int levelCount(map<treeNode<NODETYPE> *, int>, int);
    static void printVersion()
    {
        cout << "Library version is " << (PROJECT_VERSION_MAJOR) << '.';
        cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    }
private:
    treeNode<NODETYPE> *root;
    void insertNodeHelper( treeNode<NODETYPE> **, const NODETYPE & );
    void preOrderHelper( treeNode<NODETYPE> * ) const;
    void inOrderHelper( treeNode<NODETYPE> * ) const;
    void postOrderHelper( treeNode<NODETYPE> * ) const;
    void levelCountHelper( treeNode<NODETYPE> *, map<treeNode<NODETYPE> *, int>, int );
};
template< class NODETYPE >
tree<NODETYPE>::tree()
    : root( 0 ){}

template< class NODETYPE >
void tree<NODETYPE>::insertNode( const NODETYPE &value )
{
    insertNodeHelper( &root, value );
}
template< class NODETYPE >
void tree<NODETYPE>::insertNodeHelper( treeNode<NODETYPE> **ptr, const NODETYPE &value )
{ 
    if( *ptr == 0 )
    *ptr = new treeNode<NODETYPE>( value );
    else
    {
        if( ( (*ptr) ->data ) > value )
        insertNodeHelper( &( (*ptr) -> left ), value );
        else
        {
            if( ( (*ptr) ->data ) < value )
            insertNodeHelper( &( (*ptr) -> right ), value );
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
        cout << ptr ->data << ' ';
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
template< class NODETYPE >
int tree<NODETYPE>::levelCount( map<treeNode<NODETYPE> *, int>treeMap, int count )
{
    levelCountHelper( root, treeMap, count );
    for( auto pair : treeMap )
    {
        if( count < pair.second )
        count = pair.second;
    }
    return count;
}
template< class NODETYPE >
void tree<NODETYPE>::levelCountHelper( treeNode<NODETYPE> *ptr, map<treeNode<NODETYPE> *, int>treeMap, int count )
{
    
    if( ptr != 0 )
    {
        map<treeNode<NODETYPE> *, int>::iterator it = treeMap.find( ptr );
        if( it == treeMap.end() );
        {treeMap.insert( make_pair( ptr, count ) );}
        count++;
        
        levelCountHelper( ptr ->left, treeMap, count );
        levelCountHelper( ptr ->right, treeMap, count );
    }
}
#endif