#include <iostream>
#include <vector>
// #include <new>

using namespace std;

vector<int> *new_vector()
{
	return new (nothrow) vector<int>;
}

void read(vector<int> *pv)
{
	int num;
	while(cin >> num)
		pv->push_back(num);
}

void print(vector<int> *pv)
{
	for(const auto &i : *pv)
		cout << i << " ";
	cout << endl;
}

int main()
{
	vector<int> *pv = new_vector();
	if(!pv)
	{
		cout << "not enough memory" << endl;
		return -1;
	}
	read(pv);
	print(pv);
	delete pv;
	pv = nullptr;

	return 0;
}