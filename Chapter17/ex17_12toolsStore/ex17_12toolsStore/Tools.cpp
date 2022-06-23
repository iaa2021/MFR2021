#include "Tools.h"
#include <iostream>
using std::cout;
using std::endl;
#include<string>
using std::string;
Tools::Tools(int nmb, string nm, int qw, double pr)
{
	setNumber(nmb);
	setName(nm);
	setQuantity(qw);
	setPrice(pr);
}
void Tools::setNumber(int nmb)
{
	number = (nmb > 0 && nmb <= 100 ? nmb : 0);
}
int Tools::getNumber() const
{
	return number;
}

void Tools::setQuantity(int qw)
{
	quantity = (qw > 0 ? qw : 0);
}
int Tools::getQuantity() const
{
	return quantity;
}
void Tools::setName(string sNm)
{
	const char* chN = sNm.data();
	int length = sNm.length();
	length = (length < 50 ? length : 49);
	strncpy_s(name, chN, length);
	name[length] = '\0';
}
string Tools::getName() const
{
	return name;
}
void Tools::setPrice(double pr)
{
	price = (pr > 0 ? pr : 0);
}
double Tools::getPrice() const
{
	return price;
}