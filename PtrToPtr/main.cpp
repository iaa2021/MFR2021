#include <iostream>
using namespace std;

int main()
{
    int a = 7;
    int *ptr = &a;
    int **ptr1 = &ptr;
    cout << " ptr = " << ptr << "  Address of variavle." << endl;
    cout << " *ptr = " << *ptr << "  Value of variavle." << endl;
    cout << " &ptr = " << &ptr << "  Address of pointer." << endl;
    cout << " ptr1 = " << ptr1 << "  Address of pointer." << endl;
    cout << " *ptr1 = " << *ptr1 << " Address of variavle." << endl;
    cout << " **ptr1 = " << **ptr1<< "  Value of variavle." << endl;
    cout << " &ptr1 = " << &ptr1 << "  Address of pointer to a pointer." << endl;
    cin.get();
    return 0;
}
