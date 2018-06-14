#include <iostream>
#include <vector>
#include <list>

using namespace std;

bool equal(const vector<int> &v, const list<int> &l)
{
	if(v.size() != l.size())
		return false;
	auto vbeg = v.begin();
	auto lbeg = l.begin();

	for(; vbeg != v.end(); ++vbeg, ++lbeg)
	{
		if(*vbeg != *lbeg)
			return false;
	}
	return true;
}


int main()
{
	vector<int> v1{1, 2, 3};
	list<int> v2{1, 2, 4};

	cout << equal(v1, v2);

	return 0;
}