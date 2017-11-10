#include <iostream>
#include "ex7_11.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
	Sales_data obj1;
	print(cout, obj1) << endl;

	Sales_data obj2("000");
	print(cout, obj2) << endl;

	Sales_data obj3("001", 2, 20);
	print(cout, obj3) << endl;

	Sales_data obj4(cin);
	print(cout, obj4) << endl;

	return 0;
}