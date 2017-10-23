/*
  编写一段程序，使用条件运算符从vector<int>中找到哪些元素的值是奇数，然后将这些技术值翻倍。

*/

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> ivec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	for(auto &num : ivec)
		num = ((num %2 == 0) ? num : 2 * num);

	for (auto num : ivec)
		cout << num << " ";
	return 0;
}