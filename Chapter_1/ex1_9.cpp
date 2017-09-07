#include<iostream>

// The sum of numbers between 50 and 100；
// The result is 3825
int main()
{
	int sum = 0, index = 50;
	while(index <= 100)
	{
		sum += index;
		++index;
	}
	std::cout << "The sum of numbers between 50 and 100 is " << sum << std::endl;
	return 0;
}