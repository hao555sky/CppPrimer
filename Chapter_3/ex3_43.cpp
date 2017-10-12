/*
编写3个不同版本的程序，令其均能输出ia的元素。
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
	int ia[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
	
	// 版本1使用范围for语句管理迭代过程
	for(int (&i)[4] : ia)
		for(int j : i)
			cout << j << " ";
	cout << endl;

	// 版本2使用普通的for语句，用下标运算符
	for(size_t i = 0; i != 3; ++i)
		for(size_t j = 0; j != 4; ++j)
			cout << ia[i][j] << " ";
	cout << endl;

	// 版本3使用普通for语句，使用指针
	for(int (*p)[4] = ia; p != ia + 3; ++p)
		for(int *q = (*p); q != (*p) + 4; ++q)
			cout << *q << " ";
	cout << endl;
	return 0;
}