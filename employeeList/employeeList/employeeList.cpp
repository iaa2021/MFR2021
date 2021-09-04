// This is an independent project of an individual developer. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
#include "Employee.h"
#include "ComissionEmployee.h"
#include "BPCE.h"
#include "SalariedEmployee.h"
#include "HourlyEmployee.h"

int main()
{
    cout << fixed << setprecision(2);
    ComissionEmployee ce("Sue", "Jones", "222-22-2222", 10000, 0.06);
    BPCE bpce("Bob", "Lewis", "333-33-3333", 5000, 0.04, 300);
    SalariedEmployee se("John", "Smith", "111-11-1111", 800);
    HourlyEmployee he("Karen", "Price", "444-44-4444", 16.75, 40);
    vector<Employee*>store;
    store.push_back(&ce);
    store.push_back(&bpce);
    store.push_back(&se);
    store.push_back(&he);
    for (int i = 0; i < store.size(); i++)
    {
        store[i] -> print();
        cout << "\nand employee's earnings is: "<< store[i] -> earnings() << "$" << "\n\n";
    }
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
