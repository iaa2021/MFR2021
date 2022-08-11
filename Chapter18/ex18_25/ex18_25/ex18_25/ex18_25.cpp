#include <iostream>
using std::cout;
using std::endl;
using std::left;
using std::right;
#include <string>
using std::string;
#include <iomanip>
using std::setw;
int main()
{
    string alphabet("abcdefghijklmnopqrstuvwxyz}");
	for (size_t i = 0; i <= alphabet.size()/2; i++)
	{
		for (size_t j = i; j <= i * 2; j++)
		{
			cout << setw((alphabet.size() / 2) - j) << right << alphabet.at(j);
		}
		cout << endl;
	}
	return 0;
}

