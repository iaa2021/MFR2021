#ifndef TREE_H
#define TREE_H
#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <typeinfo>
#include <map>
#include <vector>
#include <iterator>
using namespace std;
#include "TreeNode.h"
template <class NT>
class Tree
{
private:
    vector <NT> vct;
    map<NT, int>mapObj;
    TreeNode<NT> *root;
    void  insertNodeHelper( TreeNode<NT> **, const NT & );
    void  insertStringHelper( TreeNode<string> **, const string & );
    void  preOrderHelper( TreeNode<NT> *ptr ) const;
    void  inOrderHelper( TreeNode<NT> *ptr ) const;
    void  postOrderHelper( TreeNode<NT> *ptr ) const;
    void  deleteNodeHelper( TreeNode<NT> *, NT );
public:
    Tree();
    void preOrderTraversal() const;
    void insertNode( const NT & );
    void insertStringNode( const string & );
    void inOrderTraversal() const;
    void postOrderTraversal() const;
    TreeNode<NT> *getNewNode( const NT & );
    bool isEmpty();
    void depth( const Tree &, TreeNode<NT> *ptr );
    map<NT, int> getMap() const;
    void levelTraversal( const Tree & ) const;
    TreeNode<NT> *getRoot() const;
    void deleteNode( NT );
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
void Tree<NT>::depth( const Tree &object, TreeNode<NT> *ptr )
{
    int level = 0;
    TreeNode<NT> *temp = object.root;
    if( ptr != 0 )
    {
        if( mapObj.empty() )
        {
            mapObj.insert( pair<NT, int>( ptr ->data, level ) );
            if( ptr ->left != 0 || ptr ->right != 0 )
            level++;
            if( ptr ->left != 0 )
            {
                temp = ptr ->left;
                mapObj.insert( pair<NT, int>( temp->data, level ) );
            }
            if( ptr ->right != 0 )
            {
                temp = ptr ->right;
                mapObj.insert( pair<NT, int>( temp->data, level ) );
            }
        }
        else
        {
            for( auto pair:mapObj )
            {
                if( pair.first == ptr->data )
                level = pair.second + 1;
            }
            if( ptr ->left != 0 )
            {
                temp = ptr ->left;
                mapObj.insert( pair<NT, int>( temp->data, level ) );
            }
            if( ptr ->right != 0 )
            {
                temp = ptr ->right;
                mapObj.insert( pair<NT, int>( temp->data, level ) );
            }
        }
        depth( object, ptr ->left );
        depth( object, ptr ->right );
    }
}
template <class NT>
map<NT, int> Tree<NT>::getMap() const
{
    return mapObj;
}
template <class NT>
void Tree<NT>::levelTraversal( const Tree &object ) const
{
    int maxLevel = 0;
    for( auto pair:mapObj )
    {
        if( pair.second > maxLevel )
        maxLevel = pair.second;
    }
    cout << "Object has " << maxLevel + 1 << " levels.\n";
    for( int i = 0; i <= maxLevel; i++ )
    {
        for( auto pair:mapObj )
        {
            if( pair.second == i )
            cout << setw( maxLevel ) << pair.first << "  " <<  pair.second << "  ";
        }
        cout << endl;
    }
}
template <class NT>
TreeNode<NT> * Tree<NT>::getRoot() const
{
    return root;
}
template <class NT>
void Tree<NT>::deleteNode( NT value )
{
    deleteNodeHelper( root, value );
}
template <class NT>
void Tree<NT>::deleteNodeHelper( TreeNode<NT> *ptr, NT value )
{
    TreeNode<NT> *temp;
    if( ptr != 0 )
    {
        cout << ptr ->data << ", ";
    
        deleteNodeHelper( ptr ->right, value );
        deleteNodeHelper( ptr ->left, value );
    }
}

#endif
