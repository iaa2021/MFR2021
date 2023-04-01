#ifndef TREENODE_H
#define TREENODE_H
template< class NODETYPE > class tree;
template< class NODETYPE >
class treeNode
{
    friend class tree<NODETYPE>;
public:
    treeNode(const NODETYPE & value )
    : data( value ), left( 0 ), right( 0 ){}
    NODETYPE getData() const;
private:
    treeNode<NODETYPE> *left;
    treeNode<NODETYPE> *right;
    NODETYPE data;
};
template< class NODETYPE >
NODETYPE treeNode<NODETYPE>::getData() const
{
    return data;
}
#endif