#ifndef CP5_EX7_21_H
#define CP5_EX7_21_H

#include <string>
#include <istream>
#include <ostream>

using std::string;
using std::istream;
using std::ostream;

class Sales_data;
istream& read(istream& is, Sales_data& sd);

class Sales_data
{
friend istream& read(istream&, Sales_data&);
friend ostream& print(ostream&, const Sales_data&);
public:
	Sales_data() = default;
	Sales_data(string nbookNo): bookNo(nbookNo) {}
	Sales_data(string nbookNo, unsigned nunits_sold, double nrevenue): bookNo(nbookNo), units_sold(nunits_sold), revenue(nrevenue) {}
	Sales_data(istream& is) { read(is, *this); }

	string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data& rhs);

private:
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0;
};

Sales_data& Sales_data::combine(const Sales_data& rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

istream& read(istream& is, Sales_data& sd)
{
	double price;
	is >> sd.bookNo >> sd.units_sold >> price;
	sd.revenue = sd.units_sold * price;
	return is;
}

ostream& print(ostream& os, const Sales_data& csd)
{
	os << csd.bookNo << " " << csd.units_sold << " " << csd.revenue;
	return os;
}

Sales_data add(const Sales_data& lhs, const Sales_data& rhs)
{
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}

#endif