#ifndef TREE_H
#define TREE_H
#include<iostream>
using std::cout;
using std::endl;
#include <new>
#include "TreeNode.h"
template <class NODETYPE>
class Tree
{
public:
	Tree()
	{
		rootPtr = 0;
	}
	void insertNode(const NODETYPE &);
private:
	NODETYPE* rootPtr;
	void insertNodeHelper( TreeNode<NODETYPE> **ptr, const NODETYPE & )
};
template <class NODETYPE>
void Tree<NODETYPE>::insertNode(const NODETYPE& data)
{
	insertNodeHelper(&rootPtr, data);
}
template <class NODETYPE>
void Tree<NODETYPE>::insertNodeHelper(TreeNode<NODETYPE>** ptr, const NODETYPE& data)
{
	if (*ptr == 0)
		*ptr = new NODETYPE(data);
	else
	{
		if ((*ptr)->value > data)
			insertNodeHelper(&( *ptr -> leftPtr), data);
		if ((*ptr->value) < data)
			insertNodeHelper(&(*ptr -> righttPtr), data);
		else
			cout << "Duplicate value" << endl;
	}
}
#endif // !TREE_H


