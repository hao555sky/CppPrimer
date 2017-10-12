/*
将上一题刚刚创建的额数组拷贝给另外一个数组。
利用vectro重写程序，实现类似的功能。
*/

#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main()
{
	constexpr size_t size = 10;
	int array1[size] = {}, array2[size] = {};
	for(size_t ia = 0; ia != size; ++ia)
		array1[ia] = ia;

	for(auto ia : array1)
		cout << ia << " ";
	cout << endl;

	for(size_t index = 0; index != size; ++index)
		array2[index] = array1[index];

	for(auto ia : array2)
		cout << ia << " ";
	cout << endl;

	vector<int> ivec, ivec2;
	for(size_t index = 0; index != size; ++index)
		ivec.push_back(index);

	for(auto iv : ivec)
		cout << iv << " ";
	cout << endl;

	ivec2 = ivec;
	for(auto iv : ivec2)
		cout << iv << " ";
	cout << endl;

	return 0;
}

/*
Note: 数组不愿许将内容拷贝给其他数组作为其初始值，也不能用数组为其他数组赋值。
*/