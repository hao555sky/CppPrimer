#include<iostream>

int main()
{

	std::cout << "The sum of numbers between 50 and 100 by for loop is " << std::endl;
	int sum_of_ex1_9 = 0;
	for(int i = 50; i <= 100; ++i)
	{
		sum_of_ex1_9 += i;
	}
	std::cout << "The sum of numbers between 50 and 100 by for loop is " << sum_of_ex1_9 << std::endl;

	std::cout << "print numbers between 0 and 10 by for loop" << std::endl;
	for(int i = 10; i >=0; --i)
	{
		std:: cout << i << std::endl;
	}

	std::cout << "The numbers between v1 and v2 by for loop" << std::endl;

	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	 
	if(v1 > v2)
	{
		v1 = v1 + v2;
		v2 = v1 - v2;
		v1 = v1 - v2;
	}
	for(int i = v1; i <= v2; ++i)
	{
		std::cout << i << std::endl;
	}

	return 0;
}