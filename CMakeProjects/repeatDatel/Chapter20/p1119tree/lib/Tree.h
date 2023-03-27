#ifndef TREE_H
#define TREE_H
#include "TreeNode.h"
#include <iostream>
using std::cout;
using std::endl;
#include <new>
template < class NODETYPE >
class Tree
{
public:
    Tree();
    void insertNode( const NODETYPE & );
    void preOrderTraversal() const;
    void postOrderTraversal() const;
    void inOrderTraversal() const;
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
        if( value > (*ptr) -> data )
        insertNodeHelper( &( (*ptr) -> left ), value );
        else
        {
            if( value < (*ptr) -> data )
            insertNodeHelper( &( (*ptr) -> right ), value );
            else
            cout << value << " is uplicate.\n";
        }
        
    }
    
}
#endif