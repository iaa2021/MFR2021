#include <iostream>
template <class NODETYPE>
class Tree;
template <class NODETYPE>
class TreeNode
{
	friend class Tree;
public:
	TreeNode( const NODETYPE &data )
		: value(data), leftPtr(0), rigtPtr(0)
	{
	}

	NODETYPE getValue() const
	{
		return value;
	}
private:
	NODETYPE value;
	TreeNode <NODETYPE>* leftPtr;
	TreeNode <NODETYPE>* rigtPtr;
};
