#include <iostream>

using namespace std;

istream &read(istream &is)
{
	int v;
	while(is >> v, !is.eof())
	{
		if(is.bad())
			throw runtime_error("IO error!");
		if(is.fail())
		{
			cerr << "Error!" << endl;
			is.clear();
			is.ignore(100, '\n');
			continue;
		}
		// cout << v << endl;
	}
	cout << v << endl;
	is.clear();
	return is;
}


int main()
{
	read(cin);
	cout << "next" << endl;
	read(cin);
	cout << "end" << endl;
	return 0;
}