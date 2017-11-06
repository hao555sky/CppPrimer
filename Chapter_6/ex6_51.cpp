#include <iostream>

using std::cout;
using std::endl;

void f()
{
	cout << "This is f()" << endl;
}

void f(int)
{
	cout << "This is f(int)" << endl;
}

void f(int, int)
{
	cout << "This is f(int, int)" << endl;
}

void f(double, double = 3.14)
{
	cout << "This is f(double, double)" << endl;
}

int main()
{
	// f(2.56, 42);
	f(42);
	f(42, 0);
	f(2.56, 3.14);
	return 0;
}