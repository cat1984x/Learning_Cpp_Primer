#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

struct Person
{
	std::string name;
	std::string address;
	std::string getName() const {return name;}
	std::string getAddress() const {return address;}
};

std::istream &read(std::istream &is, Person &item)
{
	is >> item.name >> item.address;
	return is;
}

std::ostream &print(std::ostream &os, const Person &item)
{
	os << item.name << " " << item.address;
	return os;
}


#endif