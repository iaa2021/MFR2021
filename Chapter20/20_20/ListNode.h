#ifndef LISTNODE_H
#define LISTNODE_H

template < class LT >
class List;
template < class LT >
class ListNode
{
    friend class List<LT>;
public:
    ListNode( const LT &data );
    LT getData() const;
private:
    LT data;
    ListNode<LT>*next;
};
template < class LT >
ListNode<LT>::ListNode( const LT &value )
    : data( value ), next(0)
{
}
template < class LT >
LT ListNode<LT>::getData() const
{
    return data;
}
#endif
