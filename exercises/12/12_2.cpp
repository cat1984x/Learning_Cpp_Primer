#include "12_2.h"

using namespace std;

StrBlob::StrBlob():data(make_shared<vector<string>>()) {}

StrBlob::StrBlob(initializer_list<string> il) : 
	data(make_shared<vector<string>>(il)) {}

void StrBlob::check(size_type i, const string &msg) const
{
	if(i >= data->size())
		throw out_of_range(msg);
}

string& StrBlob::front()
{
	check(0, "front on empty StrBlob");
	return data->front();
}

const string& StrBlob::front() const
{
	check(0, "front on empty StrBlob");
	return data->front();
}

string& StrBlob::back()
{
	check(0, "back on empty StrBlob");
	return data->back();
}

const string& StrBlob::back() const
{
	check(0, "back on empty StrBlob");
	return data->back();
}

void StrBlob::pop_back()
{
	check(0, "pop_back on empty StrBlob");
	data->pop_back();
}

int main()
{
	StrBlob s1;
	{
		StrBlob s2 = {"a", "an", "the"};
		s1 = s2;
		cout << s2.size() << endl;
	}

	cout << s1.front() << endl;
	cout << s1.back() << endl;
	s1.push_back("cat");
	cout << s1.back() << endl;
	s1.pop_back();
	cout << s1.back() << endl;
	cout << s1.size() << endl;

	return 0;
}