/*
编写一段程序，创建一个含有10个整数的vector对象，然后使用迭代器将所有元素的值变成原来的两倍。
输出vector对象的内容，检验程序是否正确。
*/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	vector<int> iv = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	for(auto it = iv.begin(); it != iv.end(); ++it)
		(*it) = (*it) * (*it);

	for(auto i : iv)
		cout << i << " ";
	return 0;

}