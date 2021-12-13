#ifndef TREE_H
#define TREE_H
#include <iostream>
#include <string>
#include <cstring>
#include <typeinfo>
#include <map>
using namespace std;
#include "TreeNode.h"
template <class NT>
class Tree
{
private:
    TreeNode<NT> *root;
    void  insertNodeHelper( TreeNode<NT> **, const NT & );
    void  insertStringHelper( TreeNode<string> **, const string & );
    void  preOrderHelper( TreeNode<NT> *ptr ) const;
    void  inOrderHelper( TreeNode<NT> *ptr ) const;
    void  postOrderHelper( TreeNode<NT> *ptr ) const;
    void  depthHelper( TreeNode<NT> *, map <TreeNode<NT> *, int >  );
public:
    Tree();
    void preOrderTraversal() const;
    void insertNode( const NT & );
    void insertStringNode( const string & );
    void inOrderTraversal() const;
    void postOrderTraversal() const;
    TreeNode<NT> *getNewNode( const NT & );
    bool isEmpty();
    int depth( const Tree & );
};
template <class NT>
Tree<NT>::Tree()
    : root(0)
{
}
template <class NT>
void Tree<NT>::insertNode( const NT &value)
{
    insertNodeHelper( &root, value );
}
template <class NT>
void Tree<NT>::insertStringNode( const string &value)
{
    insertStringHelper( &root, value );
}
template <class NT>
void Tree<NT>::insertNodeHelper( TreeNode<NT> **ptr, const NT &value )
{
    if( *ptr == 0 )
    *ptr = new TreeNode<NT>( value );
    else
    {
        if( (*ptr) -> data < value )
        insertNodeHelper( &( (*ptr) -> right ), value );
        else 
        {
            if( (*ptr) -> data  > value )
            insertNodeHelper( &( ( *ptr) -> left ), value  );
            else
            cout << "This is duplicate value.\n";
        }
    }
}
template <class NT>
void Tree<NT>::insertStringHelper( TreeNode<string> **ptr, const string &value )
{
    if( *ptr == 0 )
    *ptr = new TreeNode<string>( value );
    else
    {
        if( ( (*ptr) -> data ).compare( value ) < 0 )
        insertNodeHelper( &( (*ptr) -> right ), value );
        else 
            insertNodeHelper( &( ( *ptr) -> left ), value  );
    }
}
template <class NT>
void Tree<NT>::preOrderTraversal() const
{
    cout << "\nThe data type is " << typeid(root ->data).name() << endl;
    preOrderHelper( root );
}
template <class NT>
void Tree<NT>::preOrderHelper( TreeNode<NT> *ptr ) const
{
    if( ptr != 0 )
    {
    cout << ptr ->data << ' ';
    preOrderHelper( ptr ->left );
    preOrderHelper( ptr ->right );
    }
}
template <class NT>
void Tree<NT>::inOrderTraversal() const
{
    inOrderHelper( root );
}
template <class NT>
void Tree<NT>::inOrderHelper( TreeNode<NT> *ptr ) const
{
    if( ptr != 0 )
    {
    inOrderHelper( ptr ->left );
    cout << ptr ->data << ' ';
    inOrderHelper( ptr ->right );
    }
}
template <class NT>
void Tree<NT>::postOrderTraversal() const
{
    postOrderHelper( root );
}
template <class NT>
void Tree<NT>::postOrderHelper( TreeNode<NT> *ptr ) const
{
    if( ptr != 0 )
    {
    postOrderHelper( ptr ->left );
    postOrderHelper( ptr ->right );
    cout << ptr ->data << ' ';
    }
}
template <class NT>
TreeNode<NT> *Tree<NT>::getNewNode(const NT &value)
{
    return new TreeNode<NT>( value );
}
template <class NT>
bool Tree<NT>::isEmpty()
{
    return root == 0;
}
template <class NT>
int Tree<NT>::depth( const Tree &object )
{
    int level = 0;
    map<Tree<NT> *, int> node; 
    if( isEmpty() )
    cout << "\nThe tree is empty.\n";
    else
    {
        TreeNode<NT> *temp = new TreeNode<NT>( object.root -> data );
         temp = object.root;
        if( node.empty() )
        {
            level ++;
            node.insert( pair<TreeNode<NT> *, int > ( temp, level ));
            if( temp ->left != 0 || temp ->right != 0 )
            {
                level++;
                if( temp ->left != 0 )
                node.insert( pair<TreeNode<NT> *, int>( temp ->left, level ));
                if( temp ->right != 0 )
                node.insert( pair< TreeNode<NT> *, int >( temp ->right, level ) );
            }
        }
        else
        {
            depthHelper( temp ->left );
            if( temp != 0 )
            for( auto pair : node )
            {
                if( temp == pair.first )
                level = pair.second;
            }

        }
         
    }
    return level;
}
template <class NT>
void Tree<NT>::depthHelper( TreeNode<NT> *ptr, map <TreeNode<NT> *, int >mapName )
{
    int level = 0;
    if( ptr != 0 )
    for( auto pair : mapName )
            {
                if( ptr == pair.first )
                level = pair.second;
            }
    mapName.insert( <TreeNode<NT> *, int>( ptr, level ) );
    level++;

}
#endif
