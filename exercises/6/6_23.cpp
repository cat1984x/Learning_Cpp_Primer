#include <iostream>

using namespace std;

void print(const int *i)
{
	cout << *i << endl;
}

void print(const int *beg, const int *end)
{
	while(beg != end)
		cout << *beg++ << " ";
	cout << endl;
}

void print(const int a[], size_t size)
{
	for(size_t i = 0; i != size; ++i)
		cout << a[i] << " ";
	cout << endl;
}


int main()
{
	int i = 0, j[4] = {0, 1, 3, 4};
	print(&i);
	print(j);
	print(begin(j), end(j));
	print(&i, 1);
	print(j, end(j) - begin(j));

	return 0;
}