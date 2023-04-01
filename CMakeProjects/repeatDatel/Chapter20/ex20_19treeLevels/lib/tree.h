#ifndef TREE_H
#define TREE_H
#include "treeNode.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
template< class NODETYPE >
class tree
{
public:
    tree();
    void insertNode( const NODETYPE & );
private:
    treeNode<NODETYPE> *root;
    void insertNodeHelper( treeNode<NODETYPE> **, const NODETYPE & );
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
        insertNodeHelper( (*ptr) -> left );
        else
        {
            if( ( (*ptr) ->data ) < value )
            insertNodeHelper( (*ptr) -> right );
            else
            cout << "This is duplicate.\n";
        }

    }
}
#endif