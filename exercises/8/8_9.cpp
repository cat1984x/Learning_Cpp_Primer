#include <iostream>
#include <sstream>
#include <string>

using namespace std;

istream &read(istream &is)
{
	string v;
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
		cout << v << endl;
	}
	// cout << v << endl;
	is.clear();
	return is;
}


int main()
{
	string s("8 9 10 1 6 7 ");
	cout << s << endl;
	istringstream strm(s);

	read(strm);

	return 0;
}