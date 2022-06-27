#include "Tools.h"
#include <iostream>
using std::cout;
using std::endl;
using std::left;
using std::right;
using std::fixed;
using std::showpoint;
#include<string>
using std::string;
#include <iomanip>
using std::setw;
using std::setprecision;

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
	int length = sNm.size();
	length = (length < 30 ? length : 29);
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
void Tools::print(ostream &output) const
{
	output << left << setw(10) << getNumber() << setw(30) << getName() << setw(10) << setprecision(2) << fixed << showpoint << getPrice() << right << setw(5) << getQuantity() << endl;
}