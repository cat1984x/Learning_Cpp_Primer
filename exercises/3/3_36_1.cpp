#include <iostream>

using namespace std;

int main()
{
	const int sz = 10;
	int ia[sz], ib[sz + 1];

	for(int i = 0; i < sz; ++i)
	{
		ia[i] = i;
		ib[i] = i;
	}

	cout << "a: ";
	for(auto i : ia)
		cout << i << " ";
	cout << endl;	

	cout << "b: ";
	for(auto i : ib)
		cout << i << " ";
	cout << endl;

	auto sizeA = sizeof(ia) / sizeof(ia[0]);
	auto sizeB = sizeof(ib) / sizeof(ib[0]);

	if(sizeA == sizeB)
	{
		auto ptrA = ia;
		auto ptrB = ib;
		while(ptrA != end(ia))
		{
			if(*ptrA != *ptrB)
			{
				cout << "A and B have different member.";
				break;
			}
			++ptrA;
			++ptrB;
		}
		if(ptrA == end(ia))
			cout << "A and B are the same.";
	}
	else
		cout << "A and B have different size." << endl;

	return 0;
}