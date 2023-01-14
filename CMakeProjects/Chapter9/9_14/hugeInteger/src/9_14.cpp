#include "hugeInteger.h"
#include "config.h"
int main()
{
	srand(time(0));
	cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
	cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
	hugeInteger h; hugeInteger h1;
	h.printVersion();
	cout << "First integer is: ";
	h.print();
	cout << "Second integer is: ";
	h1.print();
	h.comparison(h1);
	h.add(h1);
	cout << "\nResult is:\n";
	h.printResult();
	cin.get();
	return 0;
}
