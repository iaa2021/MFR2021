#ifndef TREENODE_H
#define TREENODE_H
template<class NODETYPE> class Tree;
template<class NODETYPE>
class TreeNode
{
friend class Tree <NODETYPE>;
public:
    TreeNode( const NODETYPE &d )
        : left( 0 ), right( 0 ), data( d )
        {}
    NODETYPE getData() const
    {
        return data;
    }
private:
    TreeNode <NODETYPE> *left;
    TreeNode <NODETYPE> *right;
    NODETYPE data;
};
#endif