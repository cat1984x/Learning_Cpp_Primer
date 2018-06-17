#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;
	cout << "size: " << v.size() << " capacity: " << v.capacity() << endl;
	for(int i = 0; i != 17;  ++i)
	{
		v.push_back(i);
		cout << "size: " << v.size() << " capacity: " << v.capacity() << endl;
	}

	v.reserve(50);
	cout << "size: " << v.size() << " capacity: " << v.capacity() << endl;

	while(v.size() != v.capacity())
		v.push_back(0);
	cout << "size: " << v.size() << " capacity: " << v.capacity() << endl;

	v.push_back(0);
	cout << "size: " << v.size() << " capacity: " << v.capacity() << endl;


	return 0;
}
