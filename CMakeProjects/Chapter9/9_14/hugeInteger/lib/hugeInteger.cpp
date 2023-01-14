#include "hugeInteger.h"
#include "config.h"
hugeInteger::hugeInteger()
{
	for (int i = 0; i < 40; i++)
	{
		array[i] = rand() % 9;
	}
	for (int i = 0; i < 80; i++)
	{
		result[i] = 0;
	}
}
void hugeInteger::print() const
{
	for (int i = 0; i < 40; i++)
	{
		cout << array[i];
	}
	cout << endl;
}
void hugeInteger::printResult() const
{
	for (int i = 0; i < 80; i++)
	{
		cout << result[i];
	}
	cout << endl;
}
void hugeInteger::printVersion() const
{
	cout << "\nLibrary version is " << (PROJECT_VERSION_MAJOR) << '.';
	cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
}
void hugeInteger::comparison(hugeInteger& h) const
{
	int a = 0;// integers are not equal
	for (int i = 0; i < 40; i++)
	{
		if( array[i] == h.array[i] )
		a = 1;
		if (array[i] > h.array[i])
		{
			cout << "First integer is greater than second one.\n";
			a = 0;
			break;
		}
		else if( array[i] < h.array[i] )
		{
			cout << "First integer is less than second one.\n";
			a = 0;
			break;
		}
	}
	if( a == 1 )
	cout << "\nIntegers are equal.\n";
}
void hugeInteger::add(hugeInteger& h)
{
	for (int i = 40; i >= 0; i--)
	{
		for (int j = 80; j >= 0; j--)
		{
			if (result[j] + array[i] + h.array[i] < 10)
				result[j] += array[i] + h.array[i];
			else
			{
				result[j] += array[i] + h.array[i] - 10;
				result[j + 1]++;
			}
		}
	}
}