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
	void preOrderTraversal() const;
	void inOrderTraversal() const;
private:
	TreeNode<NODETYPE>* rootPtr;
	void insertNodeHelper(TreeNode<NODETYPE>**, const NODETYPE&);
	void preOrderHelper(TreeNode<NODETYPE>*) const;
	void inOrderHelper(TreeNode<NODETYPE>*) const;
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
		*ptr = new TreeNode<NODETYPE>(data);
	else
	{
		if ((*ptr)->value > data)
			insertNodeHelper(&( (*ptr) -> leftPtr), data);
		else
		{
			if (((*ptr)->value) < data)
				insertNodeHelper(&((*ptr)->rightPtr), data);
			else
				cout << "Duplicate value" << endl;
		}
	}
}
template <class NODETYPE>
void Tree<NODETYPE>::preOrderTraversal() const
{
	preOrderHelper(rootPtr);
}
template <class NODETYPE>
void Tree<NODETYPE>::preOrderHelper(TreeNode<NODETYPE>*ptr) const
{
	if (ptr != 0)
	{
		cout << ptr->value << ", ";
		preOrderHelper(ptr->leftPtr);
		preOrderHelper(ptr->rightPtr);
	}
}
template <class NODETYPE>
void Tree<NODETYPE>::inOrderTraversal() const
{
	inOrderHelper(rootPtr);
}
template <class NODETYPE>
void Tree<NODETYPE>::inOrderHelper(TreeNode<NODETYPE>* ptr) const
{
	if (ptr != 0)
	{
		preOrderHelper(ptr->leftPtr);
		cout << ptr->value << ", ";
		preOrderHelper(ptr->rightPtr);
	}
}

#endif // !TREE_H


