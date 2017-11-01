#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int abs(int val)
{
	if (val < 0)
		return -val;
	return val;
}

int main()
{
	int res = 0, val;
	cin >> val;
	res = abs(val);
	cout << res << endl;
	return 0;
}