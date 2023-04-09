#ifndef TREE_H
#define TREE_H
#include "treeNode.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "config1.h"
#include <cmath>
using std::pow;
#include <iomanip>
using std::setw;
#include <queue>
using std::queue;
template< class NODETYPE >
class tree
{
public:
    tree();
    void insertNode( const NODETYPE &, int );
    void preOrderTraversal() const;
    void inOrderTraversal() const;
    void postOrderTraversal() const;
    void depth();
    void depthArray();
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
template< class NODETYPE >
void tree<NODETYPE>::depth() 
{
    queue<treeNode<NODETYPE> *> treeQueue;
    int currentLevel = 1;
    treeQueue.push( root );// insert root
    while ( !treeQueue.empty() )
    {
        if( treeQueue.front() ->parent == 0 )//root's output
        cout << setw( 32/( 2 * treeQueue.front() -> level ) ) << treeQueue.front() ->data;
        else if( treeQueue.front() ->level != currentLevel )// next level's output
        {
            currentLevel = treeQueue.front() ->level;
            cout << '\n' << setw( 32/( 2 * treeQueue.front() -> level ) ) << treeQueue.front() -> data << ' ';
        }
        else
        cout << setw( 32/( 2 * treeQueue.front() -> level ) ) << treeQueue.front() -> data << ' ';
        if( treeQueue.front() ->left != 0 )
        treeQueue.push( treeQueue.front() ->left );//insert left child
        if( treeQueue.front() ->right != 0 )
        treeQueue.push( treeQueue.front() ->right );//insert right child

        treeQueue.pop();
    }
}
template< class NODETYPE >
void tree<NODETYPE>::depthArray() 
{
    queue<treeNode<NODETYPE> *> treeQueue;
    int maxLevel = 1;
    treeQueue.push( root );// insert root
    while ( !treeQueue.empty() )//find how much levels tree has
    {
        if( maxLevel < treeQueue.front() ->level )
        maxLevel = treeQueue.front() ->level;

        if( treeQueue.front() ->left != 0 )
        treeQueue.push( treeQueue.front() ->left );//insert left child
        if( treeQueue.front() ->right != 0 )
        treeQueue.push( treeQueue.front() ->right );//insert right child

        treeQueue.pop();
    }
    cout << "\nTree has " << maxLevel << " levels.\n";
    int arraySize = maxLevel + 2;
    treeNode<NODETYPE> ***array = new treeNode<NODETYPE> **[ arraySize ];//
    for ( int i = 0; i < arraySize; i++)
    {
        array[ i ] = new treeNode<NODETYPE> *[ arraySize ];
    }
    for (int i = 0; i < arraySize; i++)
    {
        for ( int j = 0; j < arraySize; j++)
        {
            array[ i ][ j ] = 0;
        }
    }
    
    treeQueue.push( root );// insert root
    while ( !treeQueue.empty() )//find how much levels tree has
    {
        if( treeQueue.front() ->parent == 0 )// insert root in array
        array[ static_cast<int>((treeQueue.front() ->level) - 1) ][ static_cast<int>(maxLevel / ( pow( 2, treeQueue.front() ->level ) )) ];
        else
        {
            for ( int i = 0; i < arraySize; i++)
            {
                if( array[ (treeQueue.front() ->level) - 2 ][ i ] == treeQueue.front() ->parent )
                {
                    if( treeQueue.front() == treeQueue.front() ->parent ->left )
                    array[ static_cast<int>((treeQueue.front() ->level) - 1 )][ i - static_cast<int>(maxLevel/( pow( 2, treeQueue.front() ->level) ) )];
                    else if( treeQueue.front() == treeQueue.front() ->parent ->right )
                    array[ static_cast<int>((treeQueue.front() ->level) - 1) ][ i + static_cast<int>(maxLevel/( pow( 2, treeQueue.front() ->level ) ))];
                }
            }
        }
        
        if( treeQueue.front() ->left != 0 )
        treeQueue.push( treeQueue.front() ->left );//insert left child
        if( treeQueue.front() ->right != 0 )
        treeQueue.push( treeQueue.front() ->right );//insert right child

        treeQueue.pop();
    }
    for ( int i = 0; i < arraySize; i++)
    {
        for ( int j = 0; j < arraySize; j++)
        {
            if( array[ i ][ j ] ->data > 0 )
            cout << array[ i ][ j ] ->data;
        }
        cout << endl;
    }
    
}
#endif