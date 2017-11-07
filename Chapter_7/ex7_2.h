#ifndef CP5_ex7_02_h
#define CP5_ex7_02_h

#include <string>

using std::string;

struct Sales_data
{
	string bookNo;
	unsigned units_sold;
	double revenue;

	Sales_data& combine(const Sales_data &rhs);
	string isbn() const { return bookNo; }
};

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}
#endif