// This is an independent project of an individual developer. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com

#include <iostream>
using namespace std;
#include "Node.h"
class List
{
public:
	List();
	~List();
	void insertAtFront(int);
	void insertAtBack(int);
	bool removeFromFront();
	bool removeFromBack();
	void printList() const;
	bool isEmpty() const;
private:
	Node* firstPtr;
	Node* lastPtr;
	Node* getNewNode(int);
};

List::List()
	: firstPtr(0), lastPtr(0)
{
}

List::~List()
{
	if (isEmpty())
		cout << "The array is empty.\n";
	else
	{
		Node* currentPtr = firstPtr;
		Node* tempPtr;
		while ( currentPtr->nextPtr != 0 )
		{
			tempPtr = currentPtr;
			currentPtr = currentPtr->nextPtr;
			delete tempPtr;
		}
		firstPtr = firstPtr->nextPtr;
	}
	cout << "\nAll nodes are destroyed.\n";
}
void List::insertAtFront(int num)
{
	Node* newPtr = new Node(num);
	if (isEmpty())
		firstPtr = lastPtr = newPtr;
	else
	{
		newPtr->nextPtr = firstPtr;
		firstPtr = newPtr;
	}
}
void List::insertAtBack(int num)
{
	Node* newPtr = new Node(num);
	if (isEmpty())
		firstPtr = lastPtr = newPtr;
	else
	{
		lastPtr->nextPtr = newPtr;
		lastPtr = newPtr;
	}
}bool List::removeFromFront()
{
	if (isEmpty())
		return false;
	else
	{
		if (firstPtr == lastPtr)
			firstPtr = lastPtr = 0;
		else
		{
			Node* newPtr = firstPtr;
			firstPtr = firstPtr->nextPtr;
			delete newPtr;
		}
		return true;
	}
}
bool List::removeFromBack()
{
	if (isEmpty())
		return false;
	else
	{
		Node* newPtr = lastPtr;
		if (firstPtr == lastPtr)
			firstPtr = lastPtr = 0;
		else
		{
			Node* currentPtr = firstPtr;
			while (newPtr->nextPtr != lastPtr)
				newPtr = newPtr->nextPtr;

			lastPtr = currentPtr;
			currentPtr->nextPtr = 0;
		}
		delete newPtr;
		return true;
	}
}
void List::printList() const
{
	if (isEmpty())
		cout << "The list is empty.\n";
	else
	{
		cout << "\nThe list is:\n";
		Node* currentPtr = firstPtr;
		while (currentPtr != 0)
		{
			cout << currentPtr->value << ' ';
			currentPtr = currentPtr->nextPtr;
		}
		cout << endl;
	}
}
bool List::isEmpty() const
{
	return firstPtr == 0;
}
Node* List::getNewNode(int num)
{
	return new Node(num);
}