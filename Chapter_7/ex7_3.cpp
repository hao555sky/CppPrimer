#include <iostream>
#include "ex7_2.h"

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::cerr;

int main()
{
	Sales_data total;
	if(cin >> total.bookNo >> total.units_sold >> total.revenue)
	{
		Sales_data trans;
		while(cin >> trans.bookNo >> trans.units_sold >> trans.revenue)
		{
			if(total.isbn() == trans.isbn())
			{
				total.combine(trans);
			}else{
				cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
				total = trans;
			}
		}
		cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
	}else{
		cerr << "No data?" << endl;
		return -1;
	}
	return 0;
}