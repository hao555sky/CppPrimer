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
	for(decltype(ivec.size()) index = 0; index != ivec.size(); ++index)
		cout << ivec[index] << endl;
	return 0;
}