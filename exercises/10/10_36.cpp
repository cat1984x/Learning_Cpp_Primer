#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
	list<int> li{1, 0, 2, 3, 0, 4, 5};
	auto zero = find(li.crbegin(), li.crend(), 0);
	if(zero != li.crend() && zero != li.crbegin())
	{
		cout << *zero << " ";
		--zero;
		cout << *zero << endl;
	}
	cout << endl;

	return 0;
}