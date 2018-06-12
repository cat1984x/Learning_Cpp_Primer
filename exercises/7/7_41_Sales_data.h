#include <iostream>
#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>

class Sales_data
{
	friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
	friend std::istream &read(std::istream &is, Sales_data &item);
	friend std::ostream &print(std::ostream &os, const Sales_data &item);

public:

	Sales_data(const std::string &s, unsigned n, double p): 
	bookNo(s), unit_sold(n), revenue(p*n) { std::cout << "3 param" << std::endl; }
	Sales_data(): Sales_data("", 0 , 0) { std::cout << "0 param" << std::endl; }
	Sales_data(const std::string &s): Sales_data(s, 0, 0) { std::cout << "1 param" << std::endl; } 
	Sales_data(std::istream &is):Sales_data(){ read(is, *this); 
		std::cout << "cin" << std::endl;}

	std::string isbn() const {return bookNo;}
	Sales_data &combine(const Sales_data &);

private:
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

inline double Sales_data::agv_price() const 
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


#endif

