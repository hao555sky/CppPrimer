#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void swap(int *p, int *q)
{
	int val = *p;
	*p = *q;
	*q = val;
}

int main()
{
	int val1, val2;
	cin >> val1 >> val2;
	cout << "original result: val1 is " << val1 << " val2 is " << val2 << endl;
	swap(&val1, &val2);
	cout << "original result: val1 is " << val1 << " val2 is " << val2 << endl;
	return 0;
}