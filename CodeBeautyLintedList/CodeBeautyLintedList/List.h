// This is an independent project of an individual developer. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com

#include <iostream>
using namespace std;
#include "Node.h"
template < class NODETYPE >
class List
{
public:
	List();
	~List();
	void insertAtFront(const NODETYPE&);
	void insertAtBack(const NODETYPE&);
	void insertAfter(const NODETYPE&, const NODETYPE&);
	bool removeFromFront();
	bool removeFromBack();
	void printList() const;
	bool isEmpty() const;
private:
	Node<NODETYPE>* firstPtr;
	Node<NODETYPE>* lastPtr;
	Node<NODETYPE>* getNewNode(const NODETYPE&);
};
template < class NODETYPE >
List<NODETYPE>::List()
	: firstPtr(0), lastPtr(0)
{
}

template < class NODETYPE >
List<NODETYPE>::~List()
{
	if (isEmpty())
		cout << "The array is empty.\n";
	else
	{
		Node<NODETYPE>* currentPtr = firstPtr;
		Node<NODETYPE>* tempPtr;
		while ( currentPtr->nextPtr != 0 )
		{
			tempPtr = currentPtr;
			currentPtr = currentPtr->nextPtr;
			delete tempPtr;
		}
	}
	cout << "\nAll nodes are destroyed.\n";
}
template < class NODETYPE >
void List<NODETYPE>::insertAtFront(const NODETYPE& num)
{
	Node<NODETYPE>* newPtr = new Node<NODETYPE>(num);
	if (isEmpty())
		firstPtr = lastPtr = newPtr;
	else
	{
		newPtr->nextPtr = firstPtr;
		firstPtr = newPtr;
	}
}
template < class NODETYPE >
void List<NODETYPE>::insertAtBack(const NODETYPE& num)
{
	Node<NODETYPE>* newPtr = new Node<NODETYPE>(num);
	if (isEmpty())
		firstPtr = lastPtr = newPtr;
	else
	{
		lastPtr->nextPtr = newPtr;
		lastPtr = newPtr;
	}
}
template < class NODETYPE >
bool List<NODETYPE>::removeFromFront()
{
	if (isEmpty())
		return false;
	else
	{
		if (firstPtr == lastPtr)
			firstPtr = lastPtr = 0;
		else
		{
			Node<NODETYPE>* newPtr = firstPtr;
			firstPtr = firstPtr->nextPtr;
			delete newPtr;
		}
		return true;
	}
}
template < class NODETYPE >
bool List<NODETYPE>::removeFromBack()
{
	if (isEmpty())
		return false;
	else
	{
		Node<NODETYPE>* newPtr = lastPtr;//for removing
		if (firstPtr == lastPtr)
			firstPtr = lastPtr = 0;
		else
		{
			Node<NODETYPE>* currentPtr = firstPtr;//for moving throw the list
			while (currentPtr->nextPtr != lastPtr)
				currentPtr = currentPtr->nextPtr;

			lastPtr = currentPtr;
			lastPtr->nextPtr = 0;
		}
		delete newPtr;
		return true;
	}
}

template < class NODETYPE >
void List<NODETYPE>::printList() const
{
	if (isEmpty())
		cout << "The list is empty.\n";
	else
	{
		cout << "\nThe list is:\n";
		Node<NODETYPE>* currentPtr = firstPtr;
		while (currentPtr != 0)
		{
			cout << currentPtr->value << ' ';
			currentPtr = currentPtr->nextPtr;
		}
		cout << endl;
	}
}
template < class NODETYPE >
bool List<NODETYPE>::isEmpty() const
{
	return firstPtr == 0;
}
template < class NODETYPE >
Node<NODETYPE>* List<NODETYPE>::getNewNode(const NODETYPE& num)
{
	return new Node<NODETYPE>(num);
}
template < class NODETYPE >
void List<NODETYPE>::insertAfter(const NODETYPE& num, const NODETYPE& pst)
{
	//num is the number, after which we are going to insert pst
	Node<NODETYPE>* newPtr = new Node<NODETYPE>(pst);//node for paiste
	Node<NODETYPE>* tempPtr = firstPtr;
	while (tempPtr->value != num)
	{
		tempPtr = tempPtr->nextPtr;
	}
	newPtr->nextPtr = tempPtr->nextPtr;
	tempPtr->nextPtr = newPtr;
}