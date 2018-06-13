#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

struct PersonInfo
{
	string name;
	vector<string> phones;
};


int main(int argc, char *argv[])
{
	if(argc > 1)
	{
		string line, word;
		istringstream record;
		vector<PersonInfo> people;
		ifstream in(argv[1]);
		if(in)
		{
			while(getline(in, line))
			{
				record.str(line);
				PersonInfo info;
				record >> info.name;
				while(record >> word)
					info.phones.push_back(word);
				people.push_back(info);
				record.clear();
			}

			for(auto i : people)
			{
				cout << i.name << " ";
				for(auto phone : i.phones)
					cout << phone << " ";
				cout << endl;
			}	

		}
		else
			cout << "can't open" << endl;
	}
	else
		cout << "Input the file name." << endl;

	return 0;
}