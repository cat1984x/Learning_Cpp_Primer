#include <iostream>
#include <vector>

// #define NDEBUG

using namespace std;

void print(const vector<int> &v, vector<int>::size_type index)
{
	#ifndef NDEBUG
		cerr << "Compiled at " << __TIME__ << 
		" in " << __func__ << "\nvector size: "
		<< v.size() << endl;  
	#endif
	auto sz = v.size();
	if(index < sz)
	{
		cout << v[index] << " ";
		print(v, index + 1);
	}
}

int main()
{
	vector<int> v;
	for(int i = 0; i != 10; ++i)
		v.push_back(i);

	print(v, 5);

	cout << endl;

	for(auto i : v)
		cout << i << " ";
	cout << endl;

	return 0;
}