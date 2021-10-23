// CodeBeautyLintedList.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;
#include "List.h"
int main()
{
	srand(time(0));
	List list;
	int choice; int num;
	cout << "1 - insert at front;\n2 - insert at back;\n3 - remove from front;\n4 - remove from back;\n0 - to stop operations; " << endl;
	cout << "Input your choice:  ";
	cin >> choice;
	while (choice != 0)
	{
		switch (choice)
		{
		case 1:
			cout << "Input number, you'd like to operate with\n";
			cin >> num;
			list.insertAtFront(num);
			break;
		case 2:
			cout << "Input number, you'd like to operate with\n";
			cin >> num;
			list.insertAtBack(num);
			break;
		case 3:
			list.removeFromFront();
			break;
		case 4:
			list.removeFromBack();
			break;
		default:
			cout << "You've entered wrong choice.\n";
			break;
		}
		
		cout << "Input your choice\n";
		cin >> choice;
	}
	
	list.printList();

	return 0;
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
