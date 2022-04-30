#include <iostream>
using namespace std;
template < class NODETYPE >
class List;
template < class NODETYPE >
class Node
{
	friend class List<NODETYPE>;
public:
	Node(const NODETYPE &);
	NODETYPE getValue() const;
private:
	NODETYPE value;
	Node<NODETYPE>* nextPtr;
};
template < class NODETYPE >
Node<NODETYPE>::Node( const NODETYPE &info  )
	: value( info ), nextPtr( 0 )
{}
template < class NODETYPE >
NODETYPE Node<NODETYPE>::getValue() const
{
	return value;
}

