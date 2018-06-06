#include <iostream>

using namespace std;


int bigger(const int i, const int *ip)
{
	return (i > *ip) ? i : *ip;
}

int main()
{
	int a, b;
	while(cin >> a >> b)
	{
		cout << "The bigger is " << bigger(a, &b) << endl;
	}

	return 0;
}