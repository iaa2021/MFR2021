#include <iostream>
using namespace std;
#include "Node.h"
class List
{
public:
	List();
	~List();
	void printList(Node*);
private:
	Node* firstPtr;
	Node* lastPtr;
};

List::List()
{
}

List::~List()
{
}
