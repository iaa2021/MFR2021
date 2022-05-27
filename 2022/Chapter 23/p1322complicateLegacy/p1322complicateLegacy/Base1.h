#ifndef BASE1_H
#define BASE1_H
class Base1
{
public:
	Base1(int parameterValue)
	{
		value = parameterValue;
	}
	int getData() const
	{
		return value;
	}

protected:
	int value;
};
#endif