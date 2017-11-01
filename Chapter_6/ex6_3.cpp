#include <iostream>
using std::cout;
using std::endl;

int fact(int val)
{
    if (val == 0 || val == 1) 
    	return 1;
    else
    	return val * fact(val - 1);
}

int main()
{
	int res = 0;
	res = fact(5);
	cout << res << endl;
	return 0;
}