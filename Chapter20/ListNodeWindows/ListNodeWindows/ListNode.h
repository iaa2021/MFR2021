#ifndef LISTNODE_H
#define LISTNODE_H
template <typename NODETYPE> class List
template <typename NODETYPE> 
class ListNode
{
	friend class List;
public:
	ListNode(const NODETYPE &);
	NODETYPE getData() const;
private:
	NODETYPE data;
	ListNode< NODETYPE>* nextPtr;
};
ListNode< NODETYPE>::ListNode( const NODETYPE &info )
	: data( info ), nextPtr( 0 )
{}
ListNode< NODETYPE>::getData() const
{
	return data;
}
#endif // !LISTNODE_H

