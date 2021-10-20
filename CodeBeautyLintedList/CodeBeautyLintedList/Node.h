#include <iostream>
using namespace std;
class List;
class Node
{
	friend class List;
public:
	Node(int);
	int getValue() const;
private:
	int value;
	Node* nextPtr;
};
Node::Node( int num )
	: value( num ), nextPtr( 0 )
{}
int Node::getValue() const
{
	return value;
}

