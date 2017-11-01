#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void reset(int &i)
{
	i = 0;
}
int main()
{
	int num;
	cin >> num;
	cout << "Before: " << num << endl;
	reset(num);
	cout << "After: " << num << endl;
	return 0;
}