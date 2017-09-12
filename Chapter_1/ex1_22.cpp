#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item sum;
	if(std::cin >> sum)
	{
		Sales_item book;
		while(std::cin >> book)
		{
			if(book.isbn() == sum.isbn())
				sum += book;
			else
			{
				std::cout << sum << std::endl;
				sum = book;
			}
		}
		std::cout << sum << std::endl;
	}
	else
	{
		std::cout << "No Data?" << std::endl;
	}
	return 0;
}