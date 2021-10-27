// CodeBeautyLintedList.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <conio.h>
#include <iostream>
#include <cstdlib>
#include<ctime>
#include <string>
using namespace std;
#include "List.h"
template<class T>
void testList(List<T>& object, const string& typeName);
int main()
{
	srand(time(0));
	cout << "1 - to operate with integer data;\n2 - to operate with double data;\n3 - to operate with string data;\n0 - to stop operations; " << endl;
	int choice;
	cout << "Input your choice:  ";
	cin >> choice;
		if (choice == 1)
		{
			List<int> list;
			testList(list, "integer");
		}
		if (choice == 2)
		{
			List<double> list;
			testList(list, "double");
		}
		if (choice == 3)
		{
			List<string> list;
			testList(list, "string");
		}
		if( choice > 3 || choice < 0 )
		{
			cout << "You've entered wrong choice.\n";
			cout << "Input your choice:  ";
			cin >> choice;
		}
		cout << "The work is over.\n";
		system("pause");
		return 0;
	
}
template<class T>
void testList(List< T >& object, const string& typeName)
{
	cout << "The list of " << typeName << " objects is handling.\n";
	int choice; T num; T border;
	cout << "1 - insert at front;\n2 - insert at back;\n3 - remove from front;\n4 - remove from back;\n5 - to insert after defined number;\n0 - to stop operations; " << endl;
	cout << "Input your choice:  ";
	cin >> choice;
	while (choice != 0)
	{
		switch (choice)
		{
		case 1:
			cout << "Input value, you'd like to operate with\n";
			cin >> num;
			object.insertAtFront(num);
			break;
		case 2:
			cout << "Input value, you'd like to operate with\n";
			cin >> num;
			object.insertAtBack(num);
			break;
		case 3:
			object.removeFromFront();
			break;
		case 4:
			object.removeFromBack();
			break;
		case 5:
			object.printList();
			cout << "Input value, after which you'd like to insert & value for inserting: ";
			cin >> border >> num;
			object.insertAfter(border, num);
			break;
		default:
			cout << "You've entered wrong choice.\n";
			break;
		}
		cout << "Input your choice\n";
		cin >> choice;
	}
	object.printList();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
