#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
	if(argc > 1)
	{
		vector<string> c;
		string a;
		ifstream in(argv[1]);
		if(in)
		{
			while(getline(in, a))
				c.push_back(a);
			in.close();

			for(auto i : c)
				cout << i << endl;
		}
		else
			cout << "can't open" << endl;
	}
	else
		cout << "Input the file name." << endl;

	return 0;
}