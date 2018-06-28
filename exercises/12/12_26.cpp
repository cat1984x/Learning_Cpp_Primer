#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n = 5;
	allocator<string> alloc;
	auto const p = alloc.allocate(n);

	string s;
	string *q = p;
	while(cin >> s && q != p + n)
		alloc.construct(q++, s);
	const size_t size = q - p;

	for(int i = 0; i != size; ++i)
		cout << p[i] << " ";
	cout << endl;

	string *pt = p;
	while(pt != p + size)
		alloc.destroy(pt++);

	alloc.deallocate(p, n);

	return 0;
}