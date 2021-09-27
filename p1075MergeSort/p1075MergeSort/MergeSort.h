// This is an independent project of an individual developer. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com

#include <vector>
using std::vector;
class MergeSort
{
public:
	MergeSort(int);
	void sort();
	void displayElements() const;
private:
	int size;
	vector<int>data;
	void sortSubVector(int, int);
	void merge(int, int, int, int);
	void displaySubVector(int, int) const;
};