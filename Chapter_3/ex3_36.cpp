/*
编写一段程序，比较两个数组是否相等。再写一段程序，比较两个vector对象是否相等。
*/

#include <iostream>
#include <iterator>
#include<vector>

using std::vector;
using std::cout;
using std::endl;
using std::begin;
using std::end;

int main()
{
	int arr1[] = {1, 2, 3}, arr2[] = {1, 2, 3};
	int *pbeg1 = begin(arr1), *pend1 = end(arr1);
	int *pbeg2 = begin(arr2), *pend2 = end(arr2);

	bool flag = true;

	if((pend1 - pbeg1) != (pend2 - pbeg2))
		cout << "Not equal! " << endl;
	else
	{
		while(pbeg1 != pend1)
		{
			if(*pbeg1 != *pbeg2)
			{
				cout << "Not equal!" <<endl;
				flag = false;
				break;
			}
			else
			{
				++pbeg1;
				++pbeg2;
			}
		}
		if(flag)
			cout << "Equal!" << endl;
	}

	vector<int> ivec1 = {1, 2, 3}, ivec2 = {2, 3, 4, 5};

	if(ivec2 == ivec1)
		cout << "Equal!" << endl;
	else
		cout << "Not equal!" << endl;

	return 0;
}