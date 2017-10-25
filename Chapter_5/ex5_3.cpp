#include <iostream>

using std:: cout;
using std:: endl;

int main()
{
	int index = 50, sum = 0;
	while(index < 100)
		sum += index, ++index;
	cout << sum << endl;
	return 0;
}