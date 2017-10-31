/*
假设有两个包含整数的vector对象，编写一段程序，
检验其中一个vector对象是否是另一个的前缀。
为了实现这一目标，对于两个不等长的vector对象，
只需跳出长度较短的那个，把他的所有元素和另一个vector对象比较即可。
例如，如果两个vector对象的元素分别是0、1、1、2和0、1、1、2、3、5、8，则程序的返回结果为真。
*/

#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main()
{
	vector<int> ivec1 = {0, 1, 1, 2}, ivec2 = {0, 1, 1, 2, 3, 5, 8};
	auto size = (ivec1.size() <= ivec2.size()) ? ivec1.size() : ivec2.size(); 
	for (decltype(ivec1.size()) i = 0; i != size; ++i)
		if (ivec1[i] != ivec2[i]){
			cout << "false" << endl;
			return 0;
		}
	cout << "true" << endl;
	return 0;
}