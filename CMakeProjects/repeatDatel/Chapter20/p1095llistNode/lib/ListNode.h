#pragma once
template < class NodeType > class List;

template < class NodeType >
class ListNode
{
    friend class List;
    public:
    ListNode( const NodeType & );
    NodeType getData() const;
    private:
    NodeType data;
    ListNode< NodeType > *nextPtr;
};
template < class NodeType >
ListNode<NodeType>::ListNode( const NodeType &info )
    : data( info ), nextPtr( 0 )
{}
template < class NodeType >
NodeType ListNode<NodeType>::getData() const
{
    return data;
}
