#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void ex1_10()
{
	int i = 10;
	while(i >= 0)
	{
		cout << i << endl;
		i--;
	}
}

void ex1_11()
{
	int a, b;
	cin >> a >> b;
	if(a > b)
	{
		a = a + b;
		b = a - b;
		a = a - b;
	}
	while(a <= b)
	{
		cout << a << endl;
		a++;
	}
}

int main()
{
	ex1_11();
	return 0;
}