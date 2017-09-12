#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item currBook;
	if(std::cin >> currBook)
	{
		int cnt = 1;
		Sales_item book;
		while(std::cin >> book)
		{
			if(currBook.isbn() == book.isbn())
				cnt++;
			else
			{
				std::cout << "The book " << currBook.isbn() << " has " << cnt << " records" << std::endl;
				currBook = book;
				cnt = 1;
			}
		}
		std::cout << "The book " << currBook.isbn() << " has " << cnt << " records" << std::endl;
	}
	return 0;
}