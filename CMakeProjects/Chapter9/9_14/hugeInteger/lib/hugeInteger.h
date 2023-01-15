#pragma once

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <cstdlib>
using std::rand;
using std::srand;
#include <ctime>
using std::time;
class hugeInteger
{
public:
	hugeInteger();
	void print() const;
	void printResult() const;
	void printVersion() const;
	void comparison(hugeInteger&) const;
	void add(hugeInteger&);
	void subtract(hugeInteger&);
	void clearResult();
private:
	int array[40];
	int result[80];
};
