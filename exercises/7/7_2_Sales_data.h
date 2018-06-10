#include <iostream>
#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>

using namespace std;

struct Sales_data
{
	string isbn() const {return bookNo;}
	Sales_data &combine(const Sales_data &);

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

#endif

