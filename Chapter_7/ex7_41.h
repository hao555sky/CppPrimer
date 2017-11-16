#ifndef CP5_EX7_41_H
#define CP5_EX7_41_H

#include <string>
#include <istream>
#include <ostream>
#include <iostream>

using std::string;
using std::istream;
using std::ostream;
using std::cout;
using std::endl;

class Sales_data;
istream& read(istream& is, Sales_data& sd);
ostream& print(ostream& os, const Sales_data& csd);

class Sales_data
{
friend istream& read(istream& is, Sales_data& sd);
friend ostream& print(ostream& os, const Sales_data& csd);

public:
	Sales_data(string nbookNo, unsigned nunits_sold, double nprice): bookNo(nbookNo), units_sold(nunits_sold), revenue(nprice * nunits_sold) 
	{ cout << "Sales_data(string, unsigned, double)" << endl; }
	Sales_data(): Sales_data("", 0, 0) { cout << "Sales_data()" << endl; }
	Sales_data(string nbookNo): Sales_data(nbookNo, 0, 0) { cout << "Sales_data(string)" << endl; }
	Sales_data(istream& is): Sales_data() { cout << "Sales_data(istream&)" << endl; read(is, *this); }

	string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data& csd);
	Sales_data add(const Sales_data& csd1, const Sales_data& csd2);
	double avg_price() const { return units_sold == 0 ? 0 : revenue / units_sold; }

private:
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0;
};

Sales_data& Sales_data::combine(const Sales_data& csd)
{
	units_sold += csd.units_sold;
	revenue += csd.revenue;
	return *this;
}
Sales_data Sales_data::add(const Sales_data& csd1, const Sales_data& csd2)
{
	Sales_data sum = csd1;
	sum.combine(csd2);
	return sum;
}

istream& read(istream& is, Sales_data& sd)
{
	cout << "read(istream&, Sales_data&)" << endl;
	double price;
	is >> sd.bookNo >> sd.units_sold >> price;
	sd.revenue = price * sd.units_sold;
	return is;
}

ostream& print(ostream& os, const Sales_data& csd)
{
	os << csd.bookNo <<" " << csd.units_sold <<" " << csd.revenue;
	return os;
}

#endif