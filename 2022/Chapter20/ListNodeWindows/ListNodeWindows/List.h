#include <iostream>
using std::cout;
#include "ListNode.h"
template <typename NODETYPE>
class List
{
public:
	List();
	~List();
	void insertAtFront(const NODETYPE&);
	void insertAtBack(const NODETYPE&);
	bool removeFromFront(const NODETYPE&);
	bool removeFromBack(const NODETYPE&);
	bool isEmpty() const;
	void print() const;
private:
	ListNode <NODETYPE>* firstPtr;
	ListNode <NODETYPE>* lastPtr;
};

