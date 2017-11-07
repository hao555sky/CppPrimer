#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::cerr;
using std::endl;

struct Sales_data
{
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

int main()
{
	Sales_data total;
	double revenue, price;
	if (cin >> total.bookNo >> total.units_sold >> total.revenue)
	{
		Sales_data trans;
		while(cin >> trans.bookNo >> trans.units_sold >> trans.revenue)
		{
			if (total.bookNo == trans.bookNo)
			{
				total.units_sold += trans.units_sold;
				revenue = total.revenue * total.units_sold + trans.revenue * trans.units_sold;
				price = revenue / total.units_sold;
			}
			else
			{
				cout << total.bookNo << " " << total.units_sold << " " << revenue << price << endl;
				total.bookNo = trans.bookNo;
				total.units_sold = trans.units_sold;
				total.revenue = trans.revenue;
			}
		}
		cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
	}else{
		cerr << "No data!" << endl;
		return -1;
	}
	return 0;
}