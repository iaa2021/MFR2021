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
	void preOrderTravarsal() const;
	void inOrderTravarsal() const;
	void postOrderTravarsal() const;
private:
	TreeNode<NODETYPE> rootPtr;
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

#endif
