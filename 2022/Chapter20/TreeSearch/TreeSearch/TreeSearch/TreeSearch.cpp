// This is an independent project of an individual developer. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com

// TreeSearch.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
#include "Tree.h"
int main()
{
    Tree<int> intTree;
    int intValue;
    cout << "Input 10 integer values: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> intValue;
        intTree.insertNode(intValue);
    }
    cout << "Preorder traversal: \n";
    intTree.preOrderTraversal();
    cout << "\nInorder traversal: \n";
    intTree.inOrderTraversal();
    cout << "\nPostorder traversal: \n";
    intTree.postOrderTraversal();
    Tree <string> sTree;
    string sValue;
    cout << "\nInput 10 string values: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> sValue;
        sTree.insertNode(sValue);
    }
    cout << "Preorder traversal: \n";
    sTree.preOrderTraversal();
    cout << "\nInorder traversal: \n";
    sTree.inOrderTraversal();
    cout << "\nPostorder traversal: \n";
    sTree.postOrderTraversal();
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