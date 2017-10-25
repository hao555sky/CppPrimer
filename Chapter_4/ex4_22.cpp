/*
本节的示例程序将成绩划分为high pass、pass 和fail三种，扩展该程序使其进一步将60分到75分之间的成绩设定为low pass。
要求程序包含两个版本：一个版本只使用条件运算符；另外一个版本使用一个或多个if语句。
哪个版本的程序更统一理解呢？为什么
*/

#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main()
{
	vector<int> ivec = {30, 50, 66, 80, 99};
	for(auto grade : ivec)
		cout << grade << " : " << ((grade < 60) ? "fail" : ((grade < 75) ? "low pass" : ((grade <= 90) ? "pass" : "high pass"))) << endl;

	for (auto grade : ivec)
	{
		cout << grade << " : ";
		if (grade < 60)
			cout << "fail";
		else if(grade < 75)
			cout << "low pass";
		else if (grade <= 90)
			cout << "pass";
		else
			cout << "high pass";
		cout << endl;
	}
	return 0;
}