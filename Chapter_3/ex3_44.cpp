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
	using int_array = int [4];
	int ia[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
	for(int_array &p : ia)
		for(int q : p)
			cout << q << " ";

	cout << endl;

	for(size_t i = 0; i != 3; ++i)
		for(size_t j = 0; j != 4; ++j)
			cout << ia[i][j] <<" ";
	cout << endl;

	for(int_array (*p) = ia; p != ia + 3; ++p)
		for(int (*q) = *p; q != *p + 4; ++q)
			cout << (*q) << " ";
	cout << endl;
	return 0;
}