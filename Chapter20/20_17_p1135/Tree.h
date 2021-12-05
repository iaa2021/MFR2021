#ifndef TREE_H
#define TREE_H
#include <iostream>
using namespace std;
#include "TreeNode.h"
template <class NT>
class Tree
{
private:
    TreeNode<NT> *root;
    void  insertNodeHelper( TreeNode<NT> **, const NT );
public:
    Tree();
    ~Tree();
    void insertNode( const NT & );
};
template <class NT>
Tree<NT>::Tree()
    : root(0)
{
}
template <class NT>
Tree<NT>::~Tree()
{
}
template <class NT>
void Tree<NT>::insertNode( const NT &value)
{
    insertNodeHelper( &root, value );
}

