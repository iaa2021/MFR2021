// 20_6_1131.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "List.h"
int main()
{
    List<int> list1; int a;
    cout << "Input 5 values in list1:\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> a;
        list1.addToEndOfList(a);
    }
    cout << "\nList1 consist of:\n";
    list1.printList();
    List<int> list2;
    cout << "\nInput 5 values in list2:\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> a;
        list2.addToEndOfList(a);
    }
    cout << "\nList2 consist of:\n";
    list2.printList();
    list1.concatenate(list2);
    cout << "\nAfter concatenation list1 consist of:\n ";
    list1.printList();
    list2.concatenate(list1);
    cout << "\nAfter concatenation list2 consist of:\n ";
    list2.printList();
    system("pause > 0");
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
