#ifndef TREE_H
#define TREE_H	
#include <iostream>
using std::cout;
using std::endl;
#include <new>
#include "TreeNode.h"
template<class NODETYPE>
class Tree
{
public:
	Tree();
	void insertNode(const NODETYPE&);
	void preOrderTraversal() const;
	void inOrderTraversal() const;
	void postOrderTraversal() const;
private:
	TreeNode<NODETYPE> *rootPtr;
	void insertNodeHelper(TreeNode<NODETYPE>**, const NODETYPE&);
	void preOrderHelper( TreeNode<NODETYPE>* ) const;
	void inOrderHelper(TreeNode<NODETYPE>*) const;
	void postOrderHelper(TreeNode<NODETYPE>*) const;
};
template<class NODETYPE>
Tree<NODETYPE>::Tree()
{
	rootPtr = 0;
}
template<class NODETYPE>
void Tree<NODETYPE>::insertNode(const NODETYPE& value)
{
	insertNodeHelper(&rootPtr, value);
}
template<class NODETYPE>
void Tree<NODETYPE>::insertNodeHelper(TreeNode<NODETYPE>**ptr, const NODETYPE&value)
{
	if (*ptr == 0)
		*ptr = new TreeNode<NODETYPE>(value);
	else
	{
		if ((*ptr)->data < value)
			insertNodeHelper((&(*ptr)->leftPtr), value);
		else
			if ((*ptr)->data > value)
				insertNodeHelper((&(*ptr)->rightPtr), value);
			else
				cout << value << "duplicate." << endl;
	}
}
template<class NODETYPE>
void Tree<NODETYPE>::preOrderTraversal() const
{
	preOrderHelper(rootPtr);
}
template<class NODETYPE>
void Tree<NODETYPE>::preOrderHelper(TreeNode<NODETYPE>* ptr) const
{
	if (ptr != 0)
	{
		cout << ptr->data << "  ";
		preOrderHelper(ptr->leftPtr);
		preOrderHelper(ptr->rightPtr);
	}
}
template<class NODETYPE>
void Tree<NODETYPE>::inOrderTraversal() const
{
	inOrderHelper(rootPtr);
}
template<class NODETYPE>
void Tree<NODETYPE>::inOrderHelper(TreeNode<NODETYPE>* ptr) const
{
	if (ptr != 0)
	{
		inOrderHelper(ptr->leftPtr);
		cout << ptr->data << "  ";
		inOrderHelper(ptr->rightPtr);
	}
}
template<class NODETYPE>
void Tree<NODETYPE>::postOrderTraversal() const
{
	postOrderHelper(rootPtr);
}
template<class NODETYPE>
void Tree<NODETYPE>::postOrderHelper(TreeNode<NODETYPE>* ptr) const
{
	if (ptr != 0)
	{
		postOrderHelper(ptr->leftPtr);
		postOrderHelper(ptr->rightPtr);
		cout << ptr->data << "  ";
	}
}


#endif
