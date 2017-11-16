#ifndef CP5_EX7_57_H
#define CP5_EX7_57_H

#include <string>

using std::string;

class Account
{
public:
	void calculate() { amount += amount * interestRate; }
	static double rate() { return interestRate; }
	static void rate(double newRate) { interestRate = newRate; }

private:
	string owner;
	double amount;
	static double interestRate;
	static double initRate() { return 55.55; }
};

double Account::interestRate = initRate();

#endif