// This is an independent project of an individual developer. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com

#ifndef LIST_H
#define LIST_H
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
	void concatenate(List<NODETYPE>&);
	
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
		 firstPtr = lastPtr = ptr;
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
	ListNode<NODETYPE>* tempPtr = firstPtr;
	if (firstPtr == 0)
		cout << "\nThe list is empty.\n";
	else
	{
		while (tempPtr != 0)
		{
			if (tempPtr->nextPtr == 0)
				cout << tempPtr->data << endl;
			else
			cout << tempPtr->data << ", ";
			tempPtr = tempPtr->nextPtr;
		}
	}
}
template<class NODETYPE>
void List<NODETYPE>::concatenate(List<NODETYPE>& list1)
{
	lastPtr->nextPtr = list1.firstPtr;
	ListNode<NODETYPE>* ptr = list1.firstPtr;
	while (ptr != 0)
	{
		addToEndOfList(ptr->data);
		ptr = ptr->nextPtr;
	}
	lastPtr = ptr;
}


#endif