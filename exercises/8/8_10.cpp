#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
	if(argc > 1)
	{
		vector<string> lines;
		string line;
		ifstream in(argv[1]);
		if(in)
		{
			while(getline(in, line))
				lines.push_back(line);
			in.close();

			for(auto i : lines)
			{
				istringstream strm(i);
				string word;
				while(strm >> word)
					cout << word << endl;
			}	

		}
		else
			cout << "can't open" << endl;
	}
	else
		cout << "Input the file name." << endl;

	return 0;
}