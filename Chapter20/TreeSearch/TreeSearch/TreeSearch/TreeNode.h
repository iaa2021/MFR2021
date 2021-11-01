#ifndef TREENODE_H
#define TREENODE_H
template<class NODETYPE> class Tree;
template<class NODETYPE>
class TreeNode	
{
	friend class Tree;
public:
		TreeNode( const NODETYPE &d )
			: data(d), leftPtr(0), rightPtr(0)
		{}
		NODETYPE getData() const
		{
			return data;
		}
	private:
		NODETYPE data;
		TreeNode<NODETYPE>* leftPtr;
		TreeNode<NODETYPE>* rightPtr;
};
#endif // !TREENODE_H
