/*
编写一段程序，用整形数组初始化一个vector对象
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
	int arr[5] = {0, 1, 2, 3, 4};
	vector<int> ivec(begin(arr), end(arr));

	for(auto iv : ivec)
		cout << iv << " ";

	return 0;
}