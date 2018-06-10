#include <iostream>
#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>

struct Sales_data
{
	Sales_data() = default;
	Sales_data(const std::string &s): bookNo(s) {}
	Sales_data(const std::string &s, unsigned n, double p): 
	bookNo(s), unit_sold(n), revenue(p*n) {}
	Sales_data(std::istream &);

	std::string isbn() const {return bookNo;}
	Sales_data &combine(const Sales_data &);
	double agv_price() const;

	std::string bookNo;
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

std::istream &read(std::istream &is, Sales_data &item)
{
	double price;
	is >> item.bookNo >> item.unit_sold >> price;
	item.revenue = item.unit_sold * price;
	return is;
}

std::ostream &print(std::ostream &os, const Sales_data &item)
{
	os << item.bookNo << " " << item.unit_sold
	<< " " << item.agv_price();
	return os;
}

Sales_data::Sales_data(std::istream &is)
{
	read(is, *this);
}

#endif

