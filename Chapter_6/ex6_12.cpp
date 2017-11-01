#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void swap(int &val1, int &val2)
{
	int tmp = val1;
	val1 = val2;
	val2 = tmp;
}

int main()
{
	int val1, val2;
	cin >> val1 >> val2;
	cout << "Before: value 1 is : " << val1 << " value2 is : " << val2 << endl;
	swap(val1, val2);
	cout << "After: value 1 is : " << val1 << " value2 is : " << val2 << endl;
	return 0;
}