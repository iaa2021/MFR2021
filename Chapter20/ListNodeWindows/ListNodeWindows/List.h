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
template <typename NODETYPE>
List<NODETYPE>::List()
	: firstPtr( 0 ), lastPtr( 0 )
{}
template <typename NODETYPE>
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
template <typename NODETYPE>
void List<NODETYPE>::insertAtFront(const NODETYPE& value)
{
	ListNode< NODETYPE>* newPtr = getNewNode(value);
	if (isEmpty())
		lastPtr = firstPtr = newPtr;//list has single node
	else //list is not empty
	{
		newPtr->nextPtr = firstPtr;
		firstPtr = newPtr;
	}
}
template <typename NODETYPE>
void List<NODETYPE>::insertAtBack(const NODETYPE& value)
{
	ListNode< NODETYPE>* newPtr = getNewNode(value);
	if (isEmpty())
		lastPtr = firstPtr = newPtr;//list has single node
	else //list is not empty
	{
		lastPtr->nextPtr = newPtr;
		lastPtr = newPtr;
	}
}
template <typename NODETYPE>
void List<NODETYPE>::removeFrwmFront(const NODETYPE& value)
{
	if (isEmpty)
		return false;
	else
	{
		ListNode< NODETYPE>* tempPtr = firstPtr;
		if (firstPtr == lastPtr)
			firstPtr = lastPtr = 0;
		else
			firstPtr->nextPtr;
		value = tempPtr -> data;
		delete tempPtr;
		return true;
	}
}
#endif
