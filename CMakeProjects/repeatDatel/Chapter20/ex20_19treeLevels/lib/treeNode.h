#ifndef TREENODE_H
#define TREENODE_H
template< class NODETYPE > class tree;
template< class NODETYPE >
class treeNode
{
    friend class tree<NODETYPE>;
public:
    treeNode(const NODETYPE & value, treeNode<NODETYPE> *p, int l )
    : data( value ), left( 0 ), right( 0 ), parent( p ), level( l ){}
    NODETYPE getData() const
    {
        return data;
    }
private:
    treeNode<NODETYPE> *left;
    treeNode<NODETYPE> *right;
    treeNode<NODETYPE> *parent;
    NODETYPE data;
    int level;
};

#endif