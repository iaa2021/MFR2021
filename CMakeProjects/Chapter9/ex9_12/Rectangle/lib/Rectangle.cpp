#include "Rectangle.h"

Rectangle::Rectangle()
{
	cout << "Input rectangle's coordinats, 4 high, than 4 width of each point:\n";
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> coordinats[i][j];
		}
	}
	rectangle = setRectangle(coordinats);
}

bool Rectangle::setRectangle(int array[2][4])
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (array[i][j] < 0 || array[i][j] > 19)
				return false;
		}
	}
	if ( array[0][0] != array[0][1] || array[0][2] != array[0][3])
	{
		cout << "This is not rectangle.\n";
		return false;
	}
	if (array[1][0] != array[1][1] || array[1][2] != array[1][3])
	{
		cout << "This is not rectangle.\n";
		return false;
	}
	else
		return true;
}
void Rectangle::setWidth()
{
	if (rectangle == true)
	{
		width = coordinats[0][0] - coordinats[0][1];
		cout << "\nWidth is " << width << endl;
	}
	else
		cout << "This is not rectangle.\n";
}
void Rectangle::setLength()
{
	if (rectangle == true)
	{
		length = coordinats[0][0] - coordinats[1][0];
		cout << "\nLength is " << length << endl;
	}
	else
		cout << "This is not rectangle.\n";
}
int Rectangle::area()
{
	cout << "Rectangle's area is " << length * width << "sm2.\n";
	return length * width;
}
int Rectangle::perimeter()
{
	cout << "Rectangle's perimeter is " << 2 * ( length + width ) << "sm.\n";
	return 2 * ( length + width );
}
void Rectangle::print()
{
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			if ((i == coordinats[0][0] || i == coordinats[2][0]) || (j == coordinats[1][0] || j == coordinats[1][2]))
				field[i][j] = '*';
			else
				field[i][j] = '.';
		}
	}
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			cout << field[i][j];
		}
		cout << endl;
	}
}