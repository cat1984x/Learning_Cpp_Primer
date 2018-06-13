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

string format(const string &s)
{
	return s;
}

bool valid(const string &s)
{
	return true;
}

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

			ostringstream os;
			for(const auto &entry : people)
			{
				ostringstream formated, badNum;
				for(const auto &nums : entry.phones)
				{
					if(!valid(nums))
					{
						badNum << " " << nums;
					}
					else
						formated << " " << format(nums);
				}
				if(badNum.str().empty())
					os << entry.name << " " << formated.str() <<endl;
				else
					cerr << "input error: " << entry.name 
				<< " invaild numbers " << badNum.str() << endl;
			}
			cout << os.str() << endl;	
		}
		else
			cout << "can't open" << endl;
	}
	else
		cout << "Input the file name." << endl;

	return 0;
}