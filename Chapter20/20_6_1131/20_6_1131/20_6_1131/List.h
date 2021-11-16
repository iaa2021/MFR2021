// This is an independent project of an individual developer. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com

#ifndef LISTNODE_H
#define LISTNODE_H
#include<iostream>
using std::cout;
using std::endl;
#include "ListNode.h"
template<class NODETYPE>
class List
{
public:
	List();
	void addToEndOfList(const NODETYPE&);
	void printList() const;

private:
	ListNode <NODETYPE>* firstPtr;
	ListNode <NODETYPE>* lastPtr;
};
template<class NODETYPE>
List<NODETYPE>::List()
	: firstPtr(0), lastPtr(0)
{

}
template<class NODETYPE>
void List<NODETYPE>::addToEndOfList(const NODETYPE& value)
{
	ListNode<NODETYPE>* ptr = new ListNode<NODETYPE>(value);
	if (firstPtr == 0)
	{
		ptr = firstPtr = lastPtr;
	}
	else
	{
		lastPtr->nextPtr = ptr;
		lastPtr = ptr;
		lastPtr->nextPtr = 0;
	}
}
template<class NODETYPE>
void List<NODETYPE>::printList() const
{
	ListNode<NODETYPE>* tempPtr = new ListNode();
	tempPtr = firstPtr;
	if (firstPtr == 0)
		cout << "\nThe list is empty.\n";
	else
	{
		while (tempPtr != 0)
		{
			cout << tempPtr->data << ", ";
			tempPtr = tempPtr->nextPtr;
		}
	}
}
#endif