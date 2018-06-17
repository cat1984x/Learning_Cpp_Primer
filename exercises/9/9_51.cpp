#include <iostream>
#include <string>
#include <vector>

using namespace std;

class date
{
public:
	explicit date(const string &s);
	string str();
private:
	unsigned y = 0;
	unsigned m = 0;
	unsigned d = 0;
	const vector<string> months{"Jan", "Feb", "Mar", "Apr", "May", "June",
	"July", "Aug", "Sept", "Oct", "Nov", "Dec"};
	const string nums = "123456789";
};

date::date(const string &s)
{
	for(decltype(months.size()) i = 0; i != months.size(); ++i)
	{
		if(s.find(months[i]) != string::npos)
		{
			m = i + 1;
			break;
		}	
	}

	auto pos = s.find_first_of(nums);
	if(m == 0)
	{
		m = stoi(s.substr(pos));
		pos += to_string(m).size();
		if(m > 12)
			m = 12;
		pos = s.find_first_of(nums, pos);
	}
	
	d = stoi(s.substr(pos));
	pos += to_string(m).size();

	pos = s.find_first_of(nums, pos);
	y = stoi(s.substr(pos));
}

string date::str()
{
	return months[m - 1] + " " + to_string(d) + " " + to_string(y);
}

int main()
{
	date d1("January 01,1900");
	cout << d1.str() << endl;

	date d2("3/5/1990");
	cout << d2.str() << endl;	

	date d3("Dec 12 2018");
	cout << d3.str() << endl;

	date d4("13,13:2018");
	cout << d4.str() << endl;

	return 0;
}
