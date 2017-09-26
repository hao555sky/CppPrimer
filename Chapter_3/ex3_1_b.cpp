#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::string;

struct Sales_data
{
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0;
};

void ex1_21()
{
	Sales_data book1, book2;
	double price = 0;
	cin >> book1.bookNo >> book1.units_sold >> price;
	book1.revenue = book1.units_sold * price;

	cin >> book2.bookNo >> book2.units_sold >> price;
	book2.revenue = book2.units_sold * price;

	if (book1.bookNo == book2.bookNo)
	{
		unsigned units_sold = book1.units_sold + book2.units_sold;
		double revenue = book1.revenue + book2.revenue;
		cout << book2.bookNo << " " << units_sold << " " << revenue << endl;
	}
}

void ex1_22()
{

}

void ex1_23()
{
	Sales_data book;
	double price = 0;
	if (cin >> book.bookNo >> book.units_sold >> price)
	{
		int cnt = 1;
		Sales_data currBook;
		while(cin >> currBook.bookNo >> book.units_sold >> price)
		{
			if (book.bookNo == currBook.bookNo)
				cnt++;
			else
			{
				cout << book.bookNo << " occurs " << cnt << " times! " << endl;
				book = currBook;
				cnt = 1;
			}
		}
		cout << book.bookNo << " occurs " << cnt << " times! " << endl;
	}
	else
	{
		cerr << "No data? " << endl;
	}
}
int main()
{
	ex1_23();
	return 0;
}