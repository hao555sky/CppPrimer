/*
编写一段程序，从标准输入读取两个整数，输出第一个数除以第二个数的结果。
*/
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int num1, num2;
	cin >> num1 >> num2;
	cout << num1 / num2 << endl;
	return 0;
}