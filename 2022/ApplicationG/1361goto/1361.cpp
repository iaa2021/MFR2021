#include <iostream>
using std::cout;
using std::endl;
#include <iomanip>
using std::setw;
using std::left;
#include "config.h"
int main()
{
    cout << "Project version is " << (PROJECT_VERSION) << endl;
    int count = 1;
    start:
    if ( count > 10 )
    goto end;

    cout << setw(3) << left << count;
    count++;

    goto start;

    end:
    cout << endl;
    return 0;
}