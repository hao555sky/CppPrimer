/*
编写一段程序，定义一个含有10个int的数组，令每个元素的值就是其下标值。
*/

#include <iostream>

using std::cout;
using std::endl;

int main()
{
	constexpr size_t array_size = 10;
	// int array[array_size];   // 默认初始化，但是会含有未定义的值
	// int array[array_size] = {0}; // 如果维度比提供的初始值数量大，则用提供的初始值初始化靠前的元素，剩下的元素被初始化为默认值。 该语句结果是数组元素全为0
	int array[array_size] = {}; // 10个元素，全部初始化为0

	for(size_t ia = 0; ia != array_size; ++ia)
		array[ia] = ia;

	for(auto a : array)
		cout << a << " ";
	cout << endl;
	return 0;
}