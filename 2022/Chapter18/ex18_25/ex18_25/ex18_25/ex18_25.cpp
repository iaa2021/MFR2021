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
    string alphabet("abcdefghijklmnopqrstuvwxyz}"), word, word1;
	for (size_t i = 0; i <= alphabet.size()/2; i++)
	{
		for (size_t j = i; j <= i * 2; j++)
			word += alphabet.at(j);
		if (i > 0)
		{
			for (size_t k = (i * 2) - 1; k >= i; k--)
				word1 += alphabet.at(k);
		}
		cout << right << setw((alphabet.size() / 2) + 1) << word;
		cout << left << setw((alphabet.size() / 2) + 1) << word1;
		word.clear(); word1.clear();
		cout << endl;
	}
	return 0;
}

