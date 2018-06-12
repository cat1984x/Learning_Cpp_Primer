#include <iostream>
#include <string>

using namespace std;

class Account
{
public:
	Account() = default;
	Account(std::string n, double a): owner(n), amount(a) {}
	void calculate() { amount += amount * interestRate; }
	static double rate() { return interestRate; }
	static void rate(double);
	void print() { std::cout << owner << " : " << amount; }

private:
	std::string owner;
	double amount;
	static double interestRate;
	static double initRate();
	static constexpr int period = 30;
	double daily_tbl[period];
};

void Account::rate(double newRate)
{
	interestRate = newRate;
}

double Account::interestRate = initRate();

double Account::initRate()
{
	return 0.1;
}

int main()
{
	Account chen("chen", 1000);
	chen.print();
	cout << endl;
	chen.calculate();
	chen.print();
	cout << endl;
	cout << chen.rate() << endl;
	Account::rate(0.2);
	cout << chen.rate() << endl;
	chen.calculate();
	chen.print();
	cout << endl;

	return 0;
}