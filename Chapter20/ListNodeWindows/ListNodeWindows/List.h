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
	bool removeFromFront(const NODETYPE&);
	bool removeFromBack(const NODETYPE&);
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
bool List<NODETYPE>::removeFromFront(const NODETYPE& value)
{
	if (isEmpty)
		return false;
	else
	{
		ListNode< NODETYPE>* tempPtr = firstPtr;
		if (firstPtr == lastPtr)
			firstPtr = lastPtr = 0;
		else
			firstPtr = firstPtr->nextPtr;

		value = tempPtr -> data;
		delete tempPtr;
		return true;
	}
}
template <typename NODETYPE>
bool List<NODETYPE>::removeFromBack(const NODETYPE& value)
{
	if (isEmpty)
		return false;
	else
	{
		ListNode< NODETYPE>* tempPtr = lastPtr;
		if (firstPtr == lastPtr)
			firstPtr = lastPtr = 0;
		else
		{
			ListNode< NODETYPE>* currentPtr = firstPtr;
			while (currentPtr -> nextPtr != lastPtr)
				currentPtr = currentPtr->nextPtr;

			lastPtr = currentPtr;
			currentPtr->nextPtr = 0;
		}
		value = tempPtr->data;
		delete tempPtr;
		return true;
	}
}
template <typename NODETYPE>
bool List<NODETYPE>::isEmpty() const
{
	return firstPtr == 0;	
}
template <typename NODETYPE>
ListNode< NODETYPE>* List<NODETYPE>::getNewNode(const NODETYPE &value)
{
	return new ListNode< NODETYPE>(value);
}
template <typename NODETYPE>
void List<NODETYPE>::print() const
{
	if (isEmpty)
	{
		cout << "The array is empty.\n";
		return;
	}
	ListNode< NODETYPE>* currentPtr = firstPtr;
	while (currentPtr->nextPtr != 0)
	{
		cout << currentPtr->data << endl;
		currentPtr = currentPtr->nextPtr;
	}
	cout << endl << endl;
}
#endif
