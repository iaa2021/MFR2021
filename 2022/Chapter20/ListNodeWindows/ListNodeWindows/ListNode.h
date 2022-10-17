// This is an independent project of an individual developer. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com

template <typename NODETYPE> class List;
template <typename NODETYPE>
class ListNode
{
	friend class List<NODETYPE>;
public:
	ListNode( const NODETYPE & );
	NODETYPE getData() const;

private:
	NODETYPE data;
	ListNode <NODETYPE>* nextPtr;
};
template <typename NODETYPE>
ListNode<NODETYPE>::ListNode( const NODETYPE &info )
	: data( info ), nextPtr( 0 )
{

}
template <typename NODETYPE>
ListNode<NODETYPE>::getDate() const
{
	return data;
}