#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int add(int a, int b) { return a + b; }

int minus(int a, int b) { return a - b; }

int multiply(int a, int b) { return a * b; }

int divide(int a, int b) { return (b != 0) ? (a / b) : 0;}


int main()
{
	using pf = int (*)(int a, int b);
	vector<pf> vec = {&add, &minus, &multiply, &divide};
	for(auto i : vec){
		cout << i(1, 2) << endl;
	} 
	return 0;
}