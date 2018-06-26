#include <iostream>
#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>

using namespace std;

struct Sales_data
{
	string isbn() const {return bookNo;}
	Sales_data &combine(const Sales_data &);
	double agv_price() const;

	string bookNo;
	unsigned unit_sold = 0;
	double revenue = 0.0;
};

Sales_data & Sales_data::combine(const Sales_data &rhs)
{
	unit_sold += rhs.unit_sold;
	revenue += rhs.revenue;
	return *this;
}

double Sales_data::agv_price() const 
{
	if(unit_sold)
		return revenue / unit_sold;
	else
		return 0;	
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}

istream &read(istream &is, Sales_data &item)
{
	double price;
	is >> item.bookNo >> item.unit_sold >> price;
	item.revenue = item.unit_sold * price;
	return is;
}

ostream &print(ostream &os, const Sales_data &item)
{
	os << item.bookNo << " " << item.unit_sold
	<< " " << item.agv_price();
	return os;
}

bool compareIsbn(const Sales_data &a, const Sales_data &b)
{
	return a.isbn() < b.isbn();
}

#endif

