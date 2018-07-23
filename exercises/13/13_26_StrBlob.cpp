#include <fstream>
#include "13_26_StrBlob.h"

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

StrBlobPtr StrBlob::begin() const
{ 
	return StrBlobPtr(*this, 0);
}

StrBlobPtr StrBlob::end() const
{ 
	return StrBlobPtr(*this, data->size());
}


shared_ptr<std::vector<string>>
StrBlobPtr::check(size_t i, const string &msg) const
{
	auto ret = wptr.lock();
	if(!ret)
		throw std::runtime_error("unbound StrBlobPtr");
	if(i >= ret->size())
		throw std::out_of_range(msg);
	return ret;
}

string& StrBlobPtr::deref() const
{
	auto p = check(curr, "dereference past end");
	return (*p)[curr];
}

string& StrBlobPtr::deref(int off) const
{
	auto p = check(curr, "dereference past end");
	return (*p)[curr + off];
}

StrBlobPtr& StrBlobPtr::incr()
{
	check(curr, "increament pst end of StrBlobPtr");
	++curr;
	return *this;
}

bool eq(const StrBlobPtr &lhs, const StrBlobPtr &rhs)
{ 
	auto l = lhs.wptr.lock();
	auto r = rhs.wptr.lock();
	if(l == r)
		return (!r || lhs.curr == rhs.curr);
	else
		return false;
}