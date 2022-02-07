#ifndef TREENODE_H
#define TREENODE_H
template <class NT>
class Tree;
template <class NT>
class TreeNode
{
    friend class Tree<NT>;
private:
    NT data;
    TreeNode<NT> *left;
    TreeNode<NT> *right;
    TreeNode<NT> *parent;
public:
    TreeNode( NT, TreeNode<NT> * );
    NT getData() const
    {
        return data;
    }
};
template <class NT>
TreeNode<NT>::TreeNode( NT d, TreeNode<NT> *prt )
    : data(d), left(0), right(0), parent(prt)
{}
#endif