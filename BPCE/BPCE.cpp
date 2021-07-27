#include <iostream>
using namespace std;
#include "BPCE.h"
BPCE::BPCE(const string& first, const string& last, const string& ssn, double sales, double rate, double salary)
    :ComissionEmployee(first, last, ssn, sales, rate)
{
    setBaseSalary(salary);
}
void BPCE::setBaseSalary(double salary)
{
    baseSalary = (salary >= 0.0 ? salary : 0.0);
}
double BPCE::getBaseSalary() const
{
    return baseSalary;
}
double BPCE::earnings() const
{
    return getBaseSalary() + ComissionEmployee::earnings();
}
void BPCE::print() const
{
    ComissionEmployee::print();
    cout << "\nbase salary: " << getBaseSalary() << endl;
}

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
