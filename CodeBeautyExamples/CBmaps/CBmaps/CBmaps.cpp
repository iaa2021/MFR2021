#include <iostream>
#include <string>
#include <map>
#include <list>
#include <iterator>
#include <vector>
using namespace std;
int main()
{
    map< string, list<int> > map1;
    list<int> intAct1{ 1, 2, 3, 4 };
    list<int> intAct2{ 5, 6 };
    list<int> intAct3{ 7, 8, 9 };
    list<int>::iterator pos_begin, pos_end;
    map1.insert(pair<string, list<int>>("Andrey", intAct1));
    map1.insert(pair<string, list<int>>("Kolia", intAct2));
    map1.insert(pair<string, list<int>>("Vasia", intAct3));
    for (auto pair : map1)
    {
        cout << pair.first << "  ";

        for (auto Pact : pair.second)
            cout << Pact << ", ";

        cout << endl;
    }
    intAct1.push_back(125);
    intAct1.push_front(127);
    map1["Andrey"] = intAct1;
    for (auto pair : map1)
    {
        cout << pair.first << "  ";

        for (auto Pact : pair.second)
            cout << Pact << ", ";

        cout << endl;
    }
    map< string, vector<int> > map2;
    vector<int> v1 = { 11, 12, 13, 14, 15 };
    vector<int> v2 = { 21, 22, 23, 24 };
    vector<int> v3 = { 35, 36, 37 };
    map2.insert(pair<string, vector<int>>("Andrey", v1));
    map2.insert(pair<string, vector<int>>("Kolia", v2));
    map2.insert(pair<string, vector<int>>("Vasia", v3));
    for (auto pair : map2)
    {
        cout << pair.first << "  ";

        for (auto Pact : pair.second)
            cout << Pact << ", ";

        cout << endl;
    }
    v1.push_back(125);
    map2["Andrey"] = v1;
    for (auto pair : map2)
    {
        cout << pair.first << "  ";

        for (auto Pact : pair.second)
            cout << Pact << ", ";

        cout << endl;
    }

    cout << endl;
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
