#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> c;
	// vector<int> c{1};
	try	
	{
		cout << c.at(0) << endl;
	}catch(out_of_range err)
	{
		cout << err.what();
	}

	// cout << c[0] << endl;
	// cout << *(c.begin()) << endl;
	// cout << c.front() << endl;

	return 0;
}
