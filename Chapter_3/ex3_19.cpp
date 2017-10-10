/*
如果想定义一个含有10哥元素的vector对象，所有元素的值都是42，请列举出三种不同的实现方法。哪种方法更好呢？为什么？
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
	vector<int> ivec(10, 42); // This one is best.

	vector<int> ivec2 = {42, 42, 42, 42, 42, 42, 42, 42, 42, 42};

	vector<int> ivec3;
	for(int i = 0; i != 10; ++i)
		ivec3.push_back(42);

	return 0;

}