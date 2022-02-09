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
#include <algorithm>
using namespace std;
#include "TreeNode.h"
template <class NT>
class Tree
{
private:
    vector <NT> vct;
    map<NT, int>mapObj;
    TreeNode<NT> *root;
    int count;
    int maxLevel;
    void  insertNodeHelper( TreeNode<NT> **, NT &, TreeNode<NT> * );
    void  insertStringHelper( TreeNode<string> **, string &, TreeNode<string> * );
    void  preOrderHelper( TreeNode<NT> *ptr ) const;
    void  inOrderHelper( TreeNode<NT> *ptr ) const;
    void  postOrderHelper( TreeNode<NT> *ptr ) const;
    void  deleteNodeHelper( TreeNode<NT> *, NT );
    void  levelOutputHelper( TreeNode<NT> *, map< NT, int > );
public:
    Tree();
    void preOrderTraversal() const;
    void insertNode( NT & );
    void insertStringNode( string & );
    void inOrderTraversal() const;
    void postOrderTraversal() const;
    TreeNode<NT> *getNewNode( const NT & );
    bool isEmpty();
    void depth( const Tree &, TreeNode<NT> *ptr );
    map<NT, int> getMap() const;
    void levelTraversal( const Tree & ) const;
    TreeNode<NT> *getRoot() const;
    void deleteNode( NT );
    void levelOutput();
};
template <class NT>
Tree<NT>::Tree()
    : root(0), count(0), maxLevel(0)
{
}
template <class NT>
void Tree<NT>::insertNode( NT &value)
{
    insertNodeHelper( &root, value, 0 );
}
template <class NT>
void Tree<NT>::insertStringNode( string &value )
{
    insertStringHelper( &root, value, 0 );
}
template <class NT>
void Tree<NT>::insertNodeHelper( TreeNode<NT> **ptr, NT &value, TreeNode<NT> *prt )
{
    if( *ptr == 0 )
    {
        
        if( count == 0 )
        {
            *ptr = new TreeNode<NT>( value, 0 );
            count++;
        }
        else
        {
            *ptr = new TreeNode<NT>( value, prt );
            (*ptr) -> level = ( prt ->level ) + 1;
            count++;
            if( maxLevel < (*ptr) -> level )
            maxLevel = (*ptr) -> level;       
        }
        
    }
    
    else
    {
        if( (*ptr) -> data < value )
        insertNodeHelper( &( (*ptr) -> right ), value, (*ptr) );
        else 
        {
            if( (*ptr) -> data  > value )
            insertNodeHelper( &( ( *ptr) -> left ), value, (*ptr) );
            else
            cout << "This is duplicate value.\n";
        }
    }
}
template <class NT>
void Tree<NT>::insertStringHelper( TreeNode<string> **ptr, string &value, TreeNode<string> *prt )
{
    if( *ptr == 0 )
    {
        
        if( count == 0 )
        {
            *ptr = new TreeNode<string>( value, 0 );
            count++;
        }
        else
        {
            *ptr = new TreeNode<string>( value, prt );
            (*ptr) ->level = ( prt ->level ) + 1;
            count++;
            if( maxLevel < (*ptr) -> level )
            maxLevel = (*ptr) -> level;      
        }
    }
    else
    {
        if( ( (*ptr) -> data ).compare( value ) < 0 )
        insertNodeHelper( &( (*ptr) -> right ), value, (*ptr) );
        else 
            insertNodeHelper( &( ( *ptr) -> left ), value, (*ptr)  );
    }
}
template <class NT>
void Tree<NT>::preOrderTraversal() const
{
    cout << "\nThe data type is " << typeid(root ->data).name() << endl;
    cout << "\nThe tree has " << maxLevel + 1 << " levels.\n";
    preOrderHelper( root );
}
template <class NT>
void Tree<NT>::preOrderHelper( TreeNode<NT> *ptr ) const
{
    if( ptr != 0 )
    {
    cout << ptr ->data << ' ' << ptr ->level << ", ";
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
    TreeNode<NT> *temp;//for searching largest in left subtree, or smallest in right subtree
    if( ptr ->data < value )
        deleteNodeHelper( ptr ->right, value ); 
    if( ptr ->data > value )
        deleteNodeHelper( ptr ->left, value );

    if( ptr ->data == value )
    {
        if( ptr -> left == 0 && ptr ->right == 0 )
        {
            if( ptr -> parent -> left == ptr )
            {
                cout << endl << ptr -> data << " is left child of parent " << ptr -> parent ->data  << endl;
                ptr -> parent  -> left = NULL;
            }
            if( ptr -> parent -> right == ptr )
            {
                cout << endl << ptr -> data << " is right child of parent " << ptr -> parent -> data  << endl;
                ptr -> parent  -> right = NULL;
            }
            free( ptr );
            ptr = NULL;
            delete ptr;
            cout << "\n ptr has to be deleted.\n";
        }
        else
        {
            if( ptr -> left != 0 )
            {
                temp = ptr ->left;
                while ( temp ->right != 0 )
                {
                    temp = temp ->right;
                }
                cout << "Desired ptr is " << temp ->data << endl;
            }
            if( ptr -> left == 0 && ptr ->right != 0 )
            {
                temp = ptr ->right;
                while ( temp ->left != 0 )
                {
                    temp = temp ->left;
                }
                cout << "Desired ptr is " << temp ->data << endl;
            }
                if( temp ->parent ->left == temp )
                temp ->parent ->left = 0;
                if( temp ->parent ->right == temp )
                temp ->parent ->right = 0;

                ptr ->data = temp ->data;
                free( temp );
                temp = NULL;
                delete temp;
                cout << "\n ptr has to be deleted.\n";   
        }
    }
}
template <class NT>
void Tree<NT>::levelOutput() 
{
    map< NT, int > mp;
    levelOutputHelper( root, mp );
    int max = 0;
    for( auto pair:mp )
    {
        if( pair.second > max )
        max = pair.second;
    }
    cout << "\nNow tree has " << max << " levels." << endl;
    for( auto pair:mp )
    cout << pair.first << " " << pair.second << ", ";
    cout << endl;
}
template <class NT>
void Tree<NT>::levelOutputHelper( TreeNode<NT> *ptr, map< NT, int >mp ) 
{
    if( ptr != 0 )
    {
        mp.insert( make_pair( ptr ->data, ptr ->level ) );
        preOrderHelper( ptr ->left );
        preOrderHelper( ptr ->right );
    }
}
#endif
