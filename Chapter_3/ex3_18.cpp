/*
下面的程序合法吗？如果不合法，你准备如何修改？
*/
#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	// vector<int> ivec; // 空vector对象
	// ivec[0] = 42; // 错误：ivec不包含任何元素

	vector<int> ivec(1, 0);
	ivec[0] = 42;

	vector<int> ivec2(1, 42);

	vector<int> ivec3{42};

	return 0;
}