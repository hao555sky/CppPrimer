#ifndef CP5_EX7_26_H
#define CP5_EX7_26_H

#include <string>
#include <istream>
#include <ostream>

using std::string;
using std::istream;
using std::ostream;

class Sales_data;

istream& read(istream&, Sales_data&);

class Sales_data
{
friend istream& read(istream&, Sales_data&);
friend ostream& print(ostream& os, const Sales_data& csd);

public:
	Sales_data() = default;
	Sales_data(string nbookNo): bookNo(nbookNo) {}
	Sales_data(string nbookNo, unsigned nunits_sold, double nrevenue): bookNo(nbookNo), units_sold(nunits_sold), revenue(nrevenue) {}
	Sales_data(istream &is) { read(is, *this); }

	string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data& csd);
	double avg_price() { return units_sold == 0 ? 0 : revenue / units_sold; }

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

istream& read(istream& is, Sales_data& sd)
{
	double price;
	is >> sd.bookNo >> sd.units_sold >> price;
	sd.revenue = price * sd.units_sold;
	return is;
}

ostream& print(ostream& os, const Sales_data& csd)
{
	os << csd.bookNo << " " << csd.units_sold << " " << csd.revenue;
	return os;
}

#endif