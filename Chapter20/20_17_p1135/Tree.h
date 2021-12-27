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
    
    void  insertNodeHelper( TreeNode<NT> **, const NT & );
    void  insertStringHelper( TreeNode<string> **, const string & );
    void  preOrderHelper( TreeNode<NT> *ptr ) const;
    void  inOrderHelper( TreeNode<NT> *ptr ) const;
    void  postOrderHelper( TreeNode<NT> *ptr ) const;
public:
    Tree();
    TreeNode<NT> *root;
    void preOrderTraversal() const;
    void insertNode( const NT & );
    void insertStringNode( const string & );
    void inOrderTraversal() const;
    void postOrderTraversal() const;
    TreeNode<NT> *getNewNode( const NT & );
    bool isEmpty();
    void depth( const Tree &, map<NT, int>, TreeNode<NT> *ptr );
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
void Tree<NT>::depth( const Tree &object, map<NT, int> mapThing, TreeNode<NT> *ptr )
{
    int level = 0;
    TreeNode<NT> *temp = object.root;
    if( ptr != 0 )
    {
        if( mapThing.empty() )
        {
            mapThing.insert( pair<NT, int>( ptr ->data, level ) );
            if( ptr ->left != 0 || ptr ->right != 0 )
            level++;
            if( ptr ->left != 0 )
            {
                temp = ptr ->left;
                mapThing.insert( pair<NT, int>( temp ->data, level ) );
            }
            if( ptr ->right != 0 )
            {
                temp = ptr ->right;
                mapThing.insert( pair<NT, int>( temp ->data, level ) );
            }
        }
        else
        {
            for( auto pair:mapThing )
            {
                if( pair.first == ptr ->data )
                level = pair.second + 1;
            }
            if( ptr ->left != 0 )
            {
                temp = ptr ->left;
                mapThing.insert( pair<NT, int>( temp ->data, level ) );
            }
            if( ptr ->right != 0 )
            {
                temp = ptr ->right;
                mapThing.insert( pair<NT, int>( temp ->data, level ) );
            }
        }
        depth( object, mapThing, ptr ->left );
        depth( object, mapThing, ptr ->right );
    }
    for( int i = 0; i <= level; i++ )
    {
       for( auto pair:mapThing )
       {
           if( pair.second == i )
           cout << pair.first << "  " << pair.second << endl;
       } 
    }
}

#endif
