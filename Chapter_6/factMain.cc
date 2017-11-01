#include <iostream>
#include "Chapter6.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int res = 0, val;
	cin >> val;
	res = fact(val);
	cout << res << endl;
	return 0;
}