// This is an independent project of an individual developer. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com

// Containers.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    map <string, int> mp;
    string cities[] = { "Berlin", "Paris", "Oslo", "London", "Baky" };
    int a;
    cout << "Input temperature of pointed cities:\n ";
    for (int i = 0; i < sizeof(cities) / sizeof(string); i++)
    {
        cout << '\t' << cities[i] << " - "; cin >> a;
        mp.insert(make_pair(cities[i], a));
    }
    map <string, int>::iterator it = mp.begin();
    cout << "\nOutput:\n";
    for (int i = 0; it != mp.end(); i++, it++)
    {
        cout << "The city is " << it->first << " temperature is " << it->second << endl;
    }
    cin.get();
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
