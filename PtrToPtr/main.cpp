#include <iostream>
using namespace std;

int main()
{
    int a = 7;
    int *ptr = &a;
    int **ptr1 = &ptr;
    cout << " ptr = " << ptr << endl;
    cout << " *ptr = " << *ptr << endl;
    cout << " ptr1 = " << ptr1 << endl;
    cout << " *ptr1 = " << *ptr1 << endl;
    cout << " **ptr1 = " << **ptr1 << endl;
    cout << " &ptr1 = " << &ptr1 << endl;
    return 0;
}
