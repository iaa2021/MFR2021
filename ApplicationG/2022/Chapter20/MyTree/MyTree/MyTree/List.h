#ifndef LIST_H
#define LIST_H
#include <iostream>
using std::cout;
using std::endl;
#include "ListNode.h"
template <typename NODETYPE>
class List
{
public:
	List();
	~List();
	void insertAtFront(const NODETYPE&);
	void insertAtBack(const NODETYPE&);
	void removeFremFront(const NODETYPE&);
	void removeFromBack(const NODETYPE&);
	bool isEmpty() const;
	void print() const;
private:
	ListNode< NODETYPE> *firstPtr;
	ListNode< NODETYPE> *lastPtr;
	ListNode< NODETYPE> *getNewNode(const NODETYPE&);
};
List<NODETYPE>::List()
	: firstPtr( 0 ), lastPtr( 0 )
{}
List<NODETYPE>::~List()
{
	if (!isEmpty())
	{
		cout << "Destroing nodes:\n";
		ListNode< NODETYPE>* currentPtr = firstPtr;
		ListNode< NODETYPE>* tempPtr;
		while (currentPtr != 0)
		{
			tempPtr = currentPtr;
			cout << tempPtr->data << endl;
			currentPtr = currentPtr->nextPtr;
			delete tempPtr;
		}
	}
	cout << "All nodes are destroyed." << endl;
}
#endif
