#include <fstream>
#include "12_22_1.h"

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

ConstStrBlobPtr StrBlob::cbegin() const
{ 
	return ConstStrBlobPtr(*this, 0);
}

ConstStrBlobPtr StrBlob::cend() const
{ 
	return ConstStrBlobPtr(*this, data->size());
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

std::shared_ptr<std::vector<std::string>>
ConstStrBlobPtr::check(std::size_t i, const std::string &msg) const
{
	auto ret = wptr.lock();
	if(!ret)
		throw std::runtime_error("unbound StrBlobPtr");
	if(i >= ret->size())
		throw std::out_of_range(msg);
	return ret;
}

std::string& ConstStrBlobPtr::deref() const
{
	auto p = check(curr, "dereference past end");
	return (*p)[curr];
}

ConstStrBlobPtr& ConstStrBlobPtr::incr()
{
	check(curr, "increament pst end of StrBlobPtr");
	++curr;
	return *this;
}

int main()
{
	const StrBlob context{"const", "string", "object"};

	for(ConstStrBlobPtr it = context.cbegin(); !eq(it, context.cend()); it.incr())
		cout << it.deref() << endl;

	return 0;
}