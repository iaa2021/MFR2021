#ifndef TREE_H
#define TREE_H
#include "TreeNode.h"
#include <iostream>
using std::cout;
using std::endl;
#include <new>
#include "config.h"
template < class NODETYPE >
class Tree
{
public:
    Tree();
    void insertNode( const NODETYPE & );
    void preOrderTraversal() const;
    void postOrderTraversal() const;
    void inOrderTraversal() const;
    void printVersion() const
    {
        cout << "Library version is: " << (PROJECT_VERSION_MAJOR) << '.';
        cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    }
private:
    TreeNode <NODETYPE> *root;
    void insertNodeHelper( TreeNode<NODETYPE>**, const NODETYPE & );
    void preOrderHelper( TreeNode<NODETYPE> * ) const;
    void postOrderHelper( TreeNode<NODETYPE> * ) const;
    void inOrderHelper( TreeNode<NODETYPE> * ) const;
};
template < class NODETYPE >
Tree<NODETYPE>::Tree()
{
    root = 0;
}
template < class NODETYPE >
void Tree<NODETYPE>::insertNode( const NODETYPE &value )
{
    insertNodeHelper( &root, value );
}
template < class NODETYPE >
void Tree<NODETYPE>::insertNodeHelper(TreeNode<NODETYPE> **ptr, const NODETYPE &value)
{
    if( *ptr == 0 )
    *ptr = new TreeNode<NODETYPE>( value );
    else
    {
        if( value < (*ptr) -> data )
        insertNodeHelper( &( (*ptr) -> left ), value );
        else
        {
            if( value > (*ptr) -> data )
            insertNodeHelper( &( (*ptr) -> right ), value );
            else
            cout << endl << value << " is duplicate.\n";
        }
        
    }
}
template < class NODETYPE >
void Tree<NODETYPE>::preOrderTraversal() const
{
    preOrderHelper( root );
}
template < class NODETYPE >
void Tree<NODETYPE>::preOrderHelper( TreeNode<NODETYPE> *ptr ) const
//traversal from root
{
    if ( ptr != 0 )
    {
        cout << ptr ->data << ' ';
        preOrderHelper( ptr ->left );
        preOrderHelper( ptr ->right);
    } 
}
template < class NODETYPE >
void Tree<NODETYPE>::inOrderTraversal() const
{
    inOrderHelper( root );
}
template < class NODETYPE >
void Tree<NODETYPE>::inOrderHelper( TreeNode<NODETYPE> *ptr ) const
{
    if( ptr != 0 )
    {
        inOrderHelper( ptr -> left );
        cout << ptr ->data << ' ';
        inOrderHelper( ptr -> right );
    }
}
template < class NODETYPE >
void Tree<NODETYPE>::postOrderTraversal() const
{
    postOrderHelper( root );
}
template < class NODETYPE >
void Tree<NODETYPE>::postOrderHelper( TreeNode<NODETYPE> *ptr ) const
{
    inOrderHelper( ptr -> left );
    inOrderHelper( ptr -> right );
    cout << ptr ->data << ' ';
}

#endif