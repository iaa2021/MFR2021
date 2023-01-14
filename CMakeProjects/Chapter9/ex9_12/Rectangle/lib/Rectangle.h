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
	Rectangle();
	bool setRectangle(int[2][4]);
	void setWidth();
	void setLength();
	int area();
	int perimeter();
	void print();
private:
	int coordinats[2][4];
	char field[20][20];
	bool rectangle;
	int length, width;
};

