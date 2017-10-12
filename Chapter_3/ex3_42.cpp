/*
编写一段程序，将含有整数元素的vector对象拷贝给一个整形数组
*/

#include <iostream>
#include <vector>
#include <iterator>

using std::vector;
using std::begin;
using std::end;
using std::cout;
using std::endl;

int main()
{

	vector<int> ivec = {0, 1, 2, 3, 4};
	int arr[5] = {};
	for(size_t index = 0; index != 5; ++index)
		arr[index] = ivec[index];

	for(auto a : arr)
		cout << a << " ";

	return 0;
}