#include <iostream>
#include <vector>
#include <memory>

using namespace std;

shared_ptr<vector<int>> new_vector()
{
	return make_shared<vector<int>>();
}

void read(shared_ptr<vector<int>> pv)
{
	int num;
	while(cin >> num)
		pv->push_back(num);
}

void print(shared_ptr<vector<int>> pv)
{
	for(const auto &i : *pv)
		cout << i << " ";
	cout << endl;
}

int main()
{
	shared_ptr<vector<int>> pv = new_vector();
	read(pv);
	print(pv);

	return 0;
}