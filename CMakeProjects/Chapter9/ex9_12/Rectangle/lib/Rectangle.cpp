#include "Rectangle.h"

Rectangle::Rectangle( int array[2][4])
{
	cout << "Input rectangle's coordinats, high, than width of each point:\n";
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> array[i][j];
		}
	}
	setRectangle(int array[2][4]);
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

}
