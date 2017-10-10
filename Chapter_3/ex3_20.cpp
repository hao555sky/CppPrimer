/*
读入一组整数，并把它们存入一个vector对象，将每对相邻整数的和输出出来。改写你的程序，这次要求先输出第一个和最后一个元素的和，接着输出第2个和倒数第2个元素的和，以此类推
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
	int number;
	vector<int> ivec;
	while(cin >> number)
		ivec.push_back(number);

	if (ivec.empty())
	{
		cout << "No number!" << endl;
		return -1;
	}
	else if(ivec.size() == 1)
	{
		cout << ivec[0] << "Just one number!" << endl;
	}
	else
	{
		for(decltype(ivec.size()) index = 1; index != ivec.size(); ++index)
			cout << ivec[index - 1] + ivec[index] << endl;
	}

	decltype(ivec.size()) size = ivec.size();
	if (size % 2 == 0)
		size = size / 2;
	else
		size = size / 2 + 1;
	for(decltype (ivec.size()) index = 0; index != size; ++index)
		cout << ivec[index] + ivec[ivec.size() - index - 1] << endl;

	return 0;
}