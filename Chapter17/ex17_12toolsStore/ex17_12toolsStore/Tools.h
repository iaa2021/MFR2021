#include <iostream>
using std::cout;
using std::endl;
#include<string>
using std::string;
class Tools
{
public:
	Tools(int = 0, string = "", int = 0, double = 0.0 );
	void setNumber(int);
	int getNumber() const;
	void setName(string);
	string getName() const;
	void setQuantity(int);
	int getQuantity() const;
	void setPrice(double);
	double getPrice() const;
private:
	int number;
	char name[50];
	int quantity;
	double price;
};

