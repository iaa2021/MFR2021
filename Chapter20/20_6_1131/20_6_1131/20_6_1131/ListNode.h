#ifndef LISTNODE_H
#define LISTNODE_H
template<class NODETYPE>
class List;

template<class NODETYPE>
class ListNode
{
	friend class List<NODETYPE>
public:
	ListNode( NODETYPE );

private:
	NODETYPE data;
	ListNode <NODETYPE>* nextPtr;
};
template<class NODETYPE>
ListNode<NODETYPE>::ListNode( NODETYPE value )
	: data( value ), nextPtr( 0 )
{
}
#endif