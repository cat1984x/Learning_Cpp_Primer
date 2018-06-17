#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> v;
	v.reserve(1024);

	for(int i = 0; i != 1048;  ++i)
	{
		v.push_back("a");
	}

	cout << "size: " << v.size() << " capacity: " << v.capacity() << endl;

	v.resize(v.size() + v.size() / 2);

	cout << "size: " << v.size() << " capacity: " << v.capacity() << endl;


	return 0;
}
