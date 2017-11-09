#include <iostream>
#include "ex7_6.h"

int main()
{
	Sales_data total;
	if(read(cin, total))
	{
		Sales_data trans;
		while(read(cin, trans))
		{
			if(total.isbn() == trans.isbn())
			{
				total.combine(trans);
			}
		}
	}
}