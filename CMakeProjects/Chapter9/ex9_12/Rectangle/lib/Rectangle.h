// Rectangle.h : включаемый файл для стандартных системных включаемых файлов
// или включаемые файлы для конкретного проекта.

#pragma once

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
class Rectangle
{
public:
	Rectangle(int[2][4]);
	bool setRectangle(int[2][4]);
	int getWidth(int[2][4]);
	int getLength(int[2][4]);
	int area(int, int);
	int perimeter(int, int);
private:
	int coordinats[2][4];
	char field[20][20];
	bool rectangle;
	int length, width;
};

