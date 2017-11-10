#include <string>
#include <istream>
#include <ostream>

using std::string;
using std::istream;
using std::ostream;

struct Sales_data;

istream& read(istream& is, Sales_data& rhs);
ostream& print(ostream& os, const Sales_data &rhs);

struct Sales_data
{
	Sales_data() = default;
	Sales_data(const string s): bookNo(s) {}
	Sales_data(const string s, unsigned u, double price): bookNo(s), units_sold(u), revenue(u * price) {}
	Sales_data(istream& is) { read(is, *this); }

	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0;

	string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data &rhs);
};

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

istream& read(istream& is, Sales_data& rhs)
{
	double price;
	is >> rhs.bookNo >> rhs.units_sold >> price;
	rhs.revenue = rhs.units_sold * price;
	return is;
}

ostream& print(ostream& os, const Sales_data &rhs)
{
	os << rhs.bookNo << " " << rhs.units_sold << " " << rhs.revenue;
	return os;
}
