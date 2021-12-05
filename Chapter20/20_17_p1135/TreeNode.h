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
public:
    TreeNode();
    ~TreeNode();
};
template <class NT>
TreeNode<NT>::TreeNode()
    : data(0), left(0), right(0)
{}
template <class NT>
TreeNode<NT>::~TreeNode()
{}
#endif