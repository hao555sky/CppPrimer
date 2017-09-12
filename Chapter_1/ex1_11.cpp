#include <iostream>

// 输入两个整数，输出整数范围内的所有整数
int main()
{
	int v1 = 0, v2 = 0;
	std:: cin >> v1 >> v2;
	if(v1 > v2)
	{
		v1 = v1 + v2;
		v2 = v1 - v2;
		v1 = v1 - v2;
	}
	while(v1 <= v2)
	{
		++v1;
		std::cout << v1 << std::endl;
	}
	return 0;
}