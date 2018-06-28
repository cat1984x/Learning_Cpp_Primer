#include <fstream>
#include "12_20.h"

using namespace std;

StrBlob::StrBlob():data(make_shared<vector<string>>()) {}

StrBlob::StrBlob(initializer_list<string> il) : 
	data(make_shared<vector<string>>(il)) {}

void StrBlob::check(size_type i, const string &msg) const
{
	if(i >= data->size())
		throw out_of_range(msg);
}

void StrBlob::pop_back()
{
	check(0, "pop_back on empty StrBlob");
	data->pop_back();
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

StrBlobPtr StrBlob::begin()
{ 
	return StrBlobPtr(*this, 0);
}

StrBlobPtr StrBlob::end()
{ 
	return StrBlobPtr(*this, data->size());
}


std::shared_ptr<std::vector<std::string>>
StrBlobPtr::check(std::size_t i, const std::string &msg) const
{
	auto ret = wptr.lock();
	if(!ret)
		throw std::runtime_error("unbound StrBlobPtr");
	if(i >= ret->size())
		throw std::out_of_range(msg);
	return ret;
}

std::string& StrBlobPtr::deref() const
{
	auto p = check(curr, "dereference past end");
	return (*p)[curr];
}

StrBlobPtr& StrBlobPtr::incr()
{
	check(curr, "increament pst end of StrBlobPtr");
	++curr;
	return *this;
}

int main()
{
	fstream in("12_20_data.txt");
	if(!in)
	{
		cout << "can't open file" << endl;
		return -1;
	}

	StrBlob context;
	string line;
	while(getline(in, line))
		context.push_back(line);
	for(StrBlobPtr it = context.begin(); !eq(it, context.end()); it.incr())
		cout << it.deref() << endl;

	return 0;
}